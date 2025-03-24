#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int grade;
	float bonus,salary;
	cout<<"Input the the salary";
	cin>>salary;
	cout<<"grade";
	cin>>grade;
	if(grade>15)
	{
		bonus=salary*50.0/100.0;
	}
	else
	{
		bonus=salary*25.0/100.0;
		salary=salary+bonus;
	}
		cout<<"the salary is:"<<salary;
	getch();
}
