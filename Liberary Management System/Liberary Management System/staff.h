#pragma once
#include"user.h"
class staff:public user
{
private:
	string uni_id;
	string dept;
public:
	staff();
	staff( string, string);
	void set_values(string, string);
	void set_uniID(string);
	void set_dept(string);
	string get_uniID()const;
	string get_dept()const;
	virtual void display()override;
	~staff();
};

