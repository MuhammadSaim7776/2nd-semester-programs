#include<iostream>
#include<conio.h>
#include<string>
using namespace std;


class PatientAccount;
class patient_medication;
class patient_surgery
{
	int priceOfSurgery[5];
	string nameOfSurgery[5];//name of surgeries

public:
	patient_surgery();
	~patient_surgery();
	void getsurgeryprice(int);
	void display();
	void set_Charge(PatientAccount &,int );
};



class patient_medication
{
private:
	int priceOfMedicine[5];
	string nameOfMedicine[5];//name of medicines
public:
	patient_medication();
	~patient_medication();
	void getsurgeryprice(int);
	void display();
	void set_charges(PatientAccount &,int);
};
class PatientAccount{
private:
	string Name;
	double charges;
	float DailyRate;
	int NoOfDays;
	int d1, m1, y1, d2, m2, y2;
public:
	PatientAccount(string);
	void set_Name(string);
	string get_Name()const;
	void set_DailyRate(float);
	float get_DailyRate()const;
	void set_AdmittingDate(int, int, int);
	void print_AdmittingDate()const;
	void set_DischargeDate(int, int, int);
	void print_DischargeDate()const;
	void set_NoOfDays();
	int get_NoOfDays()const;
	void set_Charges();
	double get_Charges()const;
	int LeapOrNot(int);
	friend class patient_surgery;
	friend class patient_medication;
};
