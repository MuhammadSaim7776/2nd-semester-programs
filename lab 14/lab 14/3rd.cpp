#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class ship
{
protected:
	string name;
	int year;
public:
	ship(string nam="", int yea=0)
	{
		set_Values(nam, yea);
	}
	void set_Values(string Nam, int Yea)
	{
		name = Nam;
		year = Yea;
	}
	string get_name()const
	{
		return name;
	}
	int get_year()const
	{
		return year;
	}
	virtual void print()const
	{
		cout << "The name of ship is : " << name << "\nThe year of its construction is : " << year << endl;
	}
};
class CruiseShip :public ship
{
protected:
	int passangers;
public:
	CruiseShip( int y, int P) :ship("Cruise Ship", y)
	{
		set_passangers(P);
	}
	void set_passangers(int p)
	{
		passangers = p;
	}
	int get_passangers()const
	{
		return passangers;
	}
	virtual void print()const override
	{
		cout << "The name of ship is : " << name << "\nThe capacity for maximum number of passangers : " << passangers << endl;
	}
};
class CargoShip :public ship
{
protected:
	int capacity;
public:
	CargoShip(int y, int C) :ship("Cargo Ship", y)
	{
		set_capacity(C);
	}
	void set_capacity(int c)
	{
		capacity = c;
	}
	int get_capacity()const
	{
		return capacity;
	}
	virtual void print()const override
	{
		cout << "The name of ship is : " << name << "\nThe capacity is : " << capacity << endl;
	}
};
void main()
{
	CruiseShip s1(1999, 500);
	CargoShip s2(2000, 1000);
	ship*ptr1 = &s1;
	ship*ptr2 = &s2;
	ptr1->print();
	ptr2->print();
	_getch();
}