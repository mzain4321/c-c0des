#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *min,*max;
	int arr[3];
	for(int i=0;i<3;i++)
	{
		cout<<"Enter a number:";
		cin>>arr[i];
	}
	min=&arr[0];
	max=&arr[0];
	for(int i=0;i<3;i++)
	{
		if(*max++>*max)
		{
			*max=*max++;
		}
		if(*min++<*min)
		{
			*min=*min++;
		}
	}
	cout<<"min"<<*min<<endl;
	cout<<"max"<<*max<<endl;
}
