#include <iostream>
using namespace std;

int main() {
   int n=4;
   for(int i=0;i<=n;i++)
{
    int a=1;
    for(int j=0;j<=n-1-i;j++)
    {
        cout<<a;
        
        a+=2;
    }
    cout<<endl;
}

    return 0;
}