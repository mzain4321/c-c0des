#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter the array's "<<i+1<<" number:";
		cin>>arr[i];
	}
	int min,max;
	min=max=arr[0];
	for(int i=0;i<5;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	cout<<"The maximum value is:"<<max<<endl;
	cout<<"The minimum value is:"<<min<<endl;
	
}