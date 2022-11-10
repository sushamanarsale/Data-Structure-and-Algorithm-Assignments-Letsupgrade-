#include<iostream>
using namespace std;

int main(){
	
	int number;
	
	cout<<"***** Find the number is Even or Odd *****"<<endl;
	cout<<""<<endl;
	cout<<"Enter the Number: ";
	cin>>number;
	
	if(number%2==0)
	{
		cout<<"The number "<<number<<" is Even"<<endl;
	}
	else
	{
		cout<<"The number "<<number<<" is Odd"<<endl;
	}
	
	return 0;
}
