#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a;
	cout<<"enter the end of the series:";
	cin>>a;
	for(int n=1;a>=n;n=n+3)
	{
		cout<<n<<"\ ";
	}
	getch();
}
