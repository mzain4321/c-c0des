#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	float p;
	cout<<"Enter the number :";
	cin>>n;
	p=n*100.0/510;
	cout<<"the persentage is:"<<p<<endl;
	if(p>90)
	{
		cout<<"A";
	}
	else if(p<90 || p>80)
	{
		cout<<"B";
	}
	else if(p<80 || p>70)
	{
		cout<<"C";
	}
	else if(p>60 || p<70)
	cout<<"C";
	else
	{
		cout<<"fail";
	}
	getch();
}
