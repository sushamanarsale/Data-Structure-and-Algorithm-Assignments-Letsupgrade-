// Searching in array

#include<iostream>
using namespace std;


void array()
{
	int size, i, count, number;
	int repeate=0;
	cout<<"Enter the size of an array: ";
	cin>>size;
	int arr[size];
	
	// Insert the elements in an array
	cout<<endl;
	cout<<"Enter the "<<size<<" elements in ASCENDING ORDER : ";
	cout<<endl;
	for( i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	
	// Display elements of an array
	cout<<endl;
	cout<<"The elements of an array are: ";
	for( i=0; i<size; i++)
	{
		cout<<arr[i];
		cout<<" ";
	}
	
	
	// Count the number of elements present in an array
	cout<<"\n";
	cout<<"\n";
	count=sizeof(arr)/sizeof(int);
	cout<<"Total number of elements in array is: "<<count ;
	cout<<"\n";
	
	// Accepting the value to be search from user
	cout<<"Enter the number you want to search in the array: ";
	cin>>number;
	cout<<"\n";
	
	// Implemention of binary search
    int s=0;
    int e=size-1;
	int mid=(s + e)/2;	
	
	do
	{
		if(arr[mid]==number)
		{
			cout<<"Element found at "<<mid<<" position";
			break; 		
		}
		
		else if(arr[mid]>number)
		{
			e = mid-1;
			mid=(s + e)/2;  
		}
		else 
		{
			s = mid+1;
			mid=(s + e)/2;	
		}	
	}while(s<=e);
	
	if(s>e)
		{
			cout<<"Element not found in array";
			cout<<endl;
		}
}


int main()
{
	array();	
	
	return 0;
}
