#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,n,next;
	cout<<"Enter a number";
	cin>>n;
	if(n==0||n==1)
		cout<<n<<"it is fiboncii number.";
	else
		a=0;
		b=1;
		next=a+b;
	while(next<n)
	{
		next=a+b;
		a=b;
		b=next;
	}
	if(next==n)
	{
		cout<<"its fiboncii number.";
	}
	else
	{
		cout<<"its not a fiboncii number.";
	}
	getch();
}
