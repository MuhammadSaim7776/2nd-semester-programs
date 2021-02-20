//#include<iostream>
//#include<conio.h>
//#include<string>
//using namespace std;
//class Book
//{
//protected:
//	int id;
//	string name;
//	string author;
//public:
//	Book()
//	{
//		id = 0;
//		name = "";
//		author = "";
//	}
//	void set_value(int i, string n, string a)
//	{
//		set_id(i);
//		set_name(n);
//		set_author(a);
//	}
//	void set_id(int I)
//	{
//		id = I;
//	}
//	void set_name(string na)
//	{
//		name = na;
//	}
//	void set_author(string au)
//	{
//		author = au;
//	}
//	int get_id()const
//	{
//		return id;
//	}
//	string get_name()const
//	{
//		return name;
//	}
//	string get_author()const
//	{
//		return author;
//	}
//	void displayDetails()const
//	{
//		cout << "The name of book is : " << name << "\nThe id of book is : " << id << "\nThe author of book is : " << author << endl;
//	}
//	~Book()
//	{
//
//	}
//};
//class Novel:public Book
//{
//protected:
//	string publisher;
//	int price;
//	string publishedDate;
//	int totalCopies;
//public:
//	Novel()
//	{
//		publisher = "";
//		price = 0;
//		publishedDate = "";
//		totalCopies = 0;
//	}
//	void set_values(string pub, int pr, string pd , int tc , int id , string nam , string aut)
//	{
//		set_publisher(pub);
//		set_price(pr);
//		set_publishedDate(pd);
//		set_totalCopies(tc);
//		set_value(id, nam, aut);
//	}
//	void set_publisher(string p)
//	{
//		publisher = p;
//	}
//	void set_price(int p)
//	{
//		price = p;
//	}
//	void set_publishedDate(string pb)
//	{
//		publishedDate = pb;
//	}
//	void set_totalCopies(int t)
//	{
//		totalCopies = t;
//	}
//	string get_publisher()const
//	{
//		return publisher;
//	}
//	string get_publishedDate()const
//	{
//		return publishedDate;
//	}
//	int get_price()const
//	{
//		return price;
//	}
//	int get_toatlCopies()const
//	{
//		return totalCopies;
//	}
//	void showdetails()const
//	{
//		displayDetails();
//		cout << "The publisher of book is : " << publisher << "\nThe date of publishing is : " << publishedDate << "\nThe price of novel is : " << price << "\nThe total copies of this book is : " << totalCopies << endl;
//	}
//	~Novel()
//	{
//
//	}
//};
//void main()
//{
//	int t1, t2, t3;
//	Novel N1;
//	N1.set_values("Ali", 250, "18 March 2019", 100, 1234, "XYZ", "ABC");
//	
//	Novel N2;
//	N2.set_values("Danish", 300, "12 Jan 2015", 150, 5678, "DEF", "HIJ");
//
//	Novel N3;
//	N3.set_values("Muzammil", 200, "11 April 2018", 120, 9123, "KLM", "NOP");
//	cout << "For N1\n";
//	N1.showdetails();
//	cout << "For N2\n";
//	N2.showdetails();
//	cout << "For N3\n";
//	N3.showdetails();
//	t1 = N1.get_price()*N1.get_toatlCopies();
//	t2 = N2.get_price()*N2.get_toatlCopies();
//	t3 = N3.get_price()*N3.get_toatlCopies();
//	cout << endl;
//	cout << "The total cost for N1 is : " << t1 << endl;
//	cout << "The total cost for N2 is : " << t2 << endl;
//	cout << "The total cost for N3 is : " << t3<< endl;
//	cout << endl;
//	
//	if (N1.get_price() > N2.get_price() && N1.get_price() > N3.get_price())
//	{
//		cout << "The detail of book with highest individual price is : \n\n";
//		N1.showdetails();
//	}
//	else if (N2.get_price() > N1.get_price() && N2.get_price() > N3.get_price())
//	{
//		cout << "The detail of book with highest individual price is : \n\n";
//		N2.showdetails();
//	}
//	else
//	{
//		cout << "The detail of book with highest individual price is : \n\n";
//		N3.showdetails();
//	}
//
//	if (t1 > t2 && t1 > t3)
//	{
//		cout << "The detail of book with highest total cost is : \n\n";
//		N1.showdetails();
//	}
//	else if (t2 > t1 && t2 > t3)
//	{
//		cout << "The detail of book with highest total cost is : \n\n";
//		N2.showdetails();
//	}
//	else
//	{
//		cout << "The detail of book with highest total cost is : \n\n";
//		N3.showdetails();
//	}
//
//
//
//
//
//	if (N1.get_price() < N2.get_price() && N1.get_price() < N3.get_price())
//	{
//		cout << "The detail of book with lowest individual cost is : \n\n";
//		N1.showdetails();
//	}
//	else if (N2.get_price() < N1.get_price() && N2.get_price() < N3.get_price())
//	{
//		cout << "The detail of book with lowest individual cost is : \n\n";
//		N2.showdetails();
//	}
//	else
//	{
//		cout << "The detail of book with lowest individual cost is : \n\n";
//		N3.showdetails();
//	}
//
//	_getch();
//	
//}