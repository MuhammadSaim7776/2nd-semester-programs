#include<iostream>
#include<conio.h>
using namespace std;
class  Fraction
{
private:
	int numenator, denomenator;
public:
	Fraction()
	{
		numenator = 0;
		denomenator = 0;
	}
	void reduce(int &n, int &m)
	{
		for (int i = n*m; i > 1; i--)
		{
			if ((n%i == 0) && (m%i == 0))
			{
				n /= i;
				m /= i;
			}
		}
	}
	Fraction(int no, int mo)
	{
		numenator = no;
		denomenator = mo;
		reduce(numenator, denomenator);
	}
	
	Fraction operator +(const Fraction & F)
	{
		Fraction temp;
		temp.numenator = (this->numenator*F.denomenator) + (F.numenator*this->denomenator);
		temp.denomenator = this->denomenator*F.denomenator;
		reduce(temp.numenator, temp.denomenator);
		return temp;
	}
	Fraction operator -(const Fraction & F)
	{
		Fraction temp;
		temp.numenator = (this->numenator*F.denomenator) - (F.numenator*this->denomenator);
		temp.denomenator = this->denomenator*F.denomenator;
		reduce(temp.numenator, temp.denomenator);
		return temp;
	}
	Fraction operator *(const Fraction & F)
	{
		Fraction temp;
		temp.numenator = this->numenator*F.numenator;
		temp.denomenator = this->denomenator*F.denomenator;
		reduce(temp.numenator, temp.denomenator);
		return temp;


	}
	Fraction operator /(const Fraction & F)
	{
		Fraction temp;
		temp.numenator = this->numenator*F.denomenator;
		temp.denomenator = F.numenator*this->denomenator;
		reduce(temp.numenator, temp.denomenator);
		return temp;
	}
	Fraction operator ++()
	{
		this->numenator++;
		this->denomenator++;
		return*this;
	}
	Fraction operator ++(int s)
	{
		Fraction temp = *this;
		numenator++;
		denomenator++;
		return temp;
	}
	Fraction operator --()
	{
		this->numenator--;
		this->denomenator--;
		return*this;
	}
	Fraction operator --(int s)
	{
		Fraction temp = *this;
		numenator--;
		denomenator--;
		return temp;
	}
	Fraction operator -()                  /*function for negative of Fraction*/
	{
		Fraction temp;
		temp.numenator = -numenator;
		temp.denomenator = denomenator;
		return temp;
	}
	Fraction operator +()                  /*function for negative of Fraction*/
	{
		Fraction temp;
		temp.numenator = +numenator;
		temp.denomenator = denomenator;
		return temp;
	}
	friend istream& operator>>(istream&, Fraction&);
	friend ostream& operator<<(ostream&, Fraction&);
};
istream& operator>>(istream& in,  Fraction& F)
{
	 in >> F.numenator >> F.denomenator;
	 F.reduce(F.numenator, F.denomenator);
	 return in;
}
ostream& operator<<(ostream& out,  Fraction& F)
{
	return out << F.numenator << "/" << F.denomenator<<endl;
}

void main()
{
	Fraction obj1, obj2, obj3;
	cout << "Enter the numenator and denomenator of object 1\n";
	cin >> obj1;
	cout << "The reduced form of obj1 is : ";
	cout << obj1;
	cout << "Enter the numenator and denomenator of object 2\n";
	cin >> obj2;
	cout << "The reduced form of obj2 is : ";
	cout << obj2;
	obj3 = obj1.operator+(obj2);
	cout << "The sum of two fractions is :";
    cout<<obj3;
	obj3 = obj1.operator-(obj2);
	cout << "The difference of two fractions is :";
	cout<<obj3;
	obj3 = obj1.operator*(obj2);
	cout << "The multiplication of two fractions is :";
	cout << obj3;
	obj3 = obj1.operator/(obj2);
	cout << "The division of two fractions is :";
	cout << obj3;
	obj3 = ++obj1;
	cout << "After preincrement the obj1 become : " << obj3;
	obj3 = obj2++;
	cout << "After postincrement the obj2 become : " << obj3;
	obj3 = --obj2;
	cout << "After predicrement the obj2 become : " << obj3;
	obj3 = obj1--;
	cout << "After postdicrement the obj1 become : " << obj3;
	obj3 = -obj1;
	cout << "The negative of object1 is : " << obj3;
	_getch();


	
}
