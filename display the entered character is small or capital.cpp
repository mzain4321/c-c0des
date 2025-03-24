#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter the character :";
	cin>>ch;
	if('a'<=ch && ch<='z')
	{
		cout<<"the entered character is small latter.";
	}
	else
	{
		cout<<"the entered character is not small latter.";
	}
	getch();
}
