#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class BankAccount
{
protected:
	string title;
	int accountNumber;
	int balance;
public:
	void setValues(string t, int an, int bal)
	{
		title = t;
		accountNumber = an;
		balance = bal;
	}
	void deposit(int amount)
	{
		balance += amount;
		cout << "Your ammount has been deposited. Your new balance is : " << balance<<endl;
	}
	void withDraw(int amount)
	{
		if (amount <= balance)
		{
			balance -= amount;
			cout << "Your ammount has been withdrawn. Your new balance is : " << balance << endl;
		}
		else
		{
			cout << "You donot have sufficient balance" << endl;
		}
	}
	void getInfo()const
	{
		cout << "Your account tittle is : " << title << "\nYour account number is : " << accountNumber << "\nYour current balance is : " << balance << endl;
	}
};
class SavingAccount :public BankAccount
{
protected:
	float interestRate;
	float totalInterest;
public:
	SavingAccount(float i = 50, float j=0)
	{
		interestRate = i;
		totalInterest = j;
	}
	void  setInterest(float i)
	{
		interestRate = i;
	}
	float get_IntersRate()const
	{
		return interestRate;
	}
	void calculateInterest()
	{
		totalInterest = balance*interestRate / 100;
	}
	float getInterest()const
	{
		return totalInterest;
	}
	void display()const
	{
		cout << "Our interest rate is : " << interestRate << "\nYour total interest amount is : " << totalInterest << "\nAnd your balance with interest amount is : " << balance + totalInterest << endl;
	}
};
class CheckingAccount:public BankAccount
{
protected:
	int fee;
public:
	CheckingAccount(int f = 300)
	{
		setFee(f);
	}
	void setFee(int g)
	{
		fee = g;
	}
	int getFee()const
	{
		return fee;
	}
	void withDraw(int amount)
	{
		if (amount <= balance)
		{
			balance -= amount+fee;
			cout << "Your ammount : "<<amount<<" has been withdrawn. Our fee per transaction is : "<<fee <<" Your new balance is : " << balance << endl;
		}
		else
		{
			cout << "You donot have sufficient balance" << endl;
		}

	}
	void deposit(int amount)
	{
		balance += amount;
		balance -= fee;
		cout << "Your ammount : "<<amount<<" has been deposited.Our fee per transaction is : "<<fee<<"  Your new balance is : " << balance<<endl;
	}
};
void main()
{
	SavingAccount s;
	s.setValues("abc", 1234, 5000);
	s.getInfo();
	s.calculateInterest();
	s.deposit(2000);
	s.display();
	
	cout << "\n\nFor Checking account\n";
	CheckingAccount c;
	c.setValues("def", 654, 8000);
	c.getInfo();
	c.deposit(2000);
	c.withDraw(5000);
	_getch();

}