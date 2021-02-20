#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int sum1,sum2 = 0;
	int**num, r, c;
	cout << "Enter the no of rows and columns" << endl;
	cin >> r >> c;
	num = new int*[r];
	for (int i = 0; i < r; i++)
	{
		num[i] = new int[c];
	}
	for (int i = 0; i < r; i++)
	{
		cout << "Enter the number in row " << i + 1 << endl;
		for (int j = 0; j < c; j++)
		{
			cin >> num[i][j];
		}
	}
	cout << "Your ebtered array is" << endl;
	for (int i = 0; i < r; i++)
	{
		
		for (int j = 0; j < c; j++)
		{
			cout<< num[i][j]<<"\t";
		}
		cout << endl;
	}

	for (int i = 0; i < r; i++)
	{
		sum1 = 0;
		sum2 = 0;
		for (int j = 0; j < c; j++)
		{
			sum1 += num[i][j];	
			sum2 += num[j][i];
		}
		cout << "The sum of row " << i + 1 << " is " << sum1 << endl;
		cout << "The sum of column" << i + 1 << " is " << sum2 << endl;
	}
	_getch();
}