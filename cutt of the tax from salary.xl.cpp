#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int s,rs;
	cout<<"Input the salary:";
	cin>>s;
	if(s>30000)
	{
		rs=s*20/100.0;
		s=s-rs;
		cout<<"the real salary is :"<<s<<endl;
	}
	else if(s<30000 && s>25000)
	{
		rs=s*15/100.0;
		s=s-rs;
		cout<<"the real salary is :"<<s<<endl;
	}
	else if(s<25000)
	{
		rs=s*10/100.0;
		s=s-rs;
		cout<<"the real salary is :"<<s<<endl;
	}
	getch();
	
}
