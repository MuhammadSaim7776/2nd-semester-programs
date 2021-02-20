//#include<iostream>
//#include<conio.h>
//using namespace std;
//class array
//{
//	int arr[2][2];
//public:
//	array()
//	{
//		for (int i = 0; i < 2; i++)
//		{
//			for (int j = 0; j < 2; j++)
//			{
//				arr[i][j] = 0;
//			}
//		}
//	}
//	void set_values(int val, int s ,int p)
//	{
//		arr[s][p] = val;
//	}
//	void get_values()
//	{
//		for (int i = 0; i < 2; i++)
//		{
//			for (int j = 0; j < 2; j++)
//			{
//				cout << arr[i][j]<<"\t";
//			}
//			cout << endl;
//		}
//		cout << endl;
//
//	}
//	array operator+(const array&right)
//	{
//		cout << "The sum of two matrices is\n";
//		array temp;
//		for (int i = 0; i < 2; i++)
//		{
//			for (int j = 0; j < 2; j++)
//			{
//				temp.arr[i][j] = arr[i][j] + right.arr[i][j];
//			}
//		}
//		return temp;
//	}
//};
//void main()
//{
//	int num;
//	array object1, object2,sum;
//	cout << "Enter values in first array\n";
//	for (int i = 0; i < 2; i++)
//	{
//		num = 0;
//		for (int j = 0; j < 2; j++)
//		{
//			cin >> num;
//			object1.set_values(num, i, j);
//		}
//	}
//	cout << "Enter values in second array\n";
//	for (int i = 0; i < 2; i++)
//	{
//		num = 0;
//		for (int j = 0; j < 2; j++)
//		{
//			cin >> num;
//			object2.set_values(num, i, j);
//		}
//		
//	}
//	cout << "You have entered the following values in array 1\n";
//	object1.get_values();
//	cout << "You have entered the following values in array 2\n";
//	object2.get_values();
//	sum= object1.operator+(object2);
//	sum.get_values();
//	_getch();
//	
//}
