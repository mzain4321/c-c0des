#include<iostream>
#include<conio.h>
using namespace std;
class stu{
	private:
	int id;
	char name[20];
	public:
		void setid()
		{
			cout<<"Enter id:";
			cin>>id;
		}
		void setname()
		{
			cout<<"Enter name:";
			cin>>name;
		}
		void getid()
		{
			cout<<"id is:"<<id<<endl;
		}
		void getname()
		{
			cout<<"name is:"<<name<<endl;
		}
};
int main()
{
	stu s1;
	s1.setid();
	s1.setname();
	s1.getid();
	s1.getname();
}
