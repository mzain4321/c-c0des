#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num=1,sum=0;
	cout<<"num\tsum"<<endl;
	while(num<=5)
	{
		sum=sum+num;
		cout<<num<<"\t"<<sum<<endl;
		num++;
	}
	getch();
}
