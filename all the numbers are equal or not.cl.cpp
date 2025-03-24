#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three numbers :";
	cin>>a>>b>>c;
	if(a==b)
	{
		if(b==c)
		cout<<"all the numbers are equal";
		else
		cout<<"the numbers are different";
	}
	else
	cout<<"all the numbers are different";
	getch();
}
