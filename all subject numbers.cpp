#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int u,i,e,p,c,total,per;
	cout<<"Enter the marks in all subjects:"<<endl;
	cin>>u>>i>>e>>p>>c;
	total=u+i+e+p+c;
	cout<<"the total marks are:"<<total<<endl;
	per=total*100/505;
	cout<<"the persentage is :"<<per;
	getch();
}
	
