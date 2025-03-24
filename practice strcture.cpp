#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
struct stu{
	int id;
	char name[10];
};
struct stu2{
	int id2;
	char name2[10];
};
void swapping(stu s,stu2 s2)
{
	cout<<"Enter name:";
	cin.getline(s.name,10);
	cout<<"Enter id:";
	cin>>s.id;
	cin.ignore();
	cout<<"Enter name:";
	cin.getline(s2.name2,10);
	cout<<"Enter id:";
	cin>>s2.id2;
	cout<<"Before swapping OUTPUT."<<endl;
	cout<<"name:"<<s.name<<endl;
	cout<<"id:"<<s.id<<endl;
	cout<<"name:"<<s2.name2<<endl;
	cout<<"id:"<<s2.id2<<endl;
	char swap[10];
	strcpy(swap,s.name);
	strcpy(s.name,s2.name2);
	strcpy(s2.name2,swap);
	int swap2;
	swap2=s.id;
	s.id=s2.id2;
	s2.id2=swap2;
	cout<<"After swapping OUTPUT."<<endl;
	cout<<"name:"<<s.name<<endl;
	cout<<"id:"<<s.id<<endl;
	cout<<"name:"<<s2.name2<<endl;
	cout<<"id:"<<s2.id2<<endl;
}
int main()
{
	stu s3;
	stu2 s4;
	swapping(s3,s4);
}
