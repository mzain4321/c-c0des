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
				name="danish";
				gpa=3.4;
			}
			void show()
			{
				cout<<"name is:"<<name<<endl;
				cout<<"gpa is:"<<gpa<<endl;
			}
};
class student2:public student{
	public:
		int roll;
		student2()
		{
			cout<<"Enter roll no:";
			cin>>roll;
		}
		void output()
		{
			student::show();
			cout<<"roll:"<<roll<<endl;
		}
};
int main()
{
	student2 s1;
	s1.output();
}
