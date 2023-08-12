#include<iostream>
using namespace std;
int main()
{
	int v;
	int &rv =v;
	v=10;
	cout<<"the value of v="<<v;
	cout<<endl<<"value of rv = "<<rv<<endl;
	rv=25;
	cout<<"value of v :"<<v<<endl;
	cout<<"value of rv :"<<rv;
	return 0;
}
