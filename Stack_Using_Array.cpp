// Stack using Array

#include<iostream>
using namespace std;

#define MAX 10
int arr[MAX];
int top=-1;

int isfull()
{
	if(top==MAX-1)
	return 1;
	else 
	return 0;
}


void push(int n)
{
	if(isfull())
	cout<<"Stack overflow";
	else
	{
		top=top+1;
		arr[top]=n;
	}
}


int isEmpty()
{
	if(top==-1)
	return 1;
	else
	return 0;
}

void traverse()
{
	for(int i=top;i>=0;i--)
	cout<<arr[i]<<"\t";
}

int pop()
{
	if(isEmpty())
	cout<<"underflow";
	else
	{
		int val=arr[top];
		top=top-1;
		return val;
	}

}
int main()
{
	push(5);
	push(10);
	traverse();
	cout<<endl;
	int val=pop();
	cout<<val<<endl;
	traverse();
	cout<<endl;
	push(15);
	push(7);

	traverse();
	
}
