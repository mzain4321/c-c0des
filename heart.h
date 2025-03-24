#include<iostream>
using namespace std;
void U(int n)
{
	int i,j;
	for(i=0;i<n-4;i++)
	{
		cout<<"    ";
		for(j=0;j<n/2;j++)
		{
			cout<<"*";
		}
		for(j=0;j<n/2;j+=2)
		{
			cout<<" ";
		}
		for(j=0;j<n/2;j++)
		{
			cout<<"*";
		}
		for(j=0;j<n/2;j+=2)
		{
			cout<<" ";
		}	
		cout<<endl;
	}
	for(i=0;i<2;i++)
	{
		cout<<"    ";
		for(j=0;j<i;j++)
		{
			cout<<" ";
		}
		for(j=0;j<n+3-(i*2);j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
void I(int n)
{
	int i,j;
	for(i=0;i<10;i++)
	{
		cout<<"    ";
		if(i==0||i==1||i==8||i==9)
			{
				n=18;
			}
			if(i==2||i==3||i==4||i==5||i==6||i==7)
			{
				cout<<"  ";
				n=10;
			}
		for(j=0;j<n/2;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
void heart(int n)
{
	int i,j;
	for(i=n/2;i<n;i+=2)
	{
		for(j=0;j<n-i;j+=2)
		{
			cout<<" ";
		}
		for(j=0;j<i;j++)
		{
			cout<<"*";
		}
		for(j=1;j<n-i;j+=2)
		{
			cout<<" ";
		}
		for(j=0;j<i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=n;i>1;i--)
	{
		for(j=i;j<=n;j++)
		{
			cout<<" ";
		}
		for(j=1;j<(i*2)-1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
