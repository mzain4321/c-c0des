#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,mid,num,n,sum=0;
	cout<<"Enter the number to check it is perfect are not:";
	cin>>num;
	n=num;
	mid=num/2;
	for(i=1;i<=mid;i++)
	{
		sum=sum+i;
	}
	if(sum=n)
	{
		cout<<"It is an perfect number:"<<n;
	}
	else
	cout<<"It is not a perfect number:"<<n;
	getch();	
}
