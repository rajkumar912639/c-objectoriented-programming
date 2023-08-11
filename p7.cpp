#include<iostream>
using namespace std;
int main()
{
	int n=5,x=2;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			cout<<"   "<<x;
			x+=2;
		}
		cout<<endl;
	}
}
