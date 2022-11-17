// all type of pattern printing

#include<iostream>
using namespace std;

int main()
{
	cout<<"-----------------------------------------------------------------------"<<endl;
	//Left Down Triangle
	cout<<"Left Down Triangle"<<endl;
	cout<<"\n";
	
	// *****
	// ****
	// ***
	// **
	// *
	
	for(int i=1; i<=5; i++)
	{
		for(int j=0; j<=5-i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	cout<<"\n";
	cout<<"-----------------------------------------------------------------------"<<endl;
	cout<<"\n";
	
	//Right triangle
	//      *
	//     **
	//    ***
	//   ****
	//  *****
	
	cout<<"Right Triangle"<<endl;
	cout<<"\n";
	
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5-i; j++)
		{
			cout<<" ";
		}
		
		for(int k=1; k<=i; k++)
		{
			cout<<"*";
		}
		
		cout<<endl;
	  }  
	
	
	cout<<"\n";
	cout<<"-----------------------------------------------------------------------"<<endl;
	cout<<"\n";
	
	// Right Down Triangle
	// *****
	//  ****
	//   ***
	//    **
	//     *
	
	cout<<"Right Down Triangle"<<endl;
	cout<<"\n";
	
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=i-1; j++)
		{
			cout<<" ";
		}
		
		for( int k=5; k>=i; k--)
		{
			cout<<"*";
		}
		
		cout<<endl;
		
	}
	
	cout<<"\n";
	cout<<"-----------------------------------------------------------------------"<<endl;
	cout<<"\n";
	
	// pyramid pattern
    //      *
	//     ***
	//    *****
	//   *******
	//  *********
	
	cout<<"Pyramid Pattern"<<endl;
	cout<<"\n";
	
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5-i; j++)
		{
			cout<<" ";
		}
		
		for( int k=1; k<=2*i-1; k++)
		{
			cout<<"*";
		}
	    
		cout<<endl;	
	}	
	
	cout<<"\n";
	cout<<"-----------------------------------------------------------------------"<<endl;
	cout<<"\n";
	
	// Reverse pyramid star pattern
	// *********
	//  *******
	//   *****
	//    ***
	//     *
	
	cout<<"Reverse pyramid star pattern"<<endl;
	cout<<"\n";
	
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<i; j++)
		{
			cout<<" ";
		}
		for( int k=0; k<2*(5-i)-1; k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	cout<<"\n";
	cout<<"-----------------------------------------------------------------------"<<endl;
	cout<<"\n";
	
		// Diamond pattern
    //      *
	//     ***
	//    *****
	//   *******
	//  *********
	//   *******
	//    *****
	//     ***
	//      *
	
	cout<<"Diamond pattern"<<endl;
	cout<<"\n";
	
		for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5-i; j++)
		{
			cout<<" ";
		}
		
		for( int k=1; k<=2*i-1; k++)
		{
			cout<<"*";
		}
	    
		cout<<endl;	
	}
	
	for(int i=0; i<4; i++)
	{
		cout<<" ";
		for(int j=0; j<i; j++)
		{
			cout<<" ";
		}
		for( int k=0; k<2*(4-i)-1; k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	
	return 0;
}
