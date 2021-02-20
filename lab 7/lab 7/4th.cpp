#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Matrix
{
	int array[3][3];
public:
	Matrix()
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				array[i][j] = 0;
			}
		}
		
	}
	Matrix(int val, int i, int j)
	{
		
		set_values(val, i, j);
	}
	void set_values(int v, int i, int j)
	{
		array[i][j] = v;
	}
	void display()
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout<< array[i][j]<<"\t";
			}
			cout << endl;
		}
	}
	Matrix operator *(Matrix&R)
	{
		Matrix temp;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				for (int k = 0; k < 3; k++)
				{
					temp.array[i][j] += array[i][k] * R.array[k][j];
				}
			}
		}
		return temp;
	}
	Matrix operator /(Matrix&R)
	{
		Matrix temp;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				temp.array[i][j] = array[i][j] / R.array[i][j];
			}
		}
		return temp;
	}
	
};
void main()
{
	Matrix M1,M2,mul,div;
	int num;
	cout << "Enter the data in array 1 which is of size 3*3\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> num;
			M1.set_values(num, i, j);
		}
	}
	cout << "Your entered data in array 1 is \n";
	M1.display();
	cout << "Enter the data in array 2 which is of size 3*3\n";
	for (int i = 0; i < 3; i++)
	{
		num = 0;
		for (int j = 0; j < 3; j++)
		{
			cin >> num;
			M2.set_values(num, i, j);
		}
	}
	cout << "Your entered data in array 1 is \n";
	M1.display();
	cout << "Your entered data in array 2 is \n";
	M2.display();
	mul = M1.operator*(M2);
	div = M1.operator/(M2);
	cout << "Multiplication of two matrices is \n";
	mul.display();
	cout << "division of two matrices is \n";
	div.display();
	_getch();
}