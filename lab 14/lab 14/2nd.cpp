//#include<iostream>
//#include<conio.h>
//using namespace std;
//class shape
//{
//protected:
//	int length;
//	int width;
//public:
//	shape(int len=0, int wid=0)
//	{
//		length = len;
//		width = wid;
//	}
//	virtual void draw()
//	{
//		cout << "Function called from base class\n";
//	}
//};
//class circle :public shape
//{
//protected:
//public:
//	circle(int a) :shape(a, a)
//	{}
//	virtual void draw()
//	{
//		cout << "Function called from deriverd (circle) class\n";
//	}
//};
//class square :public shape
//{
//public:
//	square(int a, int b) :shape(a, b)
//	{}
//	virtual void draw()
//	{
//		cout << "Function called from deriverd (square) class\n";
//	}
//};
//class triangle :public shape
//{
//public:
//	triangle(int a , int b) :shape(a, b)
//	{}
//	virtual void draw()
//	{
//		cout << "Function called from deriverd (triangle) class\n";
//	}
//};
//void main()
//{
//	circle c1(5);
//	triangle t1(10, 20);
//	square s1(10, 20);
//	shape **ptr = new shape*[3];
//	ptr[0] = &c1;
//	ptr[1] = &t1;
//	ptr[2] = &s1;
//	for (int i = 0; i < 3; i++)
//	{
//		ptr[i]->draw();
//	}
//	_getch();
//}