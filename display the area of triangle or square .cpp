#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int s,h,w;
	char cho;
	float at,as;
	cout<<"Enter the side width and length:"<<endl;
	cin>>s>>h>>w;
	cout<<"Enter the choice:";
	cin>>cho;
	if(cho=='s')
	{
		as=s*s;
		cout<<"the area of the square is:"<<as<<endl;
	}
	else if(cho=='t')
	{
		at=0.5*h*w;
		cout<<"the area of the triangle is :"<<at<<endl;
	}
	else
	{
		cout<<"the input is nvalid.";
	}
	getch();
}
