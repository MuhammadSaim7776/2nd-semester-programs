#include "account.h"


account::account()
{
	noofborrowedbooks = 0;
	nooflostbooks = 0;
	noofreservedbooks = 0;
	noofreturnedbooks = 0;
}
void account::increment_borrowedbooks()
{
	noofborrowedbooks++;
}
void account::decrement_borrowedbooks()
{
	noofborrowedbooks--;
}
void account::increment_returnedbooks()
{
	noofreturnedbooks++;
}
void account::decrement_returnedbooks()
{
	noofreturnedbooks--;
}
void account::set_finevalues(fine h)
{
	obj = h;
}
void account::set_nooflostbooks(int n)
{
	nooflostbooks = n;
}
void account::increment_noofreservrdbooks()
{
	noofreservedbooks++;
}
void account::decrement_noofreservrdbooks()
{
	noofreservedbooks--;
}
int account::get_borrowedbooks()const
{
	return noofborrowedbooks;
}
int account::get_nooflostbooks()const
{
	return nooflostbooks;
}
int account::get_noofreservrdbooks()const
{
	return noofreservedbooks;
}
int account::get_returnedbooks()const
{
	return noofreturnedbooks;
}
void account::set_fineammount(double amunt)
{
	obj.set_fine(amunt);
}
void account::setfinedate(int d1, int m1, int y1, int d2, int m2, int y2)
{
	obj.set_values(d1, m1, y1, d2, m2, y2);
}
void account::display()const
{
	cout << "No Of Borrowed Books" << setw(20) << noofborrowedbooks << endl;
	cout << "*************************************************************\n";
	cout << "No Of Lost Books" << setw(20) << nooflostbooks << endl;
	cout << "*************************************************************\n";
	cout << "No Of Reserverd Books" << setw(20) << noofreservedbooks << endl;
	cout << "*************************************************************\n";
	obj.display();
}
account::~account()
{
}
