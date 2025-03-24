#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int y,m;
	cout<<"Enter the year and month :";
	cin>>y>>m;
	if(m==1) {
		cout<<"january of "<<y<< "have 31 days";
	} else if(m==2) {
		if(y%4!=0)
			cout<<"febrary of "<<y<< "have 28 days";
		else
			cout<<"febrary of "<<y<< "have 29 days";
	} else if(m==3) {
		cout<<"march of "<<y<< "have 31 days";
	} else if(m==4) {
		cout<<"april of "<<y<< "have 30 days";
	} else if(m==5) {
		cout<<"may of "<<y<< "have 31 days";
	} else if(m==6) {
		cout<<" june of "<<y<< "have 30 days";
	} else if(m==7) {
		cout<<"july of "<<y<< "have 31 days";
	} else if(m==8) {
		cout<<"agust of "<<y<< "have 31 days";
	} else if(m==9) {
		cout<<"september of "<<y<< "have 30 days";
	} else if(m==10) {
		cout<<"octuber of "<<y<< "have 31 days";
	} else if(m==11) {
		cout<<"november of "<<y<< "have 30 days";
	} else if(m==12) {
		cout<<"december of "<<y<< "have 31 days";
	} else
		cout<<"this programme for only 12 months output.";
	getch();
}
