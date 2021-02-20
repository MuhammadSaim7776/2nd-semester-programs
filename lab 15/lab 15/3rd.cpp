#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class CarbonfoodPrint
{
protected:
	double carbonFoodPrint;
public:
	
	virtual double getCarbonFoodPrint() = 0;
	virtual void display() = 0;
};
class building :public CarbonfoodPrint
{
protected:
	double electricityBill;
public:
	building(double e=0)
	{
		set_values(e);
	}
	void set_values(double el)
	{
		electricityBill = el;
	}
	virtual double getCarbonFoodPrint()override
	{
		carbonFoodPrint = (electricityBill / 8)*1.37 * 12;
		return carbonFoodPrint;
	}
	virtual void display()override
	{
		cout << "The emission of CO2 in case of building is : " << getCarbonFoodPrint() << " ponds" << endl;
	}
	~building()
	{}

};
class bicycle :public CarbonfoodPrint
{
protected:
	float miles;
	float feulEfficiency;
	float ammountOfCO2;
public:
	bicycle(float mile ,float feul, float ammount)
	{
		set_vallues(mile, feul, ammount);
	}
	void set_vallues(float m, float f, float a)
	{
		miles = m;
		feulEfficiency = f;
		ammountOfCO2 = a;
	}
	virtual double getCarbonFoodPrint()override
	{
		carbonFoodPrint=((miles*52.14) / feulEfficiency)*ammountOfCO2 * 3;
		return carbonFoodPrint;
	}
	virtual void display()override
	{
		cout << "The emission of CO2 in case of bicycle is : " << getCarbonFoodPrint() <<" ponds" <<endl;
	}
	~bicycle()
	{}
};
class car :public CarbonfoodPrint
{
protected:
	float gasBill;
public:
	car(float g = 0)
	{
		gasBill = g;
	}
	virtual double getCarbonFoodPrint()override
	{
		carbonFoodPrint = (gasBill / 3)*120.61 * 12;
		return carbonFoodPrint;
	}
	void display()override
	{
		cout << "The emission of CO2 in case of car is : " << getCarbonFoodPrint() << " ponds" << endl;
	}
	~car()
	{}
};
void main()
{
	building b1(50000);
	bicycle b2(1500, 25, 50);
	car c(2000);
	CarbonfoodPrint *ptr = nullptr;
	ptr = &b1;
	ptr->display();
	cout << "____________________________________________________________________________________________\n";
	ptr = &b2;
	ptr->display();
	cout << "____________________________________________________________________________________________\n";
	ptr = &c;
	ptr->display();
	_getch();
}