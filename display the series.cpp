#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,x,r,sum;
	for(n=1;n<=20;n++)
	{
		r=x^n;
		sum=sum+r;
	}
	cout<<sum;
	getch();
}
