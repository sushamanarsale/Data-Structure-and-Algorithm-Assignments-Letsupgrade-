// Program of array using functions

#include<iostream>
using namespace std;

void array()
{
	int size=0;
	cout<<"Enter the size of array: ";
	cin>>size;
	int a[size];
	cout<<"Enter the " <<size<<" elements of an array: "<<endl;
	
	for(int i=0; i<size; i++)
	{
			cin>>a[i];
	}
	
	cout<<"The Elements of array are:  ";
	
	for(int i=0; i<size; i++)
	{
		cout<<a[i];
		cout<<" ";
	}
	cout<<"\n";
	cout<<"\n";


	// Addition of an element of an array
	cout<<"\n";
	cout<<"The addition of elements of an array is: ";
	int sum=0;
	for(int i=0; i<size; i++)
	{
		sum=sum+a[i];
	}
	cout<<sum;
	cout<<"\n";
	
		
	// Multiplication of an element of an array
	cout<<"\n";
	cout<<"The multiplication of elements of an array is: ";
	int mul=1;
	for(int i=0; i<size; i++)
	{
		mul=mul*a[i];
	}
	cout<<mul;
	
	
}



int main()
{
	array();
	return 0;
}
