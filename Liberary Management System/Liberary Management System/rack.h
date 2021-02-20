#pragma once
#include<iostream>
#include<conio.h>
#include<string>
#include<iomanip>
using namespace std;
class Rack
{
private:
	int racknumber;
	string locationidentifier;
public:
	Rack();
	Rack(int, string);		 			
	void setvalues(int, string);
	void setracknumber(int);
	void setlocationidentifier(string);
	int getracknumber();
	string getlocationidentifier();
	void display();
	~Rack();				

};
