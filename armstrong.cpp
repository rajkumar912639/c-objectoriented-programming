#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int sum=0,temp,num,i=1,n=0;
	cout<<"Enter the number :";
	cin>>num;
	i=num;
	while(n>0)
	{n=num%10;
	num=num/10;
	sum=sum+(n*n*n);
	}
	if(sum==i)
	{
		cout<<endl<<"Entered number is armstrog ";
	}
	else 
	{
		cout<<"entered number is not a armstrong number";
	}
	return 0;
}
