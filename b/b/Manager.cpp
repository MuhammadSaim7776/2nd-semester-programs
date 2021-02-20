#include "Manager.h"
Manager::Manager()
{
	Name = "";
	Branch = "";
	ID = 0;
}
Manager::Manager(string Na, string Br, int Id)
{
	set_values(Na, Br, Id);
}
void Manager::set_values(string nA, string bR, int iD)
{
	set_Name(nA);
	set_Branch(bR);
	set_ID(iD);

}
void Manager::set_Name(string N)
{
	Name = N;
}
void Manager::set_Branch(string B)
{
	Branch = B;
}
void Manager::set_ID(int I)
{
	ID = I;
}
string Manager::get_Name()const
{
	return Name;
}
string Manager::get_Branch()const
{
	return Branch;
}
int Manager::get_ID()const
{
	return ID;
}
void Manager::print_Detail()const
{
	cout << "Manager's Name : " << Name << endl;
	cout << "Manager's Branch : " << Branch << endl;
	cout << "Manager's ID : " << ID << endl;
}