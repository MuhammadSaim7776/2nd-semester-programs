//#include<iostream>
//#include<conio.h>
//#include<string>
//using namespace std;
//class Shape
//{
//protected:
//	int length;
//	int width;
//public:
//	Shape(int l = 0, int w = 0)
//	{
//		length = l;
//		width = w;
//	}
//	void setValues(int lngth, int wdth)
//	{
//		setLength(lngth);
//		setWidth(wdth);
//	}
//	void setLength(int l)
//	{
//		length = l;
//	}
//	void setWidth(int w)
//	{
//		width = w;
//	}
//	int getLength()const
//	{
//		return length;
//	}
//	int getWidth()const
//	{
//		return width;
//	}
//};
//class Rectangle :public Shape
//{
//protected:
//	int area;
//public:
//	Rectangle()
//	{
//		area = 0;
//	}
//	
//	void setArea()
//	{
//		area = length*width;
//	}
//	int getArea()const
//	{
//		return area;
//	}
//	void printArea()const
//	{
//		cout << "The area of Rectangle with length : " << length << " and width : " << width << " is : " << area << endl;
//	}
//};
//class Triangle :public Shape
//{
//protected:
//	int area;
//public:
//	Triangle()
//	{
//		area = 0;
//	}
//	void setArea()
//	{
//		area = (0.5)*length*width;
//	}
//	int getArea()const
//	{
//		return area;
//	}
//	void printArea()const
//	{
//		cout << "The area of Triangle with length : " << length << " and width : " << width << " is : " << area << endl;
//	}
//};
//void main()
//{
//	Triangle T1, T2;
//	Rectangle R1, R2;
//	T1.setValues(10, 20);
//	T1.setArea();
//	T2.setValues(20, 30);
//	T2.setArea();
//	cout << "For T1" << endl;
//	T1.printArea();
//	cout << "For T2" << endl;
//	T2.printArea();
//	R1.setValues(10, 20);
//	R1.setArea();
//	R2.setValues(20, 30);
//	R2.setArea();
//	cout << "For R1" << endl;
//	R1.printArea();
//	cout << "For R2" << endl;
//	R2.printArea();
//	_getch();
//}
//
