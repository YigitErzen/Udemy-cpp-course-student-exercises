#include<iostream>
using namespace std;

int linearsearch (int a[10], int num)
{
	for (int i = 0; i < 10; i++)
	{
		if (a[i] == num)
			return i;
	}
	return -1;
}

int main()
{
	int x[10];
	int number;
	cout << "Enter a ten-element array of different integers. " << endl;
	
	for (int i = 0; i < 10; i++)
	{
		cin >> x[i];
	}
    
	cout << "Enter an element to be searched:" << endl;
	cin >> number;

	int result = linearsearch(x, number);
	
	if (result == -1)
		cout << "Element not found in the array.";
	else
		cout << "Element found at index: " << result;

	return 0;
}