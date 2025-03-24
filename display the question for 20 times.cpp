#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int q=1,e,count=0,cont=0;
	int con=0,co=0;
	cout<<"What is your name:"<<endl;
		cout<<"1.danish\n 2.abdullah\n 3.nani \n4.noori"<<endl;
	while(q<=5)
	{
		q++;
		cout<<"Enter the number:"<<endl;
		cin>>e;
		if(e==1)
		{
			count++;
		}
		if(e==2)
		{
			cont++;
		}
		if(e==3)
		{
			con++;
		}
		if(e==4)
		{
			co++;
		}
	}
		cout<<"you selected the danish for "<<count<<" time"<<endl;
		cout<<"You selected the abdullah for "<<cont<<" time"<<endl;
		cout<<"You selected the nani for "<<con<<" time"<<endl;
		cout<<"You selected the noori for "<<co<<" time"<<endl;
	getch();
}
