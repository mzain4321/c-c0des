#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int t;
	cout<<"Input the tempreture:";
	cin>>t;
	if(t>35)
	{
		cout<<"hot day";
	}
	else if(35<t || t>25)
	{
		cout<<"pleasent day";
	}
	else if(t<25)
	{
		cout<<"good day";
	}
	getch();
}
