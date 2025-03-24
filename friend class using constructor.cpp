#include<iostream>
#include<conio.h>
using namespace std;
class A{
	private:
		int a,b;
		public:
			A()
			{
				a=10;
				b=45;
			}
			friend class B;
};
class B{
	public:
	void show(A obj)
	{
		cout<<"a is:"<<obj.a<<endl;
	}
	void show2(A obj2)
	{
		cout<<"b is:"<<obj2.b<<endl;
	}
};
int main()
{
	A obj1;
	B obj2;
	obj2.show(obj1);
	obj2.show2(obj1);
}
