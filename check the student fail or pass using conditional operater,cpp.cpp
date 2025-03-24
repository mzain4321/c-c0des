#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter the marks:";
	cin>>marks;
	cout<<"the student is:"<<(marks>40 ? "pass":"fail");
	getch();
}
