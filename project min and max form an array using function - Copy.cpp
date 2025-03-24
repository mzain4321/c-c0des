OOP PROJECT NO 1.. 
Find the minimum and maximum number form an array using function.
#include<iostream>
#include<conio.h>
using namespace std;
void input(int arr[],int &size)
{
	for(int i=0;i<size;i++)
	{
		cout<<"PLZ ENTER "<<i+1<<" NUMBER:";
		cin>>arr[i];
	}
}
void output(int a,int b)
{
	cout<<"MINIMUM NUMBER IS.."<<a<<endl;
	cout<<"MAXIMUM NUMBER IS.."<<b<<endl;
}
void processing(int arr[],int &size)
{
	int min,max;
	min=arr[0];
	max=arr[0];
	for(int i=0;i<size;i++)
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
	output(min,max);
}
int main()
{
	int size;
	cout<<"ENTER SIZE..";
	cin>>size;
	int arr[size];
	input(arr,size);
	processing(arr,size);
	
}

