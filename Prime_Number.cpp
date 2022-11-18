// Prime Number

#include<iostream>
using namespace std;

int main()
{
	int num, remainder, flag=0;
	cout<<"\n";
	cout<<"Enter the number to check whether it is prime or not: "<<endl;
	cin>>num;
	
	for(int i=2; i<num; i++)
	{
		remainder=num%i;
		if(remainder==0)
		{
			flag=1;
			break;
		}
	}
	
	if(flag==1)
		{
			cout<<"The number "<<num<<" is not prime number";
		}
		else
		{
			cout<<"The number "<<num<<" is prime number";
		}
	
	return 0;
}
