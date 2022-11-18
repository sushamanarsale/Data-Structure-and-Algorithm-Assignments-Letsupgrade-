// Factorial Program

#include<iostream>
using namespace std;

int main()
{
	int num, factorial=1;
	cout<<"\n";
	cout<<"Factorial Program: "<<endl;
	cout<<"Enter a number: ";
	cin>>num;

	// using for loop
	for(int i=1; i<=num; i++)
	{
		factorial=factorial*i;
	}
	cout<<"The factorial of "<<num<<" is: "<<factorial<<endl;
	
	// using while loop
	int i=1;
	factorial=1;
	while(i<=num)
	{
	    factorial=factorial*i;	
	    i++;
	}
	cout<<"The factorial of "<<num<<" is: "<<factorial;
	
	
	return 0;
}
