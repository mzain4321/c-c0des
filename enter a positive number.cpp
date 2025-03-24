#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int count=0;
	float sum,aver,min,max,num;
	cout<<"Enter a positive number:";
	cin>>num;
	min=num;
	max=num;
	while(num>=0.0)
	{
		sum+=num;
		count++; 
		if(num>max)
		num=max;
		else if(num<min)
		min=num;
		cout<<"Enter a positive number:";
		cin>>num;
	}
	if(count==0)
	cout<<"there is not a positive number ."<<endl;
	else
	cout<<"you entered ("<<count<<") numbers"<<endl;
	aver=sum/count;
	cout<<"the average is :"<<aver<<endl;
	cout<<"the maximum number is :"<<max<<endl;
	cout<<"the minimum number is :"<<min<<endl;
	getch();
}
