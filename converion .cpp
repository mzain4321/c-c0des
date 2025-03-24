#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	float km,kg,cm,l;
	char ch;
	cout<<"Enter a number :";
	cin>>n;
	cout<<"Enter a latter:";
	cin>>ch;
	if(ch=='m')
	{
		km=n*1.609;
		cout<<"the output in kilometers is:"<<km<<"kms"<<endl;
	}
	else if(ch=='g')
	{
		l=n*3.785;
		cout<<"the water in liters is "<<l<<"L"<<endl;
	}
	else if(ch=='p')
	{
		kg=n*0.4536;
		cout<<"the weight in kgs is"<<kg<<"kg"<<endl;
	}
	else if(ch=='in')
	{
	cm=n*2.36;
	cout<<"in centimeter:"<<cm<<"cm"<<endl;
	}
	getch();
}

