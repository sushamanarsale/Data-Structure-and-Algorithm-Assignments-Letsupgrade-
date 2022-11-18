// Addition of 2D array

#include<iostream>
using namespace std;

int main()
{
	// Define 1st array
	int row1=0;
	cout<<"Enter the number of row in 1st array: ";
	cin>>row1;
	int col1=0;
	cout<<"Enter the number of column in 1st array: ";
	cin>>col1;
	int a1[row1][col1];
	
	for(int i=0; i<row1; i++)
	{
		for(int j=0; j<col1; j++)
		{
			cin>>a1[i][j];
		}
	}
	
	cout<<"The Elements of 1st array:  "<<endl;
	for(int i=0; i<row1; i++)
	{
		for(int j=0; j<col1; j++)
		{
			cout<<a1[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\n";
	cout<<"\n";
	
	// Define 2nd array
	int row2=0;
	cout<<"Enter the number of row in 2nd array: ";
	cin>>row2;
	int col2=0;
	cout<<"Enter the number of column in 2nd array: ";
	cin>>col2;
	int a2[row2][col2];
	
	for(int i=0; i<row2; i++)
	{
		for(int j=0; j<col2; j++)
		{
			cin>>a2[i][j];
		}
	}
	
	cout<<"The Elements of 2nd array:  "<<endl;
	for(int i=0; i<row2; i++)
	{
		for(int j=0; j<col2; j++)
		{
			cout<<a2[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\n";
	cout<<"\n";
	
	// Define an result array
	cout<<"Addition of 1st and 2nd array: "<<endl;
	int a3[row1][col2];
	
	for(int i=0; i<row1; i++)
	{
		for(int j=0; j<col1; j++)
		{
			for(int i=0; i<row2; i++)
	           {
	     	      for(int j=0; j<col2; j++)
		            {
			        a3[i][j] = a1[i][j] + a2[i][j];
			        
		            }
             	}
             	cout<<a3[i][j]<<"\t";    	
		}
		cout<<endl;
		
	}
	
	return 0;
}
