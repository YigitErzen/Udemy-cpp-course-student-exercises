#include<iostream>
using namespace std;

int main()
{
	int number1,number2,n;
	int i=0;
	  
	cout<<"Enter a number"<<endl;
	cin>>number1;
	
	n=number1;
	
	while(n>0)
	{
		i=n%10;
		n=n/10;
		number2=10*number2+i;	
	}
	
	if(number1==number2)
	{
		cout<<number1<<" is a palindrome number";
	}
	else
	{
		cout<<number1<<" isn't a palindrome  number";
	}
	return 0;
}
