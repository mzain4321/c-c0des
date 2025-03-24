#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,en,st,i,sum=0;
	cout<<"ENter the starting number:";
	cin>>st;
	cout<<"Enter the end of perfect numbers:";
	cin>>en;
	for(a=st;a<=en;a++)
	{
		sum=0;
		for(i=1;i<=a;i++)
		{
		if(a%i==0)
		{
	    	sum=sum+i;
		}
		if(i==sum)
		{
			cout<<a<<"\t";
		}
		}
	}
	getch();
}
