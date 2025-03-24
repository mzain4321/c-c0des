#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int d(24),a(60),n(60),h1(12),h2(12),m1(60),m2(60),s1(60),s2(60);
	cout<<"the first time:";
	cin>>h1>>m1>>s1;
	cout <<"Enter the second time:";
	cin>>h2>>m2>>s2;
	d=h1+h2;
	a=m1+m1;
	n=s1+s2;
	cout<<"the total time is:"<<d<<":"<<a<<":"<<n<<endl;
	getch();
}
