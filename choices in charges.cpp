#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
	int cho,mon,charges;
	cout<<"standard adult membership"<<endl;
	cout<<"child membership"<<endl;
	cout<<"senior citizen membership"<<endl;
	cout<<"Quit the program"<<endl;
	if(cho>=1 && cho<=3)
	{
		cout<<"give the month numbers:";
		cin>>mon;
		switch(cho)
		{
		case 1: charges=mon*50.0;
		break;
		case 2: charges=mon*20.0;
		break;
		case 3: charges=mon*30.0;
		break;
		}
	cout<<"the total charges are :"<<charges<<endl;
	}
	else if(cho!=4)
	{
	cout<<"there are no charges";	
	}
	getch();
}
