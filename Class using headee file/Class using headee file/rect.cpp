#include<iostream>
#include<conio.h>
#include"rectangle.h"
using namespace std;
void main()
{
	int l, w;
	cout << "Enter the length of rectangle" << endl;
	cin >> l;
	cout << "Enter width of rectangle" << endl;
	cin >> w;
	rectangle rec(l,w);
	cout << "Your entered data is" << endl;
	cout << "LENGTH : " << rec.get_length()<<endl;
	cout << "WIDTH : " << rec.get_width()<<endl;
	cout<<"The area of given rectangle is "<<rec.getarea();
	_getch();
}