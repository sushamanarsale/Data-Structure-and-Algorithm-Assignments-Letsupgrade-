#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout<<"Enter 1st Number: ";
	cin>>a;
	cout<<"Enter 2nd Number: ";
	cin>>b;
	
	cout<<"***** Before Swapping ******"<<endl;
	cout<<"The 1st Number is: "<<a<<endl;
	cout<<"The 2nd Number is: "<<b<<endl;
	
	c=a;
	a=b;
	b=c;
	
	cout<<"***** After Swapping ******"<<endl;
	cout<<"The 1st Number is: "<<a<<endl;
	cout<<"The 2nd Number is: "<<b<<endl;
	
	return 0;
}
