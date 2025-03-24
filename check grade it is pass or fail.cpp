#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char grade;
	cout<<"Enter the grade";
	cin>>grade;
	if(grade=='A'||grade=='B'&& grade=='C')
	{
		cout<<"fail";
	}
	else
	cout<<"pass";
	getch();
}
