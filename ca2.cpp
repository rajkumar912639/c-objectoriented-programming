#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<char> mystack;
    char st[] = {"Good Morning"};
    cout<<"Your string is : ";
    for(int i=0; i<strlen(st);i++)
    {
        cout<<st[i];

    }
    for(int i=0; i<strlen(st);i++)
    {
        int t = int(st[i]);
        if(t>=65 && t<=90)
        {
        mystack.push(st[i]);
        }
    }
    cout<<endl<<"Capital letters are :";

        cout<<mystack.top()<<" ";
        mystack.pop();
        cout<<mystack.top();

}
