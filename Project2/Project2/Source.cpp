#include<iostream>
#include<conio.h>
using namespace std;
class shape
{
protected:
	int length;
	int width;
public:
	shape(int leng = 0, int widt = 0)
	{
		length = leng;
		width = widt;
	}
   virtual void show()
	{
		cout << "Length is : " << length << "\nWidth is : " << width << endl;
	}
};
class rectangle :public shape
{
public:
	rectangle(int  l = 0, int w = 0) :shape(l, w)
	{}
	virtual void show()override
	{
		cout << " l of r is : " << length << "\n W of r is : " << width << endl;
	}
};
class square :public shape
{
public:
	square(int  l = 0, int w = 0) :shape(l, w)
	{}
	virtual void show()override
	{
		cout << " l of s is : " << length << "\n W of s is : " << width << endl;
	}
};
void main()
{
	rectangle t1(10, 20);
	shape*ptr = &t1;
	ptr->show();
	_getch();
}