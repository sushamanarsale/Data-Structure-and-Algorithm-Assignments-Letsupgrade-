// Fabonacci Series

#include<iostream>
using namespace std;

int main()
{
	int first=0, second=1, result=0, number;
	
	cout<<"Enter the number: ";
	cin>>number;
	
	cout<<"0"<<"\t";
	
	for(int i=1; i<=number; i++)
	{
		result = first + second;
		cout<<result<<"\t";
		first = second;
		second = result;
	}
	
	return 0;
}
