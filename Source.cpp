S#include <iostream>
using namespace std;
int main()
	
{
	int i = 0;
	cout << "\t\t\t\tColors\n";
	for (i = 30; i < 47; i++)
	{
		printf("\n\x1b[%dm   Code: xlb:%dm", i,i);
	}
	for (i = 90; i < 106; i++)
	{
		printf("\n\x1b[%dm   Code: xlb:%dm", i, i);
	}
	int j = 0;
	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{  if(i>8&&i<100&&j>50&&j<88)
		{
			continue;
		}
			printf("\n\x1b[%d;%dm   Code: xlb:%d;%dm", i,j, i,j);
		}
	}
		printf("\n\x7b");
		printf("\n\x8b");
		printf("\n\x9b");
		printf("\n\x1");
		printf("\n\x2");
		printf("\n\x3");
		printf("\n\x4");
		printf("\n\x5");
		printf("\n\x6");
		printf("\n\x7");
	
		printf("\n\x10 10"); printf("\n\x11 11");
		printf("\n\x12 12"); printf("\n\x13 13"); 
		printf("\n\x14 14");
		printf("\n\x14 15");
		printf("\n\x14 16");
		printf("\n\x14 17");
		printf("\n\u1F604");
}