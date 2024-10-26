#include<iostream>
using namespace std;

int main()
{
	float billamount,discount,discountedamount;
	
	cout<<"enter the bill amount"<<endl;
	cin>>billamount;
	
	if(billamount<100)
	{   
	    cout<<"billamount: "<<billamount<<endl;
		cout<<"no discount";
	}
	else if(billamount>=100 && billamount<=500)
	{
		discountedamount=billamount-(billamount*(10.0/100.0));
		cout<<"billamount: "<<billamount<<endl;
		cout<<"%10 discount"<<endl;
		cout<<"discountedamount: "<<discountedamount<<endl;	
	}
    else if(billamount>=500)
	{
		discountedamount=billamount-(billamount*(20.0/100.0));
		cout<<"billamount: "<<billamount<<endl;
		cout<<"%20 discount"<<endl;
		cout<<"discountedamount: "<<discountedamount<<endl;	
	}
	return 0;	
	
}
