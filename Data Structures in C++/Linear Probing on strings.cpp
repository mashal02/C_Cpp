#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#define size 6235
using namespace std;

class hashtable {
public:
	string arr[size];
	hashtable()
	{
		for (int i = 0; i < size; i++)
			arr[i] = "";
	}

	int hashFunction(string x) // For string
	{
		int hash = 0;
		for (int i = 0; i < x.length(); i++)
		{
			hash += (int(x[i])); // taking sum of ascii values
		}
		return abs(hash % size);
	}

	void insertstring(string s)
	{ //done by linear probing
		int index = hashFunction(s);
		for (int i = 0; i < size; i++)
		{
			if (arr[(index + i) % size] == "")  //to check if cell is empty or not.
			{
				arr[(index + i) % size] = s;
				return;
			}
		}
	}
	void findindex(string s)
	{
		int index = hashFunction(s);
		while (arr[index] != s)
		{
			index++;
		}

		cout << s << " is at index # " << index;
	}
	void printhashtable()
	{
		cout << "ALL MOVIES AND SHOWS: " << endl;
		for (int i = 0; i < size; i++)
		{
			cout << i << "\t" << arr[i] << endl;
		}
	}
};
hashtable titles;
void readfile()
{
	string data;
	fstream netflix; //File Pointer
	netflix.open("C:\\Users\\HP\\Downloads\\countries.csv", ios::in);
	if (netflix.fail()) {
		cout << "COULD NOT READ FILE\n";
		exit(1);
	}
	getline(netflix, data);
	int line = 0;
	string value;
	while (!netflix.eof())
	{
		line++;
		getline(netflix, value);
		titles.insertstring(value);
	}
}
int main()
{
	readfile();
	//titles.printhashtable();
	while (1) {
		cout << "\nWELCOME TO NETFLIX IMPLEMENTATION ON HASHTABLES\nBy Mashal Ashfaque\n\n\t1-Search movie by location (index)\n\t2-Search location of a movie\n\t3-Show all movies.";
		int choice;

		cin >> choice; getchar();
		while (choice > 3 || choice < 1)
		{
			cout << "Invalid choice. Please select 1, 2 or 3.\n";
			cin >> choice;
		}
		switch (choice)
		{
		case 1: {
			cout << "\nWe have a total of 6235 movies and shows.\nEnter a number 0-6235 and we'll show what movie is over there.\n";
			int s; cin >> s;
			cout << "\"" << titles.arr[s] << "\" is stored at your entered index." << endl;
			break;
		}
		case 2: { cout << "\nTo find location of a movie, please enter its title. " << endl;
			string m;
			getline(cin, m);
			titles.findindex(m);
			cout << endl;
			break; }
		case 3:
			titles.printhashtable();
		}
	}
}
