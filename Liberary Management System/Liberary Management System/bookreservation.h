#pragma once
#include"book.h"
#include"user.h"
class bookreservation:public book
{
private:
	user*reservedby;
	string CreationDAte;
	string Status;
	string Email;
public:
	bookreservation();
	bookreservation(user*,string, string, string);
	void set_Values(user*,string, string, string);
	void set_creationdate(string);
	void set_status(string);
	void set_email(string);
	void set_reservedby(user*);
	string get_creationdate()const;
	string get_status()const;
	string get_email()const;
	user* get_reservrdby()const;
    virtual void display()override;
	~bookreservation();
};

