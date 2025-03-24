#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	int a=5,i,j,n;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=a;j++)
		cout<<" ";
		for(n=1;n<=i;n++)
		cout<<setw(2)<<i;
		cout<<endl;
		a--;
	}
	getch();
}
