// Queue using array


#include<iostream>
using namespace std;
#define max 3             
 
int queue[max],front=-1,rear=-1;           
 
void enqueue(int num) 
{
    if(rear==max-1)  
    {
        cout<<"OVERFLOW!";
    }
    else if(front==-1 && rear==-1)
    {
        front++;
        rear++;
        queue[rear]=num;
    }
    else
    {
        rear++;
        queue[rear]=num;
    }
} 
void dequeue() 
{
    if(front==-1 && rear==-1)  
    {
        cout<<"UNDERFLOW!";
        return ;
    }
    else if(front == rear)
    {
    	cout<<"The deleted data is : "<<queue[front]; 
    	front =-1;
    	rear =-1;
	}
    else
    {
        cout<<"The deleted data is : "<<queue[front];  
		front++;
    }
}
 
void show()
{

    if(front==-1 && rear==-1)    
    {
        cout<<"UNDERFLOW!";
    }
    else
    {
        for(int i=front;i<=rear;i++) 
        {
            cout<<"\t"<<queue[i];
        }
        cout<<endl;
    }
}
int main() 
{ 
    int ch,val;
    cout<<"      MENU   ";   
    cout<<"\n 1.enqueue\n 2.dequeue\n 3.Show\n 4.Exit";
    while(1)    
    {
        cout<<"\nEnter the choice:";
        cin>>ch;
          
        switch(ch)
        {
            case 1: cout<<"Enter the value to be inserted: ";
                    cin>>val;
                    enqueue(val);
                    break;
            case 2: dequeue();
                    break;
            case 3: cout<<"Queue Elements : ";
                    show();
                    break;
            case 4: exit(0);
              
            default: cout<<"\n Error! Invalid choice!...";
        }
    }
    return 0;
}
