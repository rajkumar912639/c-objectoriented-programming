#include<iostream>
#include<string.h>
using namespace std;
long fact(int);
int main ()
{
int i,j,line;
cout<<"enter the no of lines which : ";
cin>>line;
for(i=0;i<line;i++)
{
	for(j=0;j<line-i-1;j++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<" "<<fact(i);
			(fact(j)*fact(i-j;
			cout<<endl;
		}
		
	}
	
}
	return 0;
}
long fact(int num)
{
	long f=1;
	int i=1;
	while(i<=num)
	{
		f =f*i;
		i++;
	}
	return f;
}
