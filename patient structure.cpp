#include<iostream>
#include<conio.h>
using namespace std;
struct patient{
	int p_id;
	char name[20];
	char dis[50];
};
void input(patient &p2)
{
	cout<<"Enter patient id:";
	cin>>p2.p_id;
	cout<<"Enter patient name:";
	cin>>p2.name;
	cout<<"Enter patient disease:";
	cin>>p2.dis;
}
void output(patient p3)
{
	cout<<"Patient id:"<<p3.p_id<<endl;
	cout<<"Patient name:"<<p3.name<<endl;
	cout<<"Patient disease:"<<p3.dis<<endl;
}
int main()
{
	patient p;
	input(p);
	output(p);
	getch();
}
