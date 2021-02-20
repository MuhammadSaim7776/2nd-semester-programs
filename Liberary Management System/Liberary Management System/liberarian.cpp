#include "liberarian.h"
liberarian::liberarian()
{
	password = "liberary123";
	set_values("", "", "");
}
liberarian::liberarian(string Name, string id, string Address)
{
	password = "Liberary123";
	set_values(Name, id, address);
}
void liberarian::set_values(string nAme = "", string Id = "", string aDress = "")
{
	set_name(nAme);
	set_ID(Id);
	set_address(aDress);
}
void liberarian::set_name(string naMe)
{
	name = naMe;
}
void liberarian::set_ID(string iD)
{
	ID = iD;
}
void liberarian::set_address(string adDress)
{
	address = adDress;
}
void liberarian::update_password(string currentpassword)
{
	if (checkPassword(currentpassword) == "true")
	{
		cout << "Enter the new password : \n";
		cin >> password;
		cout << "Password updated successfully\n";
	}
	else
	{
		cout << "Incorrect password !\n";
	}
}
string liberarian::get_name()const
{
	return name;
}
string liberarian::get_ID()const
{
	return ID;
}
string liberarian::get_address()const
{
	return address;
}
string liberarian::get_password()
{
	
		return password;
}
string liberarian::checkPassword(string currentpassword)
{
	if (currentpassword == password)
	{
		return "true";
	}
	else
	{
		return "false";
	}
}
void liberarian::display()const
{
	cout << "**********Liberarian Detail**********\n";
	cout << "Name" << setw(10) << ":" << setw(10) << name << endl;
	cout << "*****************************************************************\n";
	cout << "ID" << setw(10) << ":" << setw(10) << ID << endl;
	cout << "*****************************************************************\n";
	cout << "Addree" << setw(10) << ":" << setw(10) << address << endl;
	cout << "*****************************************************************\n";
}
liberarian::~liberarian()
{
}
