#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,i=3;
	cout<<"The series:";
	for(a==1;a<=40;a++)
	{
		if(a%2==0)
		a=-(a+i);
		else
		a=(a=i);
	}
	cout<<a<<"\ ";
	getch();
}
