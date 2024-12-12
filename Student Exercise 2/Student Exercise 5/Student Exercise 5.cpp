#include<iostream>
using namespace std;

int main()
{
    int num, sum = 0, average;
    cout << "Enter the numbers of element" << endl;
    cin >> num;
    
    int A[100];
    

    for (int i = 0;i < num;i++)
    {
        cout << i+1 << "." << " Enter the number" << endl;
        cin >> A[i];
    }
    for (int i = 0;i < num;i++)
    {
        sum += A[i];
    }
    average = sum / num;
    
    cout << "Average is: " << average;

    return 0;
}
