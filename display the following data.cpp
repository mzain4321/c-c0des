#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,i,s;
	for(i=7;i>=1;i--)
	{
		for(s=1;s<=7-i;s++)
			cout<<" ";
		for(a=1;a<=i;a++)
			cout<<"*";
		cout<<"\n";
	}
	getch();
}
