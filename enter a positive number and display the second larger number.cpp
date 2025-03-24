#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int l,l_2,e;
	float n;
	cout<<"ENter a positive number:";
	cin>>n;
	l=n;
	l_2=n;
	while(n>0.0)
	{
		if(n>l_2)
		l=n;
		if(n<l)
		l_2=n;
		cout<<"ENter a positive number:";
		cin>>n;
	}
	cout<<"The second larger number is:"<<l_2;
	getch();
}
