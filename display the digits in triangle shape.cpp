#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,n;
	for(i=1;i<=6;i++)
	{
		for(n=i;n>1;n--)
		cout<<" ";
		for(j=1;j<=6+1-i;j++)
		cout<<j;
		cout<<endl;
	}
	getch();
}
