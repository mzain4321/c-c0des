#include<iostream>
#include<conio.h>
using namespace std;
class data{
	private:
		int id;
		char name[10];
	public:
		void aid()
		{
			cout<<"enter id:";
			cin>>id;
		}
		void aname()
		{
			cin.ignore();
			cout<<"name:";
			cin.getline(name,10);
		}
		void display();
};
void data::display(){
	cout<<"name:"<<name<<endl;
	cout<<"id:"<<id<<endl;
}
int main()
{
	data d1;
	d1.aid();
	d1.aname();
	d1.display();
}
