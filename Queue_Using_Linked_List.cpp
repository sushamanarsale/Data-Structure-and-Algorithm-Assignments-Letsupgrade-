// Queue using Linked List

#include<iostream>

using namespace std;

class node{
	public:
	int data;
	node *add;
};

node *front=NULL;
node *rear=NULL;

void traverse()
{
	node *temp=front;
	if(front==NULL && rear==NULL)
	cout<<"underflow";
	else
	{
		while(temp!=NULL)
		{
		cout<<temp->data<<"\t";
		temp=temp->add;
		}
	}
}

void insertatend(int n)
{
	node *p=new node;
	p->data =n;
	p->add=NULL;
	if(front==NULL && rear==NULL)
	front=rear=p;
	else
	{
	rear->add=p;
	rear=p;
	}
}


void deletebeg()
{
	node *temp=front;
	if(front==NULL && rear==NULL)
	cout<<"underflow";
	else if(front==rear)
	{
		cout<<"deleted value \t"<<front->data<<endl;
		front=NULL;
		rear=NULL;
		delete(temp);
	}
	else
	{
	cout<<"deleted value \t"<<front->data<<endl;
	front=front->add;
	delete(temp);
	}
}



int main()
{
insertatend(4);
traverse();
cout<<endl;
insertatend(41);
traverse();
cout<<endl;
insertatend(14);
traverse();
cout<<endl;
deletebeg();
traverse();
cout<<endl;
deletebeg();
traverse();
cout<<endl;
deletebeg();
traverse();
cout<<endl;
//deletebeg();
//traverse();
//cout<<endl;
	
}
