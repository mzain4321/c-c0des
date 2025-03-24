#include<iostream>
#include<conio.h>
using namespace std;
class student{
	private:
		int roll;
	 	char name[40];
		float gpa;
		public:
			student()
			{
				cout<<"Enter the roll no:";
				cin>>roll;
				cout<<"Enter the gpa:";
				cin>>gpa;
				cin.ignore();
				cout<<"Enter the name:";
				cin.getline(name,40);
			}
			void show()
			{
				cout<<"the Roll no is:"<<roll<<endl;
				cout<<"name is:"<<name<<endl;
				cout<<"gpa is:"<<gpa<<endl;
			}
};
int main()
{
	student s1;
	s1.show();
}