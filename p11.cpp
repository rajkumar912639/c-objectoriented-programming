// swappin the numbers 
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"enter the two numbers :";
	cin>>x>>y;
	cout<<" Before swapping the numbers are:"<<x<<y;
	int temp;
	temp =x;
	x=y;
	y=temp;
	cout<<"After swapping the numbers are :"<<x<<y;
	return 0;
}
