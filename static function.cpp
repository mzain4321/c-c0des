#include<iostream>
using namespace std;
class patient{
	private:
	 	int id;
	    string name="umar ";
	 	static int n;
	public:
patient(){
    n++;
	id=n;	
}
static void output(patient p2)
{
	cout<<"Patient ID = "<<p2.id<<endl;
	cout<<"Patient Name = "<<p2.name<<endl;
}
};
int patient::n=4395;
int main()
{
	patient p3;
	p3.output(p3);
}
