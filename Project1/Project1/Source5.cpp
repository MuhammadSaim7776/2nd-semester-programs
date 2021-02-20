//#include<iostream>
//#include<conio.h>
//using namespace std;
//class array
//{
//private:
//	int*ptr;
//public:
//	array(int s)
//	{
//		ptr = new int[s];
//	}
//	void set_values(int i, int n)
//	{
//		ptr[i] = n;
//	}
//	int get_values(int i)const
//	{
//		return ptr[i];
//	}
//	~array()
//	{
//		delete ptr;
//	}
//
//};
//void main()
//{
//	int s,n;
//	cout << "Enter the size of array" << endl;
//	cin >> s;
//	array a1(s);
//	for (int i = 0; i < s; i++)
//	{
//		cin >> n;
//		a1.set_values(i, n);
//	}
//	cout << "You have entered the following data" << endl;
//	for (int i = 0; i < s; i++)
//	{
//
//		cout << a1.get_values(i) << endl;
//	}
//	_getch();
//}