#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		j=i;
		while(j<=7)
		{
			cout<<"*";
			j++;
		}
		cout<<"\n";
	}
	getch();
}
