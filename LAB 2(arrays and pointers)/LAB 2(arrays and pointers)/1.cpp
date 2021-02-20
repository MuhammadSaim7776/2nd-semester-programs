#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int x, y, sum;
	int*xptr, *yptr, *sumptr;
	xptr = &x;
	yptr = &y;
	sumptr = &sum;
	cout << "Enter the value of x" << endl;
	cin >> *xptr;
	cout << "Enter the value of y" << endl;
	cin >> *yptr;
	*sumptr = *xptr + *yptr;
	cout << *xptr << "+" << *yptr << "=" << *sumptr;
	_getch();
}