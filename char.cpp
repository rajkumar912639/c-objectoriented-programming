#include<iostream>
using namespace std;
int main()
{
	int n=5;
	int x=1,y=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(i% 2==1)
			{
				cout<<"  "<<x++;
			}
			else{
				cout<<"  "<<(char)(y+64);
				y++;
			}
		}
		cout<<endl;
	}
	return 0;
}
