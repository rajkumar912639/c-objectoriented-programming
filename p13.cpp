#include<iostream>
using namespace std;
int main()
{
	int first,second;
	int count=0,result,user_no;
	cout<<"Enter the any no: ";
	cin>>user_no;
	while(1)
	{
		result=first+second;
		count++;
		if(result>=user_no)
		{
			break;
		}
		first=second;
		second=result;
		cout<<" fibonoci no :"<<result;
		
	}
	return 0;
}
