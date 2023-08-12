#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter the year :";
	cin>>year;
	if(year%400==0){
		cout<<"the given year is a leap year";
	}
	else if(year%100==0)
	{ cout<<"The given year is not a leap year";
	}
	else if(year%4==0){
		cout<<"The given year is leap year";
	}
	else{
		cout<<"The given year is not leap year";
	}
	return 0;
}
