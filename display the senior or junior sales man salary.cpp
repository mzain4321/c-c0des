#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char latter;
	cout<<"Enter a latter:";
	cin>>latter;
	if((latter=='s') || (latter=='S'))
	{
	cout<<"the senior slaesman salary is :400";
	}
	else if((latter=='j'&& latter=='J'))
	{
	cout<<"the junior salesman salary is :250";
	}
	else
	{
	cout<<"error msg";
	}
	getch();
}

