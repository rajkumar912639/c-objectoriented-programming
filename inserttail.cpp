#include<iostream>
using namespace std;
class node{
	public :
		int data;
		node* next;
		
		node(int val){
			data = val;
			next = NULL;
			
		}
};
void insertAThead(node* &head,int val)
{
	if(head==NULL)
	{
	head=n;
	return;
	}
	node* n= new node(val);
	node* temp=head;
	while(temp ->next != NULL )
	{temp->next;
	}
	temp->next=n;
}
void display(node* head)
{
	node* temp=head;
	while(head !=NULL)
	cout<<temp->data<<"";
	temp=temp ->next;
}
int main()
{node* head= NULL;
insert AThead(head ,2);
insert AThead(head ,3);
insert AThead(head ,4);
insert AThead(head ,5);
display(head);
