#include<iostream>
using namespace std;
class node
{
	public:
		int data;
	node* next;
	node(int d){
		data = d;
		next = NULL;
	}
};
void insertAThead(node* & head,int data){
	node* n= new node(data);
	n->next =head;
	head =n;
	
	
}
void printf(node& head)
{
While(head!= NULL)
{
cout<<head->data <<"->";
head = head->next;
}
}
int main(){
	node* head=NULL;
	insertaAThead(head,5);
	insertaAThead(head,2);
	insertaAThead(head,8);
	insertaAThead(head,3);
}
