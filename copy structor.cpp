#include<iostream>
#include<conio.h>
using namespace std;
class stu{
	public:	
		int roll;
		float gpa;
		public:
			stu(int a,float b)
			{
				roll=a;
				gpa=b;
				cout<<"Ur first output is.."<<endl;
				cout<<roll<<endl;
				cout<<gpa<<endl;
			}
			stu(const stu &s){
				int rol=s.roll;
				int gpa2=s.gpa;
				cout<<"Ur second output is.."<<endl;
				cout<<rol<<endl;
				cout<<gpa2<<endl;
			}
			void show()
			{
				cout<<roll<<endl;
				cout<<gpa<<endl;
			}
};
int main()
{
	int rol;
	float gpa;
	cout<<"Enter roll no and gpa:";
	cin>>rol>>gpa; 
	stu s1(rol,gpa);
	s1.show();
	}
