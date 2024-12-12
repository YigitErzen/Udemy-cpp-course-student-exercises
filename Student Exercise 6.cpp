#include<iostream>
using namespace std;

int main()
{
	bool flag=true;
	float A[10][10], B[10][10], C[10][10];
    int rowsA, rowsB, columnsA, columnsB;

	while(flag)
	{
		cout << "Enter rows and columns for first matrix:" << endl;
		cin >> rowsA >> columnsA;
		cout << "Enter rows and columns for second matrix:" << endl;
		cin >> rowsB >> columnsB;

		if (columnsA == rowsB)
		{
			cout << "Enter elements of matrix 1: " << endl;

			for (int i = 0;i < rowsA;i++)
			{
				for (int j = 0;j < columnsA;j++)
				{
					cout << "Enter element a" << i << j << endl;
					cin >> A[i][j];
				}
			}
			cout << "Enter elements of matrix 2: " << endl;

			for (int i = 0;i < rowsB;i++)
			{
				for (int j = 0;j < columnsB;j++)
				{
					cout << "Enter element b" << i << j << endl;
					cin >> B[i][j];
				}
			}
			int rowsC = rowsA;
			int columnsC = columnsB;

			for (int i = 0;i < rowsC;i++)
			{
				for (int j = 0;j < columnsC;j++)
				{
					C[i][j] = 0;

					for (int k = 0;k < columnsA;k++)
					{
						C[i][j] += A[i][k] * B[k][j];
					}
				}
			}
			for (int i = 0;i < rowsC;i++)
			{
				for (int j = 0;j < columnsC;j++)
				{
					cout << C[i][j] << " ";
				}
				cout << endl;
			}
			flag = false;
		}
		else
			cout << "Error! Column of first matrix is not equal to row of second." << endl;
	}
	return 0;
}
