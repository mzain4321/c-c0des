#include<iostream>
#include<conio.h>
using namespace std;
class satat{
	private:
		static int n;
		char name[50];
		int num;
		float gpa;
		public:
			satat()
			{
				n++;
				num=n;
				
			}
			void in()
			{
				cout<<"enter name:";
				cin.getline(name,50);
				cout<<"Enter gpa:";
				cin>>gpa;
			}
			void show()
			{
				cout<<" U Enter "<<num<<" members."<<endl;
				cout<<"name:"<<name<<endl;
				cout<<"gpa:"<<gpa<<endl;
			}
};
int satat::n=0;
int main()
{
	satat s1,s2;
	s1.in();
	s1.show();
	cin.ignore();
	s2.in();
	s2.show();
}
