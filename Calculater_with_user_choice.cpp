// Calculator by taking user choice

#include<iostream>
#include<math.h>
using namespace std;


void addition()
{
	int a,b,add;
	cout<<"Enter the 1st value: ";
	cin>>a;
	cout<<"Enter the 2nd value: ";
	cin>>b;
	add=a+b;
	cout<<"Addition is: "<<add<<endl;
}

void subtraction()
{
	int a,b,sub;
	cout<<"Enter the 1st value: ";
	cin>>a;
	cout<<"Enter the 2nd value: ";
	cin>>b;
	sub=a-b;
	cout<<"Subtraction is: "<<sub<<endl;
}

void multiplication()
{
	int a,b,mul;
	cout<<"Enter the 1st value: ";
	cin>>a;
	cout<<"Enter the 2nd value: ";
	cin>>b;
	mul=a*b;
	cout<<"Multiplication is: "<<mul<<endl;
}

void division()
{
	int a,b,div;
	cout<<"Enter the 1st value: ";
	cin>>a;
	cout<<"Enter the 2nd value: ";
	cin>>b;
	div=a/b;
	cout<<"Division is: "<<div<<endl;
}

void modulo()
{
	int a,b,mod;
	cout<<"Enter the 1st value: ";
	cin>>a;
	cout<<"Enter the 2nd value: ";
	cin>>b;
	mod=a%b;
	cout<<"Modulo is: "<<mod<<endl;
}



int main()
{
	
	int a=1;
	
while(a==1){
	int choice;
	cout<<"1) Addition"<<endl;
	cout<<"2) Subtraction"<<endl;
	cout<<"3) Multiplication"<<endl;
	cout<<"4) Division"<<endl;
	cout<<"5) Modulo"<<endl;
	cout<<"Which operation you want to perform ?"<<endl;
	cin>>choice;
	
	
	if(choice==1)
	{
		addition();
	}
	else if(choice==2)
	{
		subtraction();
	}
	else if(choice==3)
	{
		multiplication();
	}
	else if(choice==4)
	{
		division();
	}
	else if(choice==5)
	{
		modulo();
	}
	else
	{
		cout<<"Invalid Choice"<<endl;
	}
	
	cout<<"Do you want to continue ? If yes then press 1 "<<endl;
	cin>>a;
}

	
	

	return 0;
}

