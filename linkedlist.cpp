#include<iostream>
using namespace std;
class node{
	public :
	int data;
	node* next;
	node(int data)
	{
		this->data =data;
		this->next= NULL;
	}
};
int main()
{
	
	node* node1=new node(20);
	node* node2=new node(30);
	node* node3=new node(40);
	cout<<node1->data<< endl;
	
	cout<<node2->data<< endl;
	
	cout<<node3->data<< endl;
	
	
	
	
	
	
	cout<<node1->data<< endl;
	
	cout<<node1->next<<endl;
}
