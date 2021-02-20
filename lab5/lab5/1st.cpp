//#include<iostream>
//#include<conio.h>
//using namespace std;
//class feetinches{
//private:
//	int feet, inches;
//	void simplify();
//public:
//	feetinches(int f = 0, int i = 0){
//		feet = f;
//		inches = i;
//		simplify();
//	}
//	feetinches(const feetinches&a)
//	{
//		feet = a.feet;
//		inches = a.inches;
//	}
//	void setFeet(int f)
//	{
//		feet = f;
//	}
//	void setInches(int i)
//	{
//		inches = i;
//	}
//	int getFeet()const
//	{
//		return feet;
//	}
//	int getInches()const
//	{
//		return inches;
//	}
//};
//void feetinches::simplify()
//{
//	if (inches >= 12)
//	{
//		feet += (inches / 12);
//		inches = inches % 12;
//	}
//	else if (inches < 0)
//	{
//		feet -= abs(inches) / 12;
//		inches = 12 - (abs(inches) % 12);
//	}
//};
//void main()
//{
//	feetinches object1(10, 15);
//	feetinches object2(object1);
//	cout << "The values in obje 1 are\n";
//	cout << "Feets = " << object1.getFeet() << endl;
//	cout << "inches = " << object1.getInches() << endl;
//	cout << "The values in obje 2 are\n";
//	cout << "Feets = " << object2.getFeet() << endl;
//	cout << "inches = " << object2.getInches() << endl;
//	_getch();
//}
//	
