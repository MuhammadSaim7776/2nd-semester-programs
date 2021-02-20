#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Card
{
private:
	double cardNumber;    /*card number will not be inhereted because it is private member*/
protected:
	string ownerName;      /*owner name will be inheretd but cant be accessed outside derived or base class*/
public:
	string expiryDate;    /*expiry date will be inhereted and can be assecced outside the class*/
	Card()
	{
		cardNumber = 00;
		ownerName = "";
		expiryDate = "";
	}
	void setValues(double c, string o, string e)
	{
		set_cardnumber(c);
		set_expiryDate(o);
		set_ownerName(e);
	}
	void set_cardnumber(double ca)
	{
		cardNumber = ca;
	}
	void set_ownerName(string ow)
	{
		ownerName = ow;
	}
	void set_expiryDate(string ex)
	{
		expiryDate = ex;
	}
	double get_cardNumber()const
	{
		return cardNumber;
	}
	string get_ownerName()const
	{
		return ownerName;
	}
	string get_expiryDate()const
	{
		return expiryDate;
	}
	void display()const
	{
		cout << "The Card number is : " << cardNumber << endl;
		cout << "The Owner's name is : " << ownerName << endl;
		cout << "The Expiry date is : " << expiryDate << endl;
	}
};
class CallingCard :public Card
{
private:
	int amount;                
	int pin;                   /*These 3 members will not be inhereted in derived class*/
	string companyName;
public:
	CallingCard()
	{
		amount = 0;
		pin = 0;
		companyName = "";
	}
	void set_values(int am, int pi, string cna)
	{
		set_Amount(am);
		set_Pin(pi);
		set_companyName(cna);
	}
	void set_Amount(int a)
	{
		amount = a;
	}
	void set_Pin(int p)
	{
		pin = p;
	}
	void set_companyName(string c)
	{
		companyName = c;
	}
	int get_Amount()const
	{
		return amount;
	}
	int get_Pin()const
	{
		return pin;
	}
	string get_companyName()const
	{
		return companyName;
	}
	void displayDetails()const
	{
		cout << "The amount present in this card is : " << amount << endl;
		cout << "The pin of this card is : " << pin << endl;
		cout << "The Company name of this card is : " << companyName << endl;
	}
};
class IDcard :public Card
{
private:
	double CNIC;
	int age;
public:
	IDcard()
	{
		CNIC = 0;
		age = 0;
	}
	void set_values(int c, int a)
	{
		set_CNIC(c);
		set_age(a);
	}
	void set_CNIC(int cn)
	{
		CNIC = cn;
	}
	void set_age(int ag)
	{
		age = ag;
	}
	double get_CNIC()const
	{
		return CNIC;
	}
	int gt_age()const
	{
		return age;
	}
	void displayDetails()const
	{
		cout << "The CNIC is : " << CNIC << endl;
		cout << "The age is : " << age << endl;
	}
};
class DrivingLiscenceCard :public Card
{
private:
	string type;               /*these 2 members cant be inhereted and cant be accessed outside this class*/
	string city;
public:
	DrivingLiscenceCard()
	{
		type = "";
		city = "";
	}
	void set_values(string t, string c)
	{
		set_type(t);
		set_city(c);
	}
	void set_type(string ty)
	{
		type = ty;
	}
	void set_city(string ci)
	{
		city = ci;
	}
	string get_type()const
	{
		return type;
	}
	string get_city()const
	{
		return city;
	}
	void displayDetails()const
	{
		cout << "The Type of this liscense card is : " << type << endl;
		cout << "The city of issuence is : " << city << endl;
	}
};
void main()
{
	CallingCard c1;
	c1.setValues(1234, "1 jan 2022", "Ali Ahmad");
	c1.set_values(5000, 4567, "ABC");
	IDcard c2;
	c2.setValues(5678, "2 march 2023", "Burhan");
	c2.set_values(35201, 28);
	DrivingLiscenceCard c3;
	c3.setValues(9102, "3 april 2025", "Ashir");
	c3.set_values("heavy", "Lahore");
	cout << "For Calling Card" << endl;
	c1.display();
	c1.displayDetails();
	cout << endl;
	cout << endl;
	cout << "For ID Card" << endl;
	c2.display();
	c2.displayDetails();
	cout << endl;
	cout << endl;
	cout << "For Driving liscense Card" << endl;
	c3.display();
	c3.displayDetails();
	_getch();

}