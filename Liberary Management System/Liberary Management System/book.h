#pragma once
#include<iostream>
#include<conio.h>
#include<string>
#include<iomanip>
#include"rack.h"
using namespace std;
class book
{
protected:
	string ISBN;
	int NoOfPages;
	string tittle;
	int price;
	string publishor;
	Rack*rack;
public:
	book();
	book(string,  int, string, int, string, Rack*);
	void set_values(string, int, string, int, string, Rack*);
	void set_ISBN(string);
	void set_NoOfPages(int);
	void set_tittle(string);
	void set_price(int);
	void set_publishor(string);
	string get_ISBN()const;
	int get_NoOfPages()const;
	string get_tittle()const;
	int get_price()const;
	string get_publishor()const;
	Rack*getrack()const;
	int get_rckno()const;
	virtual void display();
	~book();
};

