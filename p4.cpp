#include<iostream>
#include<vector>
using namespace std;
class cord{
	int x,y,z;
	public :
		cord(int x,int y ,int z):x(x),y(y),z(z){}
int getx(){return x; }
int gety(){return y; }
int getz(){return z; }
};
int main()
{
	cord a={2,7,8};
	cord a1={6,7,4};
	cord a2={7,7,4};
	auto ptr =&a;
	cout <<ptr->gety();
	return 0;
}
