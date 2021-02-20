//#include<iostream>
//#include<conio.h>
//using namespace std;
//class B;
//class A
//{
//	int a;
//public:
//	A()
//	{
//
//	}
//	void set_value(int w)
//	{
//		a = w;
//	}
//	void dislay()const
//	{
//		cout << "The value of a before swapping is  " << a;
//		cout << endl;
//	}
//	friend void exchange(A&, B&);
//};
//class B
//{
//	int b;
//public:
//	B()
//	{
//
//	}
//	void set_value(int w)
//	{
//		b = w;
//	}
//	void dislay()const
//	{
//		cout << "The value of b before swapping is  " << b;
//		cout << endl;
//	}
//	friend void exchange(A&, B&);
//};
//void exchange(A&s, B&p)
//{
//	int swap;
//	swap = s.a;
//	s.a = p.b;
//	p.b = swap;
//	cout << "The value of a after swapping is " << s.a << "\nThe Value of b after swaaping is " << p.b;
//}
//void main()
//{
//	A obj1;
//	B obj2;
//	obj1.set_value(20);
//	obj2.set_value(40);
//	obj1.dislay();
//	obj2.dislay();
//	exchange(obj1, obj2);
//	_getch();
//
//}