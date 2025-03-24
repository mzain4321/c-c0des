#include<iostream>
#include<conio.h>
using namespace std;
class stu{
	//private: 
	public:
		static int n;
		float gpa;
		int roll;
		char name[20];
		//public:
			
		void in()
			{
				cout<<"Enter name:";
				gets(name);
				cout<<"Enter gpa:";
				cin>>gpa;
				cin.ignore();
			}
				stu()
			{
				n++;
				roll=n;
			}
			void show();
};
void stu::show()
{
	cout<<"roll no:"<<roll<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"gpa:"<<gpa<<endl;
}
int stu::n=4357;
int main()
{
	stu s1,s2;
	s1.in();
	s2.in();
	s1.show();
	s2.show();
}
