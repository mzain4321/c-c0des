#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[3];
	int *ptr;
	ptr=&arr[0];
	for(int i=0;i<3;i++)
	{
		cout<<"Enter "<<i+1<<" element:";
		cin>>*ptr;
		ptr++;
	}
	ptr=&arr[0];
	int min,max;
	min=*ptr;
	max=*ptr;
	for(int i=0;i<3;i++)
	{
		if(*ptr>max)
		{
			max=*ptr;
		}
		if(*ptr<min)
		{
			min=*ptr;
		}
		ptr++;
	}
	cout<<"Minimum:"<<min<<endl;
	cout<<"Maximum:"<<max<<endl;
	
}
