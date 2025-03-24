#include<iostream>
#include<conio.h>
using namespace std;
struct library
{
	char name[10];
	int id;
	int amount;
};
struct borrow2{
	int id;
	int days;
	char name[10];
	char fname[10];
};
struct borrow
{
	int id;
	char name[20];
	char fname[20];
	int days;
};
int show_pass(int pas);
int password(int pass);
int bor(borrow d[],library g[],int&);
void boror_stu(borrow f[],int &estu);
int re_enter(library a[]);
void show(library c[],int &last);
void check(library b[],int &last);
int librarian(library b[],int&,int &n);
void ret(library f[],borrow e[],int&);
void enter(library e[],int &last);
void student(borrow bo[],library lib[],int&);
							//int main
int main()
{
	int last,numb;
	library l[last];
	borrow b[last];
	int count=0;
	int pass1=1234,n,res,a,s,pass,est,*pass2;
	do{
		pass2=&pass1;
		cout<<"Enter the password to run the program:";
		cin>>pass;
		if(pass==pass1)
		{
		if(count==0)
		{
			cout<<"how many books u want to enter.";
			cin>>last;
			count++;
			enter(l,last);
		}
		cout<<"\t\t**library Management."<<endl<<endl;
			cout<<"\t\t1.librarian."<<endl<<endl;	
			cout<<"\t\t2.student."<<endl<<endl;
			cout<<"\t\t3.close application."<<endl<<endl;
			cout<<"\t\t choose anyone:";
			cin>>n;
			if(n==1)
			{
				int num;
				cout<<"\t\t1.Re-enter the books."<<endl<<endl;
				cout<<"\t\t2.change the password."<<endl<<endl;
				cout<<"\t\t3.check the book detail."<<endl<<endl;
				cout<<"\t\t4.show all books."<<endl<<endl;
				cout<<"\t\t5.close this option."<<endl<<endl;
				cout<<"\t\tChoose anyone:";
				cin>>num;
				res=librarian(l,last,num);
				if(num==2)
				{
					pass1=res;
				}	
			}
			else if(n==2)
			{
				student(b,l,last);
			}
			else if(n==3)
			{
				s=4;
			}
		}
		else
		{
			cout<<"try again."<<endl;
			s++;
			if(s==4)
			{
			cout<<"u are not eligible to enter the library."<<endl;
			}
		}
	}
	while(s<=3);
	cout<<"Now u are out of the program.";
	getch();
}
//functions						//librarian
int librarian(library b[],int &last,int &n)
{
	cout<<last<<endl;
	int pas,count=0;
	int a,num;
	int end;
	if(n==1)
	{
		count++;
		last=re_enter(b);
	}
	else if(n==2)
	{
		return show_pass(a);
	}
	else if(n==3)
	{
		check(b,last);
	}
	else if(n==4)
	{
		show(b,last);
	}
	else if(n==5)
	{
		end;
	}
	cout<<"now u are out of program."<<endl;
}
							//check the books
void check(library b[],int &last)
{
	int idd,c,n;
	cout<<"the available books are"<<endl;
	cout<<endl;
	show(b,last);
	cout<<"If u want to see any book's detail u enter book's id:";
	cin>>idd;
	for(int i=0;i<last;i++)
	{
		if(idd==b[i].id)
		{
			n++;
			cout<<"the book is:"<<b[i].name<<endl;
			cout<<"its available copies are:"<<b[i].amount<<endl;
			cout<<"book id:"<<b[i].id<<endl;
		}
		cout<<endl;
	}
	if(n==0)
	{
		cout<<"the book is not found."<<endl;
	}
}
							//re enter books
int re_enter(library a[])
{
	int last;
	cout<<"how many books u want to enter:";
	cin>>last;
	for(int i=0;i<last;i++)
	{
		cout<<"Enter the book name:";
		cin>>a[i].name;
		cout<<"Enter the book id:";
		cin>>a[i].id;
		cout<<"Enter the copies of this book:";
		cin>>a[i].amount;		
	}
	cout<<endl<<endl;
	return last;
}
								//enter
void enter(library e[],int &last)
{
	for(int i=0;i<last;i++)
	{
		cout<<"Enter the book name:";
		cin>>e[i].name;
		cout<<"Enter the book id:";
		cin>>e[i].id;
		cout<<"Enter the copies of this book:";
		cin>>e[i].amount;
	}		
	cout<<endl<<endl;	
	//return last;
}						
	// show books
void show(library d[],int &last)
{
	for(int i=0;i<last;i++)
	{
		cout<<"name:"<<d[i].name<<"\t";
		cout<<"id:"<<d[i].id<<"\t";
		cout<<"amount:"<<d[i].amount<<endl;
	}
	cout<<endl;
}
					//password
int password(int pass)
{
		cout<<"enter the new password:";
		cin>>pass;
		return pass;
}
int show_pass(int pas)
{
	int num;
	return password(num);
	cout<<endl<<endl;
}
							//borrow
int bor(borrow d[],library g[],int &last)
{
	int estu,count=0;
	cout<<"the available books are"<<endl;
	cout<<endl;
	show(g,last);
	cout<<endl;
	cout<<"How many student want to take borrow book:";
	cin>>estu;
	for(int i=0;i<estu;i++)
	{
	cout<<"Enter the name of student:";
	cin>>d[i].name;
	cout<<"Enter student's father name:";
	cin>>d[i].fname;
	cout<<"Enter book id which u want to take:";
	cin>>d[i].id;
	cout<<"for how many days:";
	cin>>d[i].days;
	cout<<endl;
	}
	cout<<endl;
	int n=0;
	for(int i=0;i<last;i++)
	{
		if(d[i].id==g[i].id)
		{
			count++;
			n++;
			int amo=0;
			cout<<"The book is:"<<d[i].name<<endl;
			amo=g[i].amount-1;
			cout<<"the remaining books of this copyies are:"<<amo<<endl;
		}
		if(count==1)
		{
			break;
		}
	}
	if(n==0)
	{
			cout<<"this book is not available."<<endl;
	}
	cout<<endl;
	cout<<endl;
	cout<<"estu is:"<<estu;
	return estu;
} 							//return books
void ret(borrow e[],library f[],int &last)
{
	int id,n=0;
	show(f,last);
	cout<<"Enter the id of book which u return:";
	cin>>id;
	for(int i=0;i<last;i++)
	{
	if(id==e[i].id)
	{
		cout<<"your name is:"<<e[i].name<<endl;
		cout<<"your father name:"<<e[i].fname<<endl;
		n++;
	}
	else
	{
		cout<<"Sorry! this book is not of this library."<<endl;
	}
	}
	cout<<endl;
	if(n==0)
	{
		cout<<"your name is not found."<<endl;
	}
	else
	{
		cout<<"your name id deleted from borrowed book list.\n";
	}
	cout<<endl<<endl;
}
								//student
void student(borrow bo[],library lib[],int &last)
{
	int count=0;
	int num,end,n;
	cout<<"\t\t1.take a book borrow."<<endl<<endl;
	cout<<"\t\t2.show all student who have taken books borrow."<<endl<<endl;
	cout<<"\t\t3.return a book."<<endl<<endl;
	cout<<"\t\t4.get out from this option."<<endl<<endl;
	cout<<"\t\tchoose anyone:";
	cin>>num;
	if(num==1)
	{
		end=bor(bo,lib,last);
	}
	else if(num==2)
	{
		boror_stu(bo,end);
		cout<<"There is no other students who have taken borrow books."<<endl;
	}
	else if(num==3)
	{
		ret(bo,lib,last);
	}
	else if(num==4)
	{
		end;
	}
	cout<<endl<<endl;
}
void boror_stu(borrow f[],int &estu)
{
	for(int i=0;i<estu;i++)
	{
		cout<<"your name is:"<<f[i].name<<endl;
		cout<<"your father name:"<<f[i].fname<<endl;
		cout<<"you are given this book for "<<f[i].days<<" days."<<endl;
	}
}
