#pragma once
#include<iostream>
#include<conio.h>
#include<string>
#include<iomanip>
#include"librarycard.h"
#include"account.h"
using namespace std;
class user
{
private:
	int NoOfDays;
protected:
	string name;
	double ID;
	string dateOfMembership;
	account Account;
	librarycard card;
public:
	user();
	user(string,double,string,string,string,string);
	void set_Values(string, double, string, string, string, string);
	void set_name(string);
	void set_ID(double);
	void set_dateofmembership(string);
	void set_libraycarddetails(string,string,string);
	void increment_accoutdetails(int);
	void decrement_accoutdetails(int);
	void set_fine(double);
	string get_name()const;
	double get_ID()const;
	string get_dateofmembership()const;
	void setfinedate(int, int, int, int, int, int);
    virtual void display();
	int LeapOrNot(int);
	void set_NoOfDays(int, int, int, int, int, int);
	string get_CardNo()const;
	int get_noofdays();

	~user();
};

