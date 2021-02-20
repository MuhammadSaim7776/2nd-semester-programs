#include "issue.h"

issue::issue()
{
	 issuedby=nullptr;
	 borrowday=0;
	 borrowmonth = 0;
	 borrowyear = 0;
	 dueday = 0;
	 duemonth = 0;
	 dueyear = 0;
}
issue::issue(user *obj = nullptr, int bday = 0, int bmonth = 0, int byear = 0, int dday = 0, int dmonth = 0, int dyear = 0)
{
	set_Values(obj, bday, bmonth, byear, dday, dmonth, dyear);
}
void issue::set_Values(user* Obj, int Bday, int Bmonth, int Byear, int Dday, int Dmonth, int Dyear)
{
	set_issuedby(Obj);
	set_borrowdate(Bday, Bmonth, Byear);
	set_duedate(Dday, Dmonth, Dyear);
}
void issue::set_borrowdate(int bDay, int bMonth, int bYear)
{
	borrowday = bDay;
	borrowmonth = bMonth;
	borrowyear = bYear;
}
void issue::set_duedate(int dDay, int dMonth, int dYear)
{
	dueday = dDay;
	duemonth = dMonth;
	dueyear = dYear;
}
void issue::set_issuedby(user*obj)
{
	issuedby = obj;
}
user* issue::get_issuedby()const
{
	return issuedby;
}
void issue::printborrowdate()const
{
	cout << "Borrow date" << setw(20) << borrowday << "-" << borrowmonth << "-" << borrowyear << endl;
}
void issue::printduedate()const
{
	cout <<"Due date   "<<setw(20)<< dueday << "-" << duemonth << "-" << dueyear << endl;
}
int issue::get_dueday()const
{
	return dueday;
}
int issue::get_duemonth()const
{
	return duemonth;
}
int issue::get_dueyear()const
{
	return dueyear;
}
void issue::display()
{
	cout << "**********Book Detail********\n\n\n";
	cout << "ISBN" << setw(20) << ISBN << endl;
	cout << "*****************************************************************\n";
	cout << "No Of Pages" << setw(13) << NoOfPages << endl;
	cout << "*****************************************************************\n";
	cout << "Tittle" << setw(18) << tittle << endl;
	cout << "*****************************************************************\n";
	cout << "Price" << setw(19) << price << endl;
	cout << "*****************************************************************\n";
	cout << "Publishor" << setw(15) << publishor << endl;
	cout << "*****************************************************************\n";
	rack->display();
	cout << "*****************************************************************\n";
	printborrowdate();
	cout << "*****************************************************************\n";
	printduedate();
	cout << "*****************************************************************\n";
}
issue::~issue()
{
}
