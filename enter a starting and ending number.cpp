#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int s,e;
	cout<<"Enter a starting number:";
	cin>>s;
	cout<<"Enter an ending number:";
	cin>>e;
	while(s<=e)
	{
		if(s%2==0)
		cout<<s<<endl;
		s++;
	}
	getch();
}
