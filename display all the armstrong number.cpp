#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,en,w,t,st,sum,r;
	cout<<"Enter a number somewhere we need to display the armstrong numbers:";
	cout<<"Enter the starting number:";
	cin>>st;
	cout<<"Enter the ending number:";
	cin>>en;
		for(a=st;a<=en;a++)
		{
			t=a;
			sum=0;
			while(t!=0)
			{
				r=t%10;
				w=r*r*r;
				sum=sum+w;
				t=t/10;
			}
			if(sum==a)
			{
			cout<<a<<"\t";
			}
	}
	getch();
}
