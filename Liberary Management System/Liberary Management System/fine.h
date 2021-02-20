#pragma once
#include<iostream>
#include<conio.h>
#include<string>
#include<iomanip>
using namespace std;
class fine
{
private:
	double ammount;
	int creationday;
	int creationmonth;
	int creationyear;
	int dueday;
	int duemonth;
	int dueyear;
	int NoOfDays;
public:
	fine();
	void set_values(int, int, int, int, int, int);
	void set_creationdate(int,int,int);
	void set_duedate(int,int,int);
	void set_fine(double);
	int get_dueday()const;
	int get_duemonth()const;
	int get_dueyear()const;
	void calculatefine(int,int,int);
	void display()const;
	int LeapOrNot(int);
	void set_NoOfDays(int,int,int,int,int,int);
	~fine();
};












