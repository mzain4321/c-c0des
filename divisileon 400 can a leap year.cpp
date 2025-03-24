#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number:";
	cin>>n;
	if(n%400==0)
	{
		cout<<"this year is of leap year.";
	}
	else
	{
		cout<<"this year is not a leap year.";
	}
	getch();
}
