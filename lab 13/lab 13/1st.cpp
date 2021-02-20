#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class shape
{
protected:
	int width, height;
public:
	shape(int w=0 , int h=0)
	{
		width = w;
		height = h;
	}
    void calculateArea()
	{
		cout << "Parent class area" << endl;
	}
	virtual void display()
	{
		cout << "displayed";
	}
};
class triangle:public shape
{
public:
	triangle(int a = 0, int b = 0) :shape(a,b)
	{

	}
     int calculateArea()const
	{
		return width*height / 2;
	}
	virtual void display()override
	{
		cout << "The Width of triangle is : " << width << "\nThe height of triangle is : " << height << "\nThe area of triangle is : " << calculateArea() << endl;
	}

};
class square :public shape
{
public:
	square(int a = 0, int b = 0) :shape(a, b)
	{

	}
    int calculateArea()const
	{
		return width*height;
	}
	virtual void display()override
	{
		cout << "The Width of square is : " << width << "\nThe height of square is : " << height << "\nThe area of square is : " << calculateArea() << endl;
	}

};
class rectangle :public shape
{
public:
	rectangle(int a = 0, int b = 0) :shape(a, b)
	{

	}
    int calculateArea()const
	{
		return width*height;
	}
	virtual void display()override
	{
		cout << "The Width of rectangle is : " << width << "\nThe height of rectangle is : " << height << "\nThe area of rectangle is : " << calculateArea() << endl;
	}
};
class circle :public shape
{
public:
	circle(int a = 0) :shape(a, a)
	{}
    int calculateArea()const
	{
		return 2*3.14*width;
	}
	virtual void display()
	{
		cout << "The Width of circle is : " << width << "\nThe height of circle is : " << height << "\nThe area of circle is : " << calculateArea() << endl;
	}
};
void main()
{
	triangle t1(10, 20);
	circle c1(5);
	shape *p = &t1;
	shape *c = &c1;
	p->display();
	c->display();
	_getch();
	/*t1.display();
	rectangle r1(5, 7);
	r1.display();
	square s1(8, 9);
	s1.display();
	circle c1(8);
	c1.display();
	_getch();*/

}