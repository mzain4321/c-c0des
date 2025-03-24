#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int f,c,sum,n;
	f=1;
	n=5;
	while(n>=1)
	{
		c=n;
		while(c>=1)
		{
			f=f*c;
			sum=sum+f;
			c--;
		}
	n--;;
	}
	cout<<sum;
	getch();
}
