#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,o;
	char latter;
	cout<<"1.convert ASHII value to character."<<endl;
	cout<<"2.convert character value to the ASCHII."<<endl;
	cout<<"ENter your choice:"<<endl;
	cin>>o;
	switch(o)
	{
		case 1:
			cout<<"enter the aschii number:";
			cin>>n;
			cout<<"the corresponding number is":<<char(n)<<endl;
			break;
			case 2:
				cout<<"Enter the character:";
				cin>>latter;
				cout<<"the corresponding character is:"<<int(latter)<<endl;
				break;
				default:
					cout<<"the option is not valid";
					break;
	}
	getch();
}
