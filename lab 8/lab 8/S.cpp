//#include<iostream>
//#include<conio.h>
//using namespace std;
//class Fraction
//{
//private:
//	int numerator;
//	int denominator;
//
//public:
//	Fraction()
//	{
//		numerator = 0;
//		denominator = 0;
//	}
//	void reduce(int &n, int &d)
//	{
//		for (int i = n*d; i > 1; i--)
//		{
//			if (n % i == 0 && d % i == 0)
//			{
//				n = n/i;
//				d = d/i;
//			}
//		}
//	}
//	void setvalues(int n, int d)
//	{
//		numerator = n;
//		denominator = d;
//		if (d == 0)
//		{
//			cout << "it is undefined please enter valid number";
//			exit(0);
//		}
//		else
//		{
//			denominator = d;
//		}
//		reduce(numerator, denominator);
//		
//	}
//	Fraction operator+(Fraction obj)
//	{
//		Fraction result;
//		result.numerator = numerator*obj.denominator + denominator*obj.numerator;
//		result.denominator = denominator*obj.denominator;
//		return result;
//	}
//	Fraction operator-(Fraction obj)
//	{
//		Fraction result;
//		result.numerator = numerator*obj.denominator - denominator*obj.numerator;
//		result.denominator = denominator*obj.denominator;
//		return result;
//	}
//	Fraction operator*(Fraction obj)
//	{
//		Fraction result;
//		result.numerator = numerator*obj.numerator;
//		result.denominator = denominator*obj.denominator;
//		return result;
//	}
//	Fraction operator/(Fraction obj)
//	{
//		Fraction result;
//		result.numerator = numerator*obj.denominator;
//		result.denominator = denominator*obj.numerator;
//		return result;
//	}
//	Fraction operator++() //pri increment
//	{
//		numerator++;
//		denominator++;
//		return *this;
//	}
//	Fraction operator++(int n) //post increment
//	{
//		Fraction c;
//		c = *this;
//		numerator++;
//		denominator++;
//		return c;
//	}
//	Fraction operator--() //pri decrement
//	{
//		numerator--;
//		denominator--;
//		return *this;
//	}
//	Fraction operator--(int n) //post decrement
//	{
//		Fraction d;
//		d = *this;
//		numerator--;
//		denominator--;
//		return d;
//	}
//	void display()
//	{
//		cout << numerator << "/" << denominator << endl;
//
//	}
//	friend istream& operator>>(istream &, Fraction &);
//	friend ostream& operator<<(ostream &, Fraction &);
//
//};
//istream& operator>>(istream& i, Fraction& obj)
//{
//	i >> obj.numerator >> obj.denominator;
//	return i;
//}
//ostream& operator<<(ostream& o, Fraction& obj)
//{
//	return o << obj.numerator << "/" << obj.denominator << endl;
//}
//void main()
//{
//	Fraction a, b;
//	a.setvalues(2, 4);
//	b.setvalues(2, 4);
//	cout << a<<b;
//	Fraction c;
//	c = a.operator+(b);
//	c.display();
//	c = a.operator-(b);
//	c.display();
//	c = a.operator*(b);
//	c.display();
//	c = a.operator/(b);
//	c.display();
//	cout << " After pre increment" << endl;
//	c = ++a;
//	a.display();
//	cout << "After post increment " << endl;
//	c = a++;
//	a.display();
//	cout << "After pre decrement " << endl;
//	c = --a;
//	a.display();
//	cout << "After post decrement" << endl;
//	c = a--;
//	a.display();
//	cout << "your entered values for 1st obj are" << endl;
//	operator<<(cout, a);
//	cout << "your entered values for 2nd obj are" << endl;
//	operator<<(cout, b);
//	cout << "enter the values for 1st object" << endl;
//	operator>>(cin, a);
//	cout << "enter the values for 2nd object" << endl;
//	operator>>(cin, b);
//	cout << a << b;
//	_getch();
//}