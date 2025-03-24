#include<iostream>
#include<conio.h>
using namespace std;
class student{
	private:
		int roll_no;
		string name;
		float gpa;
		public:
			student()
			{
				roll_no=4357;
				name="Danish ali";
				gpa=3.4;
			}
			void show();
};
void student::show()
			{
				cout<<"the Roll no is:"<<roll_no<<endl;
				cout<<"name is:"<<name<<endl;
				cout<<"gpa is:"<<gpa<<endl;
			}
int main()
{
	student s1;
	s1.show();
}