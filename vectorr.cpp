#include<iostream>
using namespace std;
#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	vector <int> nums = { 3,5,6,7,8,9,4};
	cout<<"unsorted elements are :"<<endl;
	for(int x:nums){
		cout<<x<<" ";
	}
}
