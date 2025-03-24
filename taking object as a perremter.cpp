#include<iostream>
#include<conio.h>
using namespace std;
class CS{
	private:
	int boys;
	int girls;
	public:
		CS input(CS &cs1)
		{
			cout<<"How many boys in our class:";
			cin>>cs1.boys;
			cout<<"How many girls in our class:";
			cin>>cs1.girls;
			return cs1;
		}
		void output()
		{
			cout<<"boys are:"<<boys<<endl;
			cout<<"girls are:"<<girls<<endl;
		}
};
int main()
{
	int a,b;
	CS cs3,cs4;
	cs4=cs3.input(cs3);
	cs3.output();
}
