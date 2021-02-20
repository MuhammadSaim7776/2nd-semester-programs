#include "librarycard.h"
using namespace std;
librarycard::librarycard()
{
	cardnumber = "";
	issueddate = "";
	status = "";
}
librarycard::librarycard(string cdNO="",string dae="",string StaTs="")			 
{
	set_values(cdNO, dae, StaTs);
}
void librarycard::set_values(string cArdNO, string dAte, string StATus)
{
	set_cardnumber(cArdNO);
	set_issueddate(dAte);
	set_status(StATus);
}
void librarycard::set_cardnumber(string c)
{
	cardnumber = c;
}
void librarycard::set_issueddate(string i)
{
	issueddate = i;
}
void librarycard::set_status(string stAtus)
{
	status = stAtus;
}
string librarycard::get_cardnumber()const
{
	return cardnumber;
}
string librarycard::get_issueddate()const
{
	return issueddate;
}
string librarycard::get_status()const
{
	return status;
}
void librarycard::display()
{
	cout << "Cardnumber" << setw(20) << cardnumber << endl;
	cout << "*************************************************************\n";
	cout << "Issueddate" << setw(20) << issueddate << endl;
	cout << "*************************************************************\n";
	cout << "Active" << setw(20) << status << endl;
	cout << "*************************************************************\n";
}
librarycard::~librarycard()			
{
}