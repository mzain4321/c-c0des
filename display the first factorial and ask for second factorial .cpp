#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int cn,cl=1,n=1,n_2=1,sum,sum_2,f,c,a,r;
	cout<<"Enter the number:";
	cin>>a;
	for(f=1;f<=a;f++)
	{
		n=n*f;
		sum=sum+n;
	}
	cout<<"the fectorial of "<<a<<"is:"<<sum<<endl;
	while(cl<=1)
	{
	cout<<"would you want to take an fectorial of any number:"<<endl;
	cin>>c;
	if(c==1)
	{
		cout<<"Enter a number:";
		cin>>cn;
		for(r=1;r<=cn;r++)
		{
			n_2=n_2*r;
			sum_2=sum_2+n_2;
	cout<<"the factorial of your choicii number is:"<<sum_2;
		}
	}
	else if(c==0)
	{
		cout<<" ";
	}
	cl++;
	}
	getch();
}
