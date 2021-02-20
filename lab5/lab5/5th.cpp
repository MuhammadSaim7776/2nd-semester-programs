//#include<iostream>
//#include<conio.h>
//using namespace std;
//class rectangle{
//private:
//	int length, width, area;
//public:
//	rectangle(){
//		length = 0;
//		width = 0;
//		area = 0;
//	}
//	rectangle(const rectangle &r)
//	{
//		length = r.length;
//		width = r.width;
//		area = r.area;
//	}
//	void set_data(int l, int w)
//	{
//		length = l;
//		width = w;
//	}
//	void set_length(int l)
//	{
//		length = l;
//	}
//	void set_width(int w)
//	{
//		width = w;
//	}
//	void set_area()
//	{
//		area=length*width;
//	}
//	int get_length()const
//	{
//		return length;
//	}
//	int get_width()const
//	{
//		return width;
//	}
//	int get_area()const
//	{
//		return area;
//	}
//
//};
//void main()
//{
//	int len, wid;
//	cout << "Enter the length of rectangle\n";
//	cin >> len;
//	cout << "Enter the width of rectangle\n";
//	cin >> wid;
//	rectangle R1;
//	R1.set_data(len, wid);
//	R1.set_area();
//	rectangle R2(R1);
//	cout << "The lenth of object 1 is " << R1.get_length() << endl;
//	cout << "The width of object 1 is " << R1.get_width() << endl;
//	cout << "The area of object 1 is " << R1.get_area() << endl;
//	cout << "The lenth of object 2 is " << R2.get_length() << endl;
//	cout << "The width of object 2 is " << R2.get_width() << endl;
//	cout << "The area of object 2 is " << R2.get_area() << endl;
//	_getch();
//}