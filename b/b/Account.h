#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Account
{
private:
	int Acc_ID;
	string Acc_type;
	int cstmr_ID;
	int Acc_Balance;
public:
	Account();
	Account(int, string, int, int);
	void set_values(int, string, int, int);
	void set_AccountID(int);
	void set_AccounType(string);
	void set_CustomerID(int);
	void set_AccountBalance(int);
	int get_AccountID()const;
	string get_AccounType()const;
	int get_CustomerID()const;
	int get_AccountBalance()const;
	void display_Details()const;
	void deposit(int);
	void widhdraw(int);
};