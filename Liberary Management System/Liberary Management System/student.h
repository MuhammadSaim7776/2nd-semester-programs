#pragma once
#include"user.h"
class student:public user
{
private:
	string RegNo;
	int session;
	string dept;
public:
	student();
	student( string, int , string);
	void set_values(string,int, string);
	void set_RegNo(string);
	void set_dept(string);
	void set_session(int);
	string get_RegNo()const;
	string get_dept()const;
	int get_session()const;
	virtual void display()override;
	~student();
};

