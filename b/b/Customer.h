#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Customer
{
private:
	string Name;
	int ID;
public:
	Customer();
	Customer(string, int);
	void set_values(string, int);
	void set_Name(string);
	void set_ID(int);
	string get_Name()const;
	int get_ID()const;
	void print_Details()const;
};