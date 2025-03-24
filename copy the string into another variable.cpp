#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	char str[30];
	cin.getline(str,30);
	char str1[30];
	//coping the string str sentence into str1..
	strcpy(str1,str);
	cout<<str1<<endl;
	getch();
}
