#pragma once
#include<iostream>
#include<conio.h>
#include<string>
#include<iomanip>
using namespace std;
class librarycard
{
private:
	string cardnumber;
	string issueddate;
	string status;
public:
	librarycard();
	librarycard(string,string,string);	
	void set_values(string, string, string);
	void set_cardnumber(string);
	void set_issueddate(string);
	void set_status(string);
	string get_cardnumber()const;
	string get_issueddate()const;
	string get_status()const;
	void display();
	~librarycard();			

};
