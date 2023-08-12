#include<iostream>
using namespace std;
int main()
{
	int n,i=1,sum=0;
	cout<<"Enter the number :";
	cin>>n;
	while(i<n){
		if(n%i==0)
		sum=sum=i;
		i++;
	}
	if(sum==n)
	{
	
		cout<<"is a perfect number";
	}
	else
	{
		cout<<"is not a perfect number";
	}
	return 0;
}
