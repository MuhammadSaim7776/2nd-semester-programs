#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int const PI = 3.14;
class circle
{
private:
	int radius;
public:
	circle() :radius(0)
	{
	}
	void set_radius(int);
	int get_radius()const;
	float area();
};
void circle::set_radius(int x)
{
	radius = x;
}
int circle::get_radius()const
{
	return radius;
}
float circle:: area()
{
	return PI*pow(radius, 2);
}
void main()
{
	circle c1;
	int number;
	cout << "Enter the radius of circle" << endl;
	cin >> number;
	c1.set_radius(number);
	cout << "The area of given circle is" << endl;
	cout<<c1.area();
	_getch();
}