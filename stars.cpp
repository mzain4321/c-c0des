#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n=5;
	for(int i=0;i<5;i++)
	{
		for(int k=0;k<n-i;k++)
		{
			cout<<" ";
		}
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
