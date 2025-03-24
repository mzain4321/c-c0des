#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter a number:";
	cin>>a;
	cout<<"Enter a number:";
	cin>>b;
	do
	{
		if(a%2==1)
		cout<<a<<endl;
		a++;
	}
	while(a<=b);
	getch();
}
