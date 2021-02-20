#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class employee
{
private:
	string name;
public:
	employee(string n)
	{
		name = n;
	}
	string get_name()const
	{
		return name;
	}

};
class bank
{
private:
	string name;
public:
	bank(string na)
	{
		name = na;
	}
	void show(employee e)
	{
		cout << e.get_name() << " is an employee of " << name << " bank";
	}

};
void main()
{
	employee e1("ABC");
	bank B("HBL");
	B.show(e1);
	_getch();
}
