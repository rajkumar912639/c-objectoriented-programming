#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int max_num(int a[],int n);
	int n;
	int a[45];
	cout<<"Enter the size of array :";
	cin>>n;
	cout<<"Enter the nunbers :";
	for(int i=0;i<=n;i++)
	cin>>a[i];
	int max = max_num(a,n) ;
	cout<<"the  lardest number is : "<<max;
	getch();
}
int max_num(int a[],int n){
	int i,m=0;
	for(i=0;i<n;i++){
		if (a[i]>m)
		
	m=a[i];
	}
	return m;
}
