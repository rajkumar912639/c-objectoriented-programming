#include<iostream>
using namespace std;
int main()//sum of the factorial of the number is equal to that number
{
    int num,i,p,r,sum=0,savenum;
    cout<<"enter the number ";
    cin>>num;
    savenum=num;
    while(num>0)
    {
        i=1,p=1;
        r=num % 10;
        while(i<=r){
            p=p * i;
            i++;
        }
        sum=sum+p;
        num=num / 10;

    }
    if(sum==savenum)
    {
        cout<<" Number is strong number ";
    }
    else{
        cout<<"Number is not strong number ";
    }
    return 0;
}