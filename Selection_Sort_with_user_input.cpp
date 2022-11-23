// Selection sort by taking input from user

#include<iostream>
using namespace std;

void selectionSort()
{
	
	int size, temp, min;
	cout<<"Enter size of elements: ";
	cin>>size;
	int a[size];
	cout<<"Enter "<<size<<" elements of array: "<<endl;
	
	// Taking user input
	for(int i=0; i<size; i++)
	{
		cin>>a[i];
	}
	
	// Displaying eelements 
	cout<<"\n";
	cout<<"The unsorted elements of array are: ";
	for(int i=0; i<size; i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<"\n";
	cout<<"\n";
	
	// Implementation of Selection Sort
	
	temp=0;
	min = 0;
	for(int i=0; i<size-1; i++)
	{
		min=i;
		
		for(int j=1+i; j<size; j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		}
		    temp = a[i];
		    a[i] = a[min];
		    a[min] = temp;		
	}
	
	cout<<"The sorted array is: "<<"\t";
	for(int i=0; i<size; i++)
	{
		cout<<a[i]<<"\t";
	}		
}

int main()
{
	selectionSort();
	
	return 0;
}
