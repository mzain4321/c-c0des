#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i=2,n,min;
		cout<<"Enter the series:"<<endl;
			cin>>n;
			min=n;
	while(i<=3)
	{
		if(n<=min)
		{
			min=n;
			cout<<"Enter the series:"<<endl;
			cin>>n;
			if(n<=min)
			{
				min=n;
			}
		i++;
		}
	}
	cout<<"The minimum number is :"<<min;
	getch();
}
