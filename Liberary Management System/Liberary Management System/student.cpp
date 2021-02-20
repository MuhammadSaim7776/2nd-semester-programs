#include "student.h"
student::student()
{
	RegNo = "";
	session = 0;
	dept = "";
}
student::student(string ReGNo, int Session, string Dept)
{
	set_values(ReGNo, Session, Dept);
}
void student::set_values(string REGNo, int SEssion, string DEpt)
{
	RegNo = REGNo;
	session = SEssion;
	dept = DEpt;
}
void student::set_RegNo(string REGNO)
{
	RegNo = REGNO;
}
void student::set_session(int SESsion)
{
	session = SESsion;
}
void student::set_dept(string DEPT)
{
	dept = DEPT;
}
string student::get_RegNo()const
{
	return RegNo;
}
int student::get_session()const
{
	return session;
}
string student::get_dept()const
{
	return dept;
}
void student::display()
{
	cout << "**********USER DETAIL**********\n";
	cout << "Name" << setw(20) << name << endl;
	cout << "*************************************************************\n";
	cout << "ID" << setw(20) << ID << endl;
	cout << "*************************************************************\n";
	cout << "Date of membership" << setw(20) << dateOfMembership << endl;
	cout << "*************************************************************\n";
	cout << "Registration Number"<<setw(20) << RegNo << endl;
	cout << "*************************************************************\n";
	cout << "Session"<<setw(20) << session << endl;
	cout << "*************************************************************\n";
	cout << "Departmnet" << setw(20) << dept << endl;
	cout << "*************************************************************\n";
	card.display();
	Account.display();
}
student::~student()
{
}
