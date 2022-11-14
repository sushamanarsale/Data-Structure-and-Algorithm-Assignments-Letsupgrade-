#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"------------  Hollow Rectangle Pattern  -------------"<<endl;
	
	for(int i=1; i<=4; i++)
	{
		for(int j=1; j<=4; j++)
		{
			if(i==1 || i==4 || j==1 || j==4)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	
	
	return 0;
}
