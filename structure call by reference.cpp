#include<iostream>
#include<conio.h>
using namespace std;
struct stu{
	int id;
	char name[10];
};
void out(stu s2)
{
	cout<<"id:"<<s2.id<<endl;
	cout<<"name:"<<s2.name<<endl;
}
void input(stu &s1)
{
	cout<<"Enter id:";
	cin>>s1.id;
	cout<<"Enter name:";
	cin>>s1.name;
	out(s1);
}
int main()
{
	stu s;
	input(s);
}
