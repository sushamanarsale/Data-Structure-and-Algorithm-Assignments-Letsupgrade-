// Bubble sort by taking input from user

#include<iostream>
using namespace std;

void bubbleSort()
{
	
	int size, temp;
	cout<<"Enter size of elements: ";
	cin>>size;
	int a[size];
	cout<<"Enter "<<size<<" elements of array: "<<endl;
	
	for(int i=0; i<size; i++)
	{
		cin>>a[i];
	}
	cout<<"\n";
	cout<<"The unsorted elements of array are: ";
	for(int i=0; i<size; i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<"\n";
	cout<<"\n";
	
	// Implementation of bubble sort
	
	for(int i=0; i<size-1; i++)
	{
		cout<<"Pass "<<i<<" : "<<"\t";
		for(int j=0; j<size-1-i; j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
			cout<<a[j]<<"\t";
		}
		cout<<endl;
		cout<<"\n";
	}
	cout<<"\n";
	cout<<"The sorted array is: "<<"\t";
	for(int i=0; i<size; i++)
	{
		cout<<a[i]<<"\t";
	}
	
}


int main()
{
	bubbleSort();
	
	
	return 0;
	
}
