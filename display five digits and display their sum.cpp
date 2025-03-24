#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n=1;
	int sum=0;
	while(n<=5)
	{
		cout<<n<<endl;
		sum=sum+n;
		n=n+1;
	}
	cout<<sum<<endl;
	getch();
}
