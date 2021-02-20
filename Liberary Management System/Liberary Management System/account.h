#pragma once
#include"fine.h"
#include<vector>
class account
{
private:
	int noofborrowedbooks;
	int nooflostbooks;
	int noofreturnedbooks;
	int noofreservedbooks;
	fine obj;
public:
	account();
	void increment_borrowedbooks();
	void decrement_borrowedbooks();
	void set_nooflostbooks(int);
	void increment_noofreservrdbooks();
	void decrement_noofreservrdbooks();
	void increment_returnedbooks();
	void decrement_returnedbooks();
	void set_finevalues(fine);
	void set_fineammount(double);
	void setfinedate(int, int, int, int, int, int);
	int get_borrowedbooks()const;
	int get_nooflostbooks()const;
	int get_noofreservrdbooks()const;
	int get_returnedbooks()const;
	void display()const;
	~account();
};

