#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,p=2;
	cout<<"Enter the limit of the prime numbers:";
	cin>>n;
	cout<<p<<" ";
	while(p<=n)
	{
		if(p%2==1)
		{
		cout<<p<<" ";
		}
		if(p%2==0)
		{
			cout<<" ";
		}
		p++;
	}
	getch();
}
