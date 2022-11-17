// Searching in array

#include<iostream>
using namespace std;


void array()
{
	int size, i, count;
	int repeate=0;
	cout<<"Enter the size of an array: ";
	cin>>size;
	int arr[size];
	
	// Insert the elements in an array
	cout<<endl;
	cout<<"Enter the "<<size<<" elements of an array: ";
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
	cout<<" Total number of elements in array is: "<<count ;
	
do{
	
	// Search the elements in an array
	cout<<endl;
	cout<<"\n";
	int n,y,index;
	bool flag=0;
	cout<<"Enter the element which you want to search in an array: ";
	cin>>n;
	cout<<"\n";
	
	
	for(int i=0; i<size; i++)
	{
		if(arr[i]==n)
		{
			flag=1;
			index=i;
			break;
		}
		
	}	
	
	if(flag==1)
	{
	cout<<n<<" found at "<<index<<"th index in the array";	
	}
	else
	{
		cout<<n<<" not found in this array ";
	}
	cout<<"\n";
	cout<<"\n";
	cout<<"Do you want to search any other number in this array ? If YES then press 1"<<endl;
	cin>>repeate;
}while(repeate==1);
	
}


int main()
{
	array();	
	
	return 0;
}
