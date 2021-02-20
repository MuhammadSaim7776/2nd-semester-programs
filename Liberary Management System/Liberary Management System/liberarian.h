#pragma once
#include<iostream>
#include<string>
#include<conio.h>
#include<iomanip>
using namespace std;
class liberarian
{
private:
	string name;
	string ID;
	string address;
	string password;
public:
	liberarian();
	liberarian(string, string, string);
	void set_values(string, string, string);
	void set_name(string);
	void set_ID(string);
	void set_address(string);
	void update_password(string);
	string checkPassword(string);
	string get_name()const;
	string get_ID()const;
	string get_password();
	string get_address()const;
	void display()const;
	~liberarian();
};

