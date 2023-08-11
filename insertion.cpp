#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int A[30],N,Temp,i,j;
	cout<<" Enter the number of elemets how much want to insert :  ";
	cin>>N;
	cout<<"Enter the elemens of the array";
	for(int i=0;i<=N;i++){
		cin>>A[30];
	}
	for(i=1;i<N;i++ )
	{
		Temp=A[i];
		j=i-j;
		while( Temp<A[i]&&Temp<0)
		{
			A[j+1]=A[j];
			
			j=j-1;
			
		}
		A[j+1]=Temp;
	}
	cout<<"The sorted List is :  ";
	for( i=0;i<N;i++)
	{
		cout<<endl<<A[i]<<" ";
	}
	return 0;
	
	}
