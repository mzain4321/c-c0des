#include<iostream>
#include<conio.h>
using namespace std;
struct date{
	int day;
	int month;
	int year;
};
struct student{
	int id;
	char name[10];
	char addres[10];
	date d1;
};
int main()
{
	student s1;
	cout<<"Enter stu name:";
	cin.getline(s1.name,10);
	cout<<"Enter stu id:";
	cin>>s1.id;
	cin.ignore();
	cout<<"Enter stu address:";
	cin.getline(s1.addres,20);
	cout<<"Enter birthday date.."<<endl;
	cout<<"Enter day:";
	cin>>s1.d1.day;
	cout<<"Enter month:";
	cin>>s1.d1.month;
	cout<<"Enter year:";
	cin>>s1.d1.year;
	cout<<"OUTPUT OF THE PROGRAM.."<<endl;
	cout<<"student id:"<<s1.id<<endl;
	cout<<"student name:"<<s1.name<<endl;
	cout<<"student address:"<<s1.addres<<endl;
	cout<<"birthday of the student is at\n";
	cout<<s1.d1.day<<"-"<<s1.d1.month<<"-"<<s1.d1.year<<endl;
	getch();
}
