//#include<iostream>
//#include<conio.h>
//#include<string>
//using namespace std;
//class employee
//{
//protected:
//	string name;
//	double taxrate;
//public:
//	employee(string& n, double tr)
//	{
//		name = n;
//		taxrate = tr;
//	}
//	virtual void getName()const
//	{
//		cout << "The of employee is : " << name << endl;
//	}
//	virtual void calculateSalary()const
//	{
//		cout << "This is the salary of employee\n";
//	}
//};
//class manager :public employee
//{
//public:
//	manager(string n, double t) :employee(n, t)
//	{
//
//	}
//	virtual void calculateSalary()const
//	{
//		cout << "The salary of manager is : 1.5lac\n";
//	}
//};
//class HR :public employee
//{
//protected:
//	int OT;
//public:
//	HR(string n, double t, int o) :employee(n, t)
//	{
//		OT = o;
//	}
//	virtual double calculateSalary()
//	{
//		return 100000 + (OT * 1500);
//	}
//};
//class engineer :public employee
//{
//protected:
//	int OT;
//public:
//	engineer(string n, double t, int o) :employee(n, t)
//	{
//		OT = o;
//	}
//	virtual double calculateSalary()
//	{
//		return 75000 + (OT * 1500);
//	}
//};
//class frontdeveloper :public employee
//{
//protected:
//	int OT;
//public:
//	frontdeveloper(string n, double t, int o) :employee(n, t)
//	{
//		OT = o;
//	}
//	virtual double calculateSalary()
//	{
//		return 60000 + (OT * 1500);
//	}
//};
//class programmer :public employee
//{
//protected:
//	int OT;
//public:
//	programmer(string n, double t, int o) :employee(n, t)
//	{
//		OT = o;
//	}
//	virtual double calculateSalary()
//	{
//		return 60000 + (OT * 1500);
//	}
//};
//void main()
//{
//	manager m("Ali", 2.5);
//	m.calculateSalary();
//	HR h("Hamza", 2.0, 5);
//	cout << "The salary of HR is : " << h.calculateSalary() << endl;
//	engineer e("Muzammil", 2.0, 10);
//	cout << "The salary of engineer is : " << e.calculateSalary() << endl;
//	frontdeveloper f("Adil", 2.0, 12);
//	cout << "The salary of engineer is : " << f.calculateSalary() << endl;
//	programmer p("Azeem", 2.0, 8);
//	cout << "The salary of programmer is : " << p.calculateSalary() << endl;
//	_getch();
//}
