// Menu driven program of singly linked list

#include<iostream>
using namespace std;

 class node{
 	public:
 		int data;
 		node *next;
 };

node *head=NULL;

void insertatbeg(int n)
{
	node *p=new node;
	p->data=n;
	p->next=head;
	head=p;
}

void insertatend(int n)
{
	node *p=new node;
	p->data=n;
	p->next=NULL;
	node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=p;
}

void insertatpos(int n, int pos)
{
	node *p=new node;
	p->data=n;
	p->next=NULL;
	node *temp=head;
	
	int i=1;
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	p->next=temp->next;
	temp->next=p;
}

void deleteatbeg()
{
	node*temp=head;
	head=head->next;
	delete(temp); 
}

void deleteatend()
{
	node *temp=head;
	node *temp2=temp; 
	while(temp->next!=NULL)
	{
		temp2=temp;
		temp=temp->next;
	}
	temp2->next=NULL;
	delete(temp);
}

void deleteatpos(int pos)
{
	node *temp=head;
	node *temp2=temp;
	int i=1;
	while(i<pos)
	{
		temp2=temp;
		temp=temp->next;
		i++;
	}
	temp2->next= temp->next;
	delete(temp);
	
}

	void traverse()
{
	node*temp=head;
	
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->next;
    }
}

int main()
{
	int ch,val,pos;
    cout<<"      MENU   ";   
    cout<<"\n1.Insertion at beg\n2.Insertion at end\n3.Insertion at specific position\n 4. Traverse\n"
			"5.Deletion at beg\n 6.Deletion at end\n 7.Deletion at specific position \n 8.Exit";
    while(1)    
    {
        cout<<"\nEnter the choice:";
        cin>>ch;
          
        switch(ch)
        {
            case 1: cout<<"Enter the value to be inserted: ";
                    cin>>val;
                    insertatbeg(val);
                    break;
            case 2: cout<<"Enter the value to be inserted: ";
                    cin>>val;
                    insertatend(val);
                    break;
            case 3: cout<<"Enter the value to be inserted: ";
                    cin>>val;
                    cout<<"Enter the position where value to be inserted: ";
                    cin>>pos;
                    insertatpos(val,pos);
                    break;
            case 4:traverse();  
					break;
			case 5:deleteatbeg();
					break;		
			case 6:deleteatend();
					break;
			case 7:cout<<"Enter the position where value to be deleted: ";
                    cin>>pos;
					deleteatpos(pos);
					break;				      
            case 8: exit(0);
              
            default: cout<<"\nError! Invalid choice!...";
        }
    }
    return 0;
}
