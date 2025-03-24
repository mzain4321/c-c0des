#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int countw=1,countch=0;
	cout<<"Enter a sentance:"<<endl;
	char ch='a';
	while(ch!='\r')
	{
		ch=getche();
		if(ch=='')
		countw++;
		else
		countch++;
	}
	cout<<countw<<endl;
	cout<<countch-1<<endl;
	getch();
}
