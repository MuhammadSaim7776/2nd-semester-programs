#include "Account.h"
Account::Account()
{
	Acc_ID = 0;
	Acc_type = "";
	cstmr_ID = 0;
	Acc_Balance = 0;
}
Account::Account(int id, string ty, int Id, int bal)
{
	set_values(id, ty, Id, bal);
}
void Account::set_values(int iD, string tY, int ID, int ball)
{
	set_AccountID(iD);
	set_AccounType(tY);
	set_CustomerID(ID);
	set_AccountBalance(ball);
}
void Account::set_AccountID(int Id)
{
	Acc_ID = Id;
}
void Account::set_AccounType(string Ty)
{
	Acc_type = Ty;
}
void Account::set_CustomerID(int I_D)
{
	cstmr_ID = I_D;
}
void Account::set_AccountBalance(int Bal)
{
	Acc_Balance = Bal;
}
int Account::get_AccountID()const
{
	return Acc_ID;
}
string Account::get_AccounType()const
{
	return Acc_type;
}
int Account::get_CustomerID()const
{
	return cstmr_ID;
}
int Account::get_AccountBalance()const
{
	return Acc_Balance;
}
void Account::display_Details()const
{
	cout << "Account ID : " << Acc_ID << endl;
	cout << "Account Type : " << Acc_type << endl;
	cout << "Customer's ID : " << cstmr_ID << endl;
	cout << "Account Balance : " << Acc_Balance << endl;
}
void Account::deposit(int ammount)
{
	Acc_Balance += ammount;
	cout << "Your amount has been deposited\n";
	cout << "Your updated balance is : " << Acc_Balance << endl;
}
void Account::widhdraw(int ammount)
{
	if (ammount <= Acc_Balance)
	{
		Acc_Balance -= ammount;
		cout << "You have withdrawn ammount in rupees : " << ammount << endl;
		cout << "Your updated balance is : " << Acc_Balance<<endl;
	}
}