#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	float area,r,cir;
	int cho;
	cout<<"Enter the radius:";
	cin>>r;
	cout<<"Enter the choice number :";
	cin>>cho;
	if(cho==1)
	{
		area=r*r*3.141;
		cout<<"Area:"<<setprecision(2)<<area<<endl;
	}
	else if(cho==2)
	{
		cir=2.0*3.141*r;
		cout<<"Cir:"<<setprecision(2)<<cir<<endl;
	}
	else
	{
		cout<<"there is no entry";
	}
	getch();
}
