#include<iostream>
#include<iomanip>
using namespace std;
struct vector {
};
int main ()
{char ip='%';
char* ip_addr =0;
cout<<ip_addr<<endl;
ip_addr = &ip;
cout<<ip_addr<<"  "<<*ip_addr<<endl;
return 0;
}
