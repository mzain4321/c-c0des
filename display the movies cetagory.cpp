#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter the character:";
	cin>>ch;
	switch(ch)
	{
		case 'A':
			cout<<"Advanture movies";
			break;
			case 'C':
				cout<<"comedy movies";
				break;
				case 'F':
					cout<<"Family movies";
				break;
				case 'H':
					cout<<"horror movies";
					break;
					case 'S':
						cout<<"science fiction movies";
						break;
					defualt:
						cout<<" invalid ";
					}
					getch();
				}
