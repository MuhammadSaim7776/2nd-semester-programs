#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Manager
{
private:
	string Name;
	string Branch;
	int ID;
public:
	Manager();
	Manager(string, string, int);
	void set_values(string, string, int);
	void set_Name(string);
	void set_Branch(string);
	void set_ID(int);
	string get_Name()const;
	string get_Branch()const;
	int get_ID()const;
	void print_Detail()const;
	

};