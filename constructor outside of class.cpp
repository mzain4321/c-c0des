#include<iostream>
#include<conio.h>
using namespace std;
class stu{
	private: 
		static int n;
		float gpa;
		int roll;
		string name;
		public:
		stu(int x,float y,string z);		
		void show();
};
stu::stu(int x,float y,string z)
{
			cout<<"Enter the name:";
			cin>>z;
			name=z;
			cout<<"Enter roll no:";
			cin>>x;
			roll=x;
			cout<<"Enter gpa:";
			cin>>y;
			gpa=y;
}
void stu::show()
{
	cout<<"roll no:"<<roll<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"gpa:"<<gpa<<endl;
}
int main()
{
	int rol;
	float gp;
	string nam;
	stu s1(rol,gp,nam);
	s1.show();
}
