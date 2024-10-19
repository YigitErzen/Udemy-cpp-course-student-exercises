#include<iostream>
using namespace std;

int main()
{
	int basicsalary,allowance,deduction,netsalary;
	
	cout<<"enter basicsalary"<<endl;
	cin>>basicsalary;
	
	cout<<"enter percantage of allowance"<<endl;
	cin>>allowance;
	
	cout<<"enter percantage of deduction"<<endl;
	cin>>deduction;
	
	netsalary=(basicsalary)+(basicsalary*allowance/100)-(basicsalary*deduction/100);
	
	cout<<"net salary is "<<netsalary;
	
	
}
