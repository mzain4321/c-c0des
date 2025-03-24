#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three numbers:";
	cin>>a>>b>>c;
	if((a!=b)&&(b!=c)&&(c!=a))
	{
		cout<<a<<b<<c<<"\t";
		cout<<a<<c<<b<<"\t";
		cout<<b<<a<<c<<"\t";
		cout<<b<<c<<a<<"\t";
		cout<<c<<b<<a<<"\t";
		cout<<c<<a<<b<<"\t";
	}
	else
	{
		if((a==b)&&(a==c))
		cout<<a<<b<<c<<endl;
		else
		{
			if(a==b)
			{
			cout<<a<<b<<c<<"\t";
			cout<<a<<c<<b<<"\t";
			cout<<c<<a<<b<<"\t";
			cout<<c<<b<<a<<"\t";
		}
		else
		{
			if(a==c)
			{
			cout<<a<<b<<c<<"\t";
			cout<<a<<b<<c<<"\t";
			cout<<b<<a<<c<<"\t";
			cout<<c<<b<<a<<"\t";
			cout<<b<<c<<a<<"\t";
		}
		}
	}
}
getch();
}

