#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three digits:"<<endl;
	cin>>a>>b>>c;
	if(a>=2)
	{
		if(b%a==0 && c%a==0)
		cout<<"the a is common divisor.";
	}
	else
	{
		cout<<"a is not a common divisor.";
	}
	getch();
}
