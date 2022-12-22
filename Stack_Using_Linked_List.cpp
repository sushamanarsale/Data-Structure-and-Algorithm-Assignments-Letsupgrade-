// Stack Using Linked List

#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* add;
};

node *top=NULL;

void push(int n)
{
	node *p=new(nothrow) node;
	if(!p)
	cout<<"stack overflow";
	else
	{
		p->data=n;
		p->add=top;
		top=p;
	}
}

void pop()
{
	if(top==NULL)
	cout<<"underflow";
	else
	{
		node * temp=top;
		top=top->add;
		temp->add=NULL;
		delete(temp);
	}
}

void traverse()
{
	node *temp=top;
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		
		temp=temp->add;
	}
}

int main()
{
	push(5);
	push(10);
	traverse();
	cout<<endl;
	pop();
	traverse();
	cout<<endl;
	push(15);
	push(7);

	traverse();
}
