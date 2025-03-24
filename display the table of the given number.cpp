#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,n=1,u;
	cout<<"input a digit";
	cin>>a;
	while(n<=10)
	{
		cout<<a<<"*"<<n<<"="<<a*n<<endl;
		n=n+1;
	}
	getch();
}
