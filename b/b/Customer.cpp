#include"Customer.h"
Customer::Customer()
{
	Name = "";
	ID = 0;
}
Customer::Customer(string Na, int Id)
{
	set_values(Na, Id);
}
void Customer::set_values(string nA, int iD)
{
	set_Name(nA);
	set_ID(iD);
}
void Customer::set_Name(string n)
{
	Name = n;
}
void Customer::set_ID(int I)
{
	ID = I;
}
string Customer::get_Name()const
{
	return Name;
}
int Customer::get_ID()const
{
	return ID;
}
void Customer::print_Details()const
{
	cout << "The name of Customer is : " << Name << endl;
	cout << "The ID of Customer is : " << ID << endl;
}