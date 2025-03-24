#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,count,n,next;
	cout<<"Enter the number how much long fibboncci term should displayed:";
	cin>>n;
	a=0;
	b=1;
	cout<<"The fibboncci term is :"<<endl;
	cout<<a<<"\t"<<b;
	count=2;
	while(count<=n)
	{
		next=a+b;
		cout<<"\t"<<next;
		count++;
		a=b;
		b=next;
	}
	getch();
}
