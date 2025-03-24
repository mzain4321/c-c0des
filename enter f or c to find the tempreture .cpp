#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	float C,F;
	char ch;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	cout<<"ENter the latter:";
	cin>>ch;
	if(ch=='f')
	{
		C=(n-32)*5.0/9.0;
		cout<<"the tempreture in celcius is :"<<C<<endl;
	}
	else if(ch=='c')
	{
		F=(n+32)*5.0/9.0;
		cout<<"the tempreture in fornheit is:"<<F<<endl;
	}
	else
	cout<<"the input is invalid.";
}
