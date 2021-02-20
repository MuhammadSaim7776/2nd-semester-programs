#pragma once
#include"book.h"
#include"user.h"
class issue:public book
{
private:
	user *issuedby;
	int borrowday;
	int borrowmonth;
	int borrowyear;
	int dueday;
	int duemonth;
	int dueyear;
public:
	issue();
	issue(user*, int, int, int, int, int, int);
	void set_Values(user*, int, int, int, int, int, int);
	void set_borrowdate(int, int, int);
	void set_duedate(int, int, int);
	void set_issuedby(user*);
	user* get_issuedby()const;
	void printborrowdate()const;
	void printduedate()const;
	int get_dueday()const;
	int get_duemonth()const;
	int get_dueyear()const;
    virtual void display()override;
	~issue();
};

