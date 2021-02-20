//#include<iostream>
//#include<conio.h>
//#include<string>
//using namespace std;
//class milk
//{
//	int quantity;
//public:
//	milk()
//	{
//		quantity = 0;
//	}
//	milk(int a)
//	{
//		quantity = a;
//	}
//	void show()const
//	{
//		cout << "The quantity of milk used is " << quantity <<" cup" <<endl;
//	}
//	~milk()
//	{}
//};
//                                                                //END OF DEFINITION OF CLASS MILK
//class TEA
//{
//	int quantity;
//public:
//	TEA()
//	{
//		quantity = 0;
//	}
//	TEA(int a)
//	{
//		quantity = a;
//	}
//	void show()const
//	{
//		cout << "The quantity of tea used is " << quantity << " spoons"<<endl;
//	}
//	~TEA()
//	{}
//};
//                                                                  //END OF DEFINITION OF CLASS TEA
//class sugar
//{
//	int quantity;
//public:
//	sugar()
//	{
//		quantity = 0;
//	}
//	sugar(int a)
//	{
//		quantity = a;
//	}
//	void show()const
//	{
//		cout << "The quantity of sugar used is " << quantity <<" spoons"<< endl;
//	}
//	~sugar()
//	{}
//};
//                                                                         //END OF DEFINITION OF CLASS SUGAR
//class water
//{
//	float quantity;
//public:
//	water()
//	{
//		quantity = 0;
//	}
//	water(float a)
//	{
//		quantity = a;
//	}
//	void show()const
//	{
//		cout << "The quantity of water used is " << quantity <<" cup"<< endl;
//	}
//	~water()
//	{}
//};
//                                                                 //END OF DEFINITION OF CLASS WATER
//class cupOfTea
//{
//private:
//	milk*m;
//	TEA*t;
//	sugar*s;
//	water*w;
//public:
//	cupOfTea(int a,int b,int c,float d)
//	{
//		m = new milk(a);
//		t = new TEA(b);
//		s = new sugar(c);
//		w = new water(d);
//	}
//	void show()
//	{
//		cout << "This cup of tea contain following ingredients and their quantities\n";
//		m->show();
//		t->show();
//		s->show();
//		w->show();
//
//	}
//};
//void main()
//{
//	cupOfTea c(1, 1, 1,0.5);
//	c.show();
//	_getch();
//}