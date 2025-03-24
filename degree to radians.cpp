#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
const double PI=3.141593;
int main()
{
	int degree=0;
	double radian;
	cout.setf(ios::fixed);
	cout.precision(6);
	cout<<"degree to radians\n";
	while(degree<=360)
	{
		radian=degree*PI/180;
		cout<<setw(6)<<degree<<setw(6)<<radian<<endl;	
		degree+=10;
	}
	getch();
}
