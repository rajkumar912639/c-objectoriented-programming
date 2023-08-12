#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[100],b[100];
	cout<<"enter the string :";
	cin>>a[100];
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0){
		cout<<"Entered string is palendrome";
	}
	else 
	cout<<"Entered string is not a palendrome";
	
	
}
