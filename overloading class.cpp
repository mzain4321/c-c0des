#include<iostream>
#include<conio.h>
using namespace std;
class count{
	private:
	int a;
	int n;
	public:
		count()
		{
			a=10;
			n=1;
		}
		count(int num,int b)
		{
			a=num;
	     	n=b;
		}
		void show()
		{
			cout<<"a is:"<<a<<endl;
			cout<<"n is:"<<n<<endl;
		}
};
int main()
{
	count c1,c2(11,12);
	c1.show();
	c2.show();
}
