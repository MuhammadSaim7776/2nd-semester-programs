//#include<iostream>
//#include<string>
//#include<conio.h>
//#include<iomanip>
//using namespace std;
//struct player
//{
//	string name;
//	int number;
//	int scoredPoint;
//	void display()
//	{
//		cout << "Name          : " << name << endl;
//		cout << "Number        : " << number << endl;
//		cout << "Scored points : " << scoredPoint << endl;
//	}
//};
//void PopulateArray(player*p)
//{
//	for (int i = 0; i < 12; i++)
//	{
//		cout << "Enter the data of " << i + 1 << " player of team\n";
//		cout << "Enter the name of player : ";
//		cin >> p[i].name;
//		cout << "Enter the number of player : ";
//		cin >> p[i].number;
//		cout << "Enter the scored point of player : ";
//		cin >> p[i].scoredPoint;	
//		
//	}
//	
//}
//void DisplayScoreBoard(player*p)
//{
//	int tpoints=0;
//	cout << "Sr No" << setw(30) << "Name" << setw(30) << "Number" << setw(30) << "Scored Points" << endl;
//	for (int i = 0; i < 12; i++)
//	{
//		tpoints += p[i].scoredPoint;
//		cout << i + 1 << ")" << setw(30) << p[i].name << setw(30) << p[i].number << setw(30) << p[i].scoredPoint << endl;
//	}
//	cout << endl << endl;
//	cout << "Total points scored by the team are : " << tpoints << endl;
//}
//player FindTopScorer(player*p)
//{
//	player top=p[0];
//	for (int i = 1; i < 12; i++)
//	{
//		if ( p[i].scoredPoint>top.scoredPoint)
//		{
//			top = p[i];
//		}
//		else
//		{
//			continue;
//		}
//	}
//	return  top;
//}
//
//void main()
//{
//	player array[12];
//	PopulateArray(&array[0]);
//	DisplayScoreBoard(&array[0]);
//	cout << "The top scorer is : " << endl;
//	FindTopScorer(&array[0]).display();
//	_getch();
//}