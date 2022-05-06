#include <iostream>
using namespace std;
int main()
	
{
	int i = 0;
	cout << "\t\t\t\tColors\n";
	for (i = 30; i < 47; i++)
	{
		printf("\n\x1b[%dm   Code: x1b[%dm", i,i);
	}
	for (i = 90; i < 106; i++)
	{
		printf("\n\x1b[%dm   Code: x1b[%dm", i, i);
	}
	int j = 0;
	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{  if(i>8&&i<100&&j>50&&j<88)
		{
			continue;
		}
			printf("\n\x1b[%d;%dm   Code: x1b[%d;%dm", i,j, i,j);
		}
	}
	//EMOJIS
		printf("\n\x7b x7b");
		printf("\n\x8b x8b");
		printf("\n\x9b x9b");
		printf("\n\x1 x1");
		printf("\n\x2 x2");
		printf("\n\x3 x3");
		printf("\n\x4 x4");
		printf("\n\x5 x5");
		printf("\n\x6 x6");
		printf("\n\x7 x7");
		printf("\n\x10 x10"); printf("\n\x11 x11");
		printf("\n\x12 x12"); printf("\n\x13 x13"); 
		printf("\n\x14 x14");
		printf("\n\x15 x15");
		printf("\n\x16 x16");
		printf("\n\x17 x17");
		
}
