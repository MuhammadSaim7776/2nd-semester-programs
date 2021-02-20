#pragma once
#include<iostream>
#include<string>
#include<conio.h>
#include<iomanip>
#include"liberarian.h"
#include"database.h"
using namespace std;
class liberary
{
private:
	string name;
	string address;
	string uni_name;
public:
	liberarian* Librarian;
	database*Database;
	liberary(string, string, string,liberarian&,database&);
	void set_values(string na, string ad, string un);
	void set_name(string n);
	void set_address(string a);
	void set_uniname(string u);
	string get_name()const;
	string get_address()const;
	string get_uniname()const;
	void displaylibdetail()const;
	~liberary();
};

