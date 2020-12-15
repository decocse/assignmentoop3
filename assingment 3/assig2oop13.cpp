#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node* next;
};
void print(node*n)
{
	while(n!=NULL)
	{
		cout<<n->data<<endl;
		n=n->next;
	}
}
int main()
{
	node* head=NULL;
	node* tail=NULL;
	node* temp=NULL;
	head = new node(); 
    tail = new node(); 
    temp = new node(); 
	int n;
	cin>>n;
	temp->data=n;
	if(head==NULL)
	{
		head=temp;
		tail=temp;
	}
	else{
		temp=temp->next;
		tail=temp;
	}
	void print(node*head);
}
