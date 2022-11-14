#include<iostream>
using namespace std;

int main()
{
	
	cout<<"*****  Addition And Multiplication of 'N' Numbers Using For Loop  *****"<<endl;
	cout<<"\n";
	int n,sum,mul,sum_while,mul_while;
	
	cout<<"Enter Value of N: ";
	cin>>n;
	
	for(int i=0; i<=n; i++)
	{
		sum+=i;
	}
	
	mul=1;
	cout<<"The Addition of 1st "<< n <<" numbers is: "<<sum<<endl;
	
	
	for(int i=1; i<=n; i++)
	{
		mul=mul*i;
	}
	
	cout<<"The Multiplication of 1st "<< n <<" numbers is: "<<mul<<endl;
	cout<<"\n";
	
	
	cout<<"*********************************************************************"<<endl;
	cout<<"\n";
	cout<<"\n";
	
	
	cout<<"*****  Addition And Multiplication of 'N' Numbers Using While Loop  *****"<<endl;
    cout<<"\n";
	
	int i=0;
	while(i<=n)
	{
		sum_while=sum_while+i;
		i++;
	}
	
	cout<<"The Addition of 1st "<< n <<" numbers is: "<<sum_while<<endl;
	
		
	int j=1;
	mul_while=1;
	while(j<=n)
	{
		mul_while=mul_while*j;
		j++;
	}
	
	cout<<"The Multiplication of 1st "<< n <<" numbers is: "<<mul_while<<endl;
	
	
}
