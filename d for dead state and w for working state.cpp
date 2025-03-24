#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char s;
	do
	{
	cout<<"word (\'w\' for working state and \'d\' for dead state)";
	cin>>s;
	}
	while(s!='w'&&s!='d');
	getch();
}
