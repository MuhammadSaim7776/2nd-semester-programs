//#include<iostream>
//#include<conio.h>
//#include<string>
//using namespace std;
//class Engine
//{
//private:
//	double power;
//	double efficiency;
//public:
//	Engine()
//	{
//		power = 0;
//		efficiency = 0;
//	}
//	Engine(double p)
//	{
//		power = p;
//		efficiency = 0;
//	}
//	Engine(double p, double e)
//	{
//		set_values(p, e);
//	}
//	void set_values(double p, double e)
//	{
//		power = p;
//		efficiency = e;
//	}
//	void showVallues()const
//	{
//		cout << "Power of Engine is " << power << endl;
//		cout << "Efficiency of Engine is " << efficiency << endl;
//	}
//	~Engine()
//	{}
//};
//                           //END OF DEFINITION OF ENGINE CLASS
//class Handle
//{
//private:
//	int diameter;
//	string shape;
//public:
//	Handle()
//	{
//		diameter = 0;
//		shape = "";
//	}
//	Handle(int d)
//	{
//		diameter = d;
//		shape = "";
//	}
//	Handle(int d, string s)
//	{
//		set_Values(d, s);
//	}
//	void set_Values(int d, string s)
//	{
//		diameter = d;
//		shape = s;
//	}
//	void showValues()const
//	{
//		cout << "The diameter of Handle is " << diameter << endl;
//		cout << "The shape of Handle is " << shape << endl;
//	}
//	~Handle()
//	{}
//};
//                                //END OF DEFINITION OF HANDLE CLASS
//class GearBox
//{
//private:
//	int noOfGears;
//	string transmittionType;
//public:
//	GearBox()
//	{
//		noOfGears = 0;
//		transmittionType = "";
//	}
//	GearBox(int n)
//	{
//		noOfGears = n;
//		transmittionType = "";
//	}
//	GearBox(int n, string t)
//	{
//		set_Values(n, t);
//	}
//	void set_Values(int n, string t)
//	{
//		noOfGears = n;
//		transmittionType = t;
//	}
//	void shoewvalues()const
//	{
//		cout << "The no of gears in current GearBox are " << noOfGears << endl;
//		cout << "The Transmittion Type of current GearBox is " << transmittionType << endl;
//	}
//	~GearBox()
//	{}
//};
//                         //END OF DEFINITION OF GEARBOX CLASS
//class AC
//{
//private:
//	int power;
//public:
//	AC()
//	{
//		power = 0;
//	}
//	AC(int p)
//	{
//		power = p;
//	}
//	void showValue()const
//	{
//		cout << "The power of AC is " << power<<endl;
//	}
//	~AC()
//	{
//
//	}
//};
//                                //END OF DEFINITION OF AC CLASS
//class breaks
//{
//private:
//	string typeOfBreaks;
//	int noOfWheels;
//public:
//	breaks()
//	{
//		typeOfBreaks = "";
//		noOfWheels = 0;
//	}
//	breaks(string t)
//	{
//		typeOfBreaks = t;
//		noOfWheels = 0;
//	}
//	breaks(string t,int n)
//	{
//		set_values(t, n);
//	}
//	void set_values(string t, int n)
//	{
//		typeOfBreaks = t;
//		noOfWheels = n;
//	}
//	void showValue()const
//	{
//		cout << "The type of Breaks is" << typeOfBreaks << endl;
//		cout << "The no of wheels having breaks are " << noOfWheels << endl;
//	}
//	~breaks()
//	{}
//};
//                                   //END OF DEFINITION OF BRAKES CLASS
//class Clutch
//{
//
//public:
//	void show()const
//	{
//		cout << "The current car has clutch" << endl;
//	}
//
//};
//                                   //END OF DEFINITION OF CLUTCH CLASS
//class car
//{
//private:
//	string company;
//	string model;
//	Engine*engine;
//	Handle*handle;
//	GearBox*gearbox;
//	breaks*brakes;
//	Clutch*clutch;
//	AC*ac;
//public:
//	car()
//	{
//		company = "";
//		model = "";
//		engine = nullptr;
//		handle = nullptr;
//		gearbox = nullptr;
//		brakes = nullptr;
//		ac = nullptr;
//	}
//	car(string c,string m)
//	{
//		company = c;
//		model = m;
//		engine = nullptr;
//		handle = nullptr;
//		gearbox = nullptr;
//		brakes = nullptr;
//		ac = nullptr;
//	}
//	car(string c, string m,Engine*e,Handle*h,GearBox*g,breaks*b,AC*a,Clutch*d)
//	{
//		set_names(c, m);
//		set_pointers(e, h, g, b, a,d);	
//	}
//	void set_pointers(Engine*e, Handle*h, GearBox*g, breaks*b, AC*a,Clutch*c)
//	{
//		engine = e;
//		handle = h;
//		gearbox = g;
//		brakes = b;
//		ac = a;
//		clutch = c;	
//	}
//	void set_names(string c, string m)
//	{
//		company = c;
//		model = m;
//	}
//	void show()const
//	{
//		cout << "Car Manufecturer\t" << company << endl;
//		cout << "Model of car\t"<<model << endl;
//		cout << "The car has following properties" << endl;
//		engine->showVallues();
//		handle->showValues();
//		gearbox->shoewvalues();
//		brakes->showValue();
//		ac->showValue();
//		clutch->show();	
//	}
//};
//void main()
//{
//	Engine eng(1000, 18);
//	Handle han(100, "round");
//	GearBox gea(5, "manual");
//	AC A(120);
//	breaks b("pressure", 2);
//	Clutch Cl;
//	car Car("HONDA","XLI");
//	Car.set_pointers(&eng, &han, &gea, &b, &A, &Cl);
//	Car.show();
//	_getch();
//}