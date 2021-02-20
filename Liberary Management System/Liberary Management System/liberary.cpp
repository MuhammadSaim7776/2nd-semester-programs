#include "liberary.h"


liberary::liberary(string Name, string Address, string Uni,liberarian&objc,database&obc)
{
	Librarian = &objc;
	Database = &obc;
	set_values(Name, Address, Uni);
}
void liberary:: set_values(string na, string ad, string un)
{
	set_name(na);
	set_address(ad);
	set_uniname(un);
}
void liberary::set_name(string n)
{
	name = n;
}
void liberary::set_address(string a)
{
	address = a;
}
void liberary::set_uniname(string u)
{
	uni_name = u;
}
string liberary::get_name()const
{
	return name;
}
string liberary::get_address()const
{
	return address;
}
string liberary::get_uniname()const
{
	return uni_name;
}
void liberary::displaylibdetail()const
{
	cout << "**********Liberary Details**********\n";
	cout << "\tName"<<setw(20) << name<<endl;
	cout << "***************************************\n";
	cout << "\tAddress" << setw(20) << address << endl;
	cout << "***************************************\n";
	cout << "\tUniversity Name" << setw(20) << uni_name << endl;
	cout << "***************************************\n";
}

liberary::~liberary()
{
}
