#include "book.h"

book::book()
{
	ISBN="";
	NoOfPages=0;
	tittle = "";
	price=0;
	publishor = "";
    rack=nullptr;
}
book::book(string isBn, int pAges, string tiTle, int prIce, string puBlishor, Rack*rck)
{
	set_values(isBn, pAges, tiTle, prIce, puBlishor,rck);
}
void book::set_values(string iSbn,  int Pages, string tIttle, int pRice, string pUblishor,Rack*Rck)
{
	rack = Rck;
	set_ISBN(iSbn);
	set_NoOfPages(Pages);
	set_tittle(tIttle);
	set_price(pRice);
	set_publishor(pUblishor);
}
void book::set_ISBN(string isbn)
{
	ISBN = isbn;
}
void book::set_NoOfPages(int pages)
{
	NoOfPages = pages;
}
void book::set_tittle(string Tittle)
{
	tittle = Tittle;
}
void book::set_price(int Price)
{
	price = Price;
}
void book::set_publishor(string Publishor)
{
	publishor = Publishor;
}


string book::get_ISBN()const
{
	return ISBN;
}
int book::get_NoOfPages()const
{
	return NoOfPages;
}
string book::get_tittle()const
{
	return tittle;
}
int book::get_price()const
{
	return price;
}
string book::get_publishor()const
{
	return publishor;
}
void book::display()
{
	cout << "**********Book Detail********\n\n\n";
	cout << "ISBN" << setw(20) << ISBN<<endl;
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
}
int book::get_rckno()const
{
	return rack->getracknumber();
}
Rack*book::getrack()const
{
	return rack;
}
book::~book()
{
}
