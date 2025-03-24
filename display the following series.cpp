#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float a,c;
	a=2.0;
	c=1.0;
	while(a<=100)
	{
		c=c+1.0/a;
		a=a+2.0;
	}
	cout<<c<<endl;
	getch();
}
