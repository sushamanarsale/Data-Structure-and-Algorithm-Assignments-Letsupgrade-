#include<iostream>
using namespace std;

int main()
{
	int choice;
	bool repeate=1;	
	
	cout <<"***** Welcome to our Restaurant *****"<<endl;
	cout<<"\n";
	
	do{
		
	cout<<"***** Our Menu Card *****"<<endl;
	cout<<"1) Tea"<<endl;
	cout<<"2) coffee"<<endl;
	cout<<"3) Cold Drink"<<endl;
	cout<<"4) Juice"<<endl;
	cout<<"\n";
	cout<<"What would you like to order "<<endl;
	cout<<"Enter 1 for Tea \n"<<"Enter 2 for Coffee \n"<<"Enter 3 for Cold Drink \n"<<"Enter 4 for Juice \n"<<endl;
	cout<<"Enter your choice "<<endl;
	cin>>choice;
	cout<<"\n";
	
	if(choice==1)
	{
		cout<<"Enjoy your Tea! "<<endl;
	}
	else if( choice==2)
	{
		cout<<"Enjoy your Coffee! "<<endl;
	}
	else if( choice==3)
	{
		cout<<"Enjoy your Cold Drink! "<<endl;
	}
		else if( choice==4)
	{
		cout<<"Enjoy your Milk! "<<endl;
	}
	else
	{
		cout<<"Invalid Input"<<endl;
		cout<<"Please Enter Valid Choice :)"<<endl;
	}	
	
		cout<<"Would You Like To Order something Else ? "<<endl;
		cout<<"Enter 1 for YES "<<endl;
	    cin>>repeate;
	
	
}while(repeate==1);

	
	
	return 0;	
	
}
