#include<iostream>
using namespace std;
int var=20;
int main()
{
	int var=4;
	cout<<"global variable :  "<<::var;
	cout<<"Local variable :  "<<var;
	return 0;
}

