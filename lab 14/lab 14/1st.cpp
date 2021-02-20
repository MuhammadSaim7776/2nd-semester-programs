//#include<iostream>
//#include<conio.h>
//using namespace std;
//class c_Polygon
//{
//protected:
//	int length;
//	int width;
//public:
//	c_Polygon(int len=0 , int wid=0)
//	{
//		length = len;
//		width = wid;
//	}
//	virtual int calculateArea()
//	{
//		cout << "function called from base class\n";
//		return 0;
//	}
//};
//class c_Rectangle:public c_Polygon
//{
//public:
//	c_Rectangle(int a , int b) :c_Polygon(a,b)
//	{}
//	virtual int calculateArea()override
//	{
//		int area = length*width;
//		return area;
//	}
//};
//class c_Triangle :public c_Polygon
//{
//public:
//	c_Triangle(int a , int b):c_Polygon(a,b)
//	{}
//	virtual int calculateArea()override
//	{
//		int area = length*width/2;
//		return area;
//	}
//};
//void main()
//{
//	c_Triangle t1(10, 20);
//	c_Rectangle r1(10, 20);
//	c_Polygon*triangle = &t1;
//	c_Polygon &rectangle = r1;
//	cout<<"The area of triangle is  "<<triangle->calculateArea()<<endl;
//	cout << "The area of rectangle is  " << rectangle.calculateArea() << endl;
//	_getch();
//}
