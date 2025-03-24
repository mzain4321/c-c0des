#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int r,c;
	cout<<"Enter row:";
	cin>>r;
	cout<<"Enter col:";
	cin>>c;
	int arr[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<"enter the elements:";
			cin>>arr[i][j];
		}
	}
	int arr1[r][c+1]={0};
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<arr[i][j]<<"\t";
			arr1[r][c+1]=arr1[r][c+1]+arr[i][j];
		}
		cout<<arr1[r][c+1]<<endl;
		arr1[r][c+1]={0};
	}
}
