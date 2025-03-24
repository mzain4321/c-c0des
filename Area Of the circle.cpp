#include<iostream>
#include<conio.h>
using namespace std;
double areaOfCircle(float rad)
{
	double pi=3.1415,area;
	
	area=pi*rad*rad;
	return area;
}
int main()
{
	float radius,Area;
	cout<<"Enter radius:";
	cin>>radius;
	Area=areaOfCircle(radius);
	cout<<"the area of the circle:"<<Area<<endl;
}
