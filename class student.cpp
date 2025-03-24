#include<iostream>
#include<conio.h>
using namespace std;
class stu{
	private:
		int id;
		char name[10];
		public:
			void display();
			void aid()
			{
				cout<<"Enter id:";
				cin>>id;
			}
			void aname()
			{
				cout<<"Enter name:";
				cin>>name;
			}
};
void stu::display()
			{
				cout<<"id:"<<id<<endl;
				cout<<"name:"<<name<<endl;
			}
int main()
{
	stu s[3];
	for(int i=0;i<3;i++)
	{
		s[i].aid();
		s[i].aname();
	}
	for(int i=0;i<3;i++)
	{
		s[i].display();
	}
}
