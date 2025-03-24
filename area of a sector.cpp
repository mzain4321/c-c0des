#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	double area,r,theta;
	cout<<"Enter the r and theta:"
	;cin>>r>>theta;
	area=r*r*theta/2.0;
	cout<<"the area of a sector :"<<area;
	getch();
}
