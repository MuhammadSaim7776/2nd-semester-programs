//#include<iostream>
//#include<conio.h>
//#include<string>
//using namespace std;
//class books
//{
//private:
//	string name[2][2];
//public:
//	books()
//	{
//		name[0][0] = "Math";
//		name[0][1] = "ABC";
//		name[1][0] = "ENG";
//		name[1][1] = "DEF";
//
//	}
//	void set_name(string n, int i, int j)
//	{
//		name[i][j] = n;
//	}
//	void displayNames()const
//	{
//		cout << "Books\tAutor\n";
//		for (int a = 0; a < 2; a++)
//		{
//			for (int b = 0; b < 2; b++)
//			{
//				cout << name[a][b] << "\t";
//			}
//			cout << endl;
//		}
//	}
//	
//};
//
//class liberary
//{
//private:
//	string name;
//	books *book;
//public:
//	
//	liberary()
//	{
//		name = "";
//		book = new books;	
//	}
//	void set_name(string n)
//	{
//		name = n;
//	}
//	string get_name()const
//	{
//		return name;
//	}
//	void showbooks()const
//	{
//		book->displayNames();
//	}
//	~liberary()
//	{
//		delete book;
//	}
//};
//void main()
//{
//	liberary liberary;
//	liberary.set_name("Quaid e Azam Liberary");
//	cout << "Welcome to " << liberary.get_name()<<endl;
//	cout << "The available books in this liberary are\n";
//	liberary.showbooks();
//	_getch();
//}
//
