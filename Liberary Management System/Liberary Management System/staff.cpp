#include "staff.h"

staff::staff()
{
	uni_id = "";
	dept = "";
}
staff::staff( string uniId = "", string Dept = "")
{
	set_values(uniId, Dept);
}
void staff::set_values(string uniiD, string depT)
{
	uni_id = uniiD;
	dept = depT;
}
void staff::set_uniID(string uniid)
{
	uni_id = uniid;
}
void staff::set_dept(string dePt)
{
	dept = dePt;
}
string staff::get_uniID()const
{
	return uni_id;
}
string staff::get_dept()const
{
	return dept;
}
void staff::display()
{
	cout << "**********USER DETAIL**********\n";
	cout << "Name" << setw(20) << name << endl;
	cout << "*************************************************************\n";
	cout << "ID" << setw(20) << ID << endl;
	cout << "*************************************************************\n";
	cout << "Date of membership" << setw(20) << dateOfMembership << endl;
	cout << "*************************************************************\n";
	cout << "University ID"<<setw(20) << uni_id << endl;
	cout << "*************************************************************\n";
	cout << "Department"<<setw(20) << dept<<endl;
	cout << "*************************************************************\n";
	card.display();
	Account.display();
}

staff::~staff()
{
}
