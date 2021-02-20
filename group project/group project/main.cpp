#include"PatientAccount.h"
using namespace std;
void main()
{
	cout << "\t\t\''Welcome to patient charges calculator\''\n";
		string Name;
		int choice1, choice2, day, month, year;
		cout << "Enter the name of patient\n";
		cin >> Name;
		cout << "Enter the admitting date of patient in given format 2 3 1999\n";
		cin >> day >> month >> year;

		PatientAccount p1(Name);
		p1.set_AdmittingDate(day, month, year);
		patient_surgery p2;
		patient_medication p3;
		p2.display();
		cout << endl;
		cin >> choice1;
		p2.set_Charge(p1, choice1);
		cout << endl;
		p3.display();
		cin >> choice2;
		p3.set_charges(p1, choice2);
		cout << "Enter the discharging date of patient\n";
		cin >> day >> month >> year;
		p1.set_DischargeDate(day, month, year);
		p1.set_NoOfDays();
		p1.set_Charges();
		cout << "Your total bill is\t" << p1.get_Charges();
		cout << "\n\t\t\'Stay Home Stay Safe\'";
		_getch();
	}
	

	