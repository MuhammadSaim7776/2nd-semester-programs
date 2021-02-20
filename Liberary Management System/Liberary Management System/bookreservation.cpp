#include "bookreservation.h"
bookreservation::bookreservation()
{
	reservedby = nullptr;
	string CreationDAte="";
	string Status = "";
	string Email = "";
}

bookreservation::bookreservation(user* oBj = nullptr, string creationdate = "", string status = "", string email = "")
{
	set_Values(oBj, creationdate, status, email);
}
void bookreservation::set_Values(user* Obj,string creAtiondate, string stAtus, string emAil)
{
	set_reservedby(Obj);
	set_creationdate(creAtiondate);
	set_status(stAtus);
	set_email(emAil);
}
void bookreservation::set_creationdate(string date)
{
	CreationDAte = date;
}
void bookreservation::set_status(string sTAtus)
{
	Status = sTAtus;
}
void bookreservation::set_email(string eMail)
{
	Email = eMail;
}
void bookreservation::set_reservedby(user* obj)
{
	reservedby = obj;
}
string bookreservation::get_creationdate()const
{
	return CreationDAte;
}
string bookreservation::get_status()const
{
	return Status;
}
string bookreservation::get_email()const
{
	return Email;
}
user* bookreservation::get_reservrdby()const
{
	return reservedby;
}
void bookreservation::display()
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
	cout << "Creation Date" << setw(20) << CreationDAte << endl;
	cout << "*****************************************************************\n";
	cout << "Status" << setw(20) << Status << endl;
	cout << "*****************************************************************\n";
	cout << "Email" << setw(20) << Email << endl;
	cout << "*****************************************************************\n";
}
bookreservation::~bookreservation()
{
}
