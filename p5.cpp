#include<iostream>
using namespace std;
class student{
int age;
int roll_no;
public:
student()
{
cout<<"default constructor";
}
student(int newage,int newroll)
{
	cout<<"the age of :"<<newage<<"roll no of :"<<newroll<<endl;
}
};
int main()
{
	student s1;
	
	return 0;
}
