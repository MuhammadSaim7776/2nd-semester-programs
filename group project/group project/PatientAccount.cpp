#include "PatientAccount.h"



PatientAccount::PatientAccount(string n)
{
	Name = n;
	DailyRate = 1500;
	charges = 0;
	NoOfDays = 0;
	d1, m1, y1, d2, m2, y2 = 0;
}
void PatientAccount::set_Name(string n)
{
	Name = n;
}
string PatientAccount::get_Name()const
{
	return Name;
}
void PatientAccount::set_DailyRate(float r)
{
	DailyRate = r;
}
float PatientAccount::get_DailyRate()const
{
	return DailyRate;
}
void PatientAccount::set_AdmittingDate(int d, int m, int y)
{
	d1 = d;
	m1 = m;
	y1 = y;
}
void PatientAccount::print_AdmittingDate()const
{
	cout << "The Patient was admitted on" << d1 << "-" << m1 << "-" << y1 << endl;
}
void PatientAccount::set_DischargeDate(int d, int m, int y)
{
	d2 = d;
	m2 = m;
	y2 = y;
}
void PatientAccount::print_DischargeDate()const
{
	cout << "The Patient was discharged on" << d2 << "-" << m2 << "-" << y2 << endl;
}
int PatientAccount::LeapOrNot(int y)
{
	if (y % 400 == 0 || y % 4 == 0)
	{
		return 1;
	}
	else if (y % 100 == 0)
	{
		return 0;
	}
	else
	{
		return 0;
	}
}
void PatientAccount::set_NoOfDays()
{
	int arr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (y2 == y1)
	{
		if (m2 > m1)
		{
			if (m1 == 2)
			{
				if (LeapOrNot(y1) == 1)
				{
					NoOfDays += 29 - d1;      
				}
				else
				{
					NoOfDays += 28 - d1;
				}
			}
			else
			{
				NoOfDays += arr[m1 - 1] - d1;                     
			}
		
		    m1++;
		    for (int i = m1; i < m2; i++)
		    {
			    if (i == 2)
			    {
				    if (LeapOrNot(i) == 1)
				    {
					    NoOfDays +=29;
				    }
				    else
				    {
					    NoOfDays += 28;
				    }
			    }
			    else
			    {
				      NoOfDays += arr[i - 1];
			    }
		   }
		   NoOfDays += d2;
		}
		else if (m1 == m2)
		{
			if (d2 > d1)
			{
				NoOfDays = d2 - d1;
			}
			else if (d2 == d1)
			{
				NoOfDays = 0;
			}
			else
			{
				cout << "The Day of Discharge doesnot exists " << endl;
			}
		}
		else
		{
			cout << "The month of discharge doesnot exists" << endl;
		}
	}
	else if (y2 > y1)
	{
		if (m1 == 2)
		{
			if (LeapOrNot(y1) == 1)
			{
				NoOfDays += 29 - d1;
			}
			else
			{
				NoOfDays += 28 - d1;
			}
		}
		else
		{
			NoOfDays += arr[m1 - 1] - d1;
		}

		m1++;
		for (int i = m1; i < 12; i++)
		{
			if (i == 2)
			{
				if (LeapOrNot(i) == 1)
				{
					NoOfDays += 29;
				}
				else
				{
					NoOfDays += 28;
				}
			}
			else
			{
				NoOfDays += arr[i - 1];
			}	
		}
		y1++;
		for (int i = y1; i < y2; i++)
		{
			if (LeapOrNot(y1) == 1)
			{
				NoOfDays += 366;
			}
			else
			{
				NoOfDays += 365;
			}
		}
		y1++;
		for (int i = 1; i < m2; i++)
		{
			if (i == 2)
			{
				if (LeapOrNot(i) == 1)
				{
					NoOfDays += 29;
				}
				else
				{
					NoOfDays += 28;
				}
			}
			else
			{
				NoOfDays += arr[i - 1];
			}
			
		}
		NoOfDays += d2;
	}
	else
	{
		cout << "The date of discharge is invalid" << endl;
	}


}
int PatientAccount::get_NoOfDays()const
{
	return NoOfDays;
}
void PatientAccount::set_Charges()
{
	charges += NoOfDays*DailyRate;
}
double PatientAccount::get_Charges()const
{
	return charges;
}
                                                            //end of class patient account

patient_surgery::patient_surgery()
{
	priceOfSurgery[0] = 3000;
	priceOfSurgery[1] = 4000;
	priceOfSurgery[2] = 5000;
	priceOfSurgery[3] = 6000;
	priceOfSurgery[4] = 7000;
	nameOfSurgery[0] = "liver_transplant";
	nameOfSurgery[1] = "   heart_surgery";
	nameOfSurgery[2] = "     leg_surgery";
	nameOfSurgery[3] = "    Appendectomy";
	nameOfSurgery[4] = "   breast biospy";
}


patient_surgery::~patient_surgery()
{
}




void patient_surgery::getsurgeryprice(int s)
{
	cout << "surger name=" << nameOfSurgery[s - 1] << "and price" << priceOfSurgery[s - 1];
}
void patient_surgery::display()
{
	
	cout << "\t   Surgery Name\t\t\tprice\n";
	for (int x = 0; x < 5; x++)
	{
		cout << "\t"<<x+1<<") " << nameOfSurgery[x] << "\t\t" << priceOfSurgery[x] << endl;
		
	}
	cout << "Enter the serial no of given surgery you want\n";
}
void patient_surgery::set_Charge(PatientAccount &p,int i)
{
	p.charges += priceOfSurgery[i - 1];
}
                                                               //end of class patient surgery

patient_medication::patient_medication()
{
	priceOfMedicine[0] = 300;
	priceOfMedicine[1] = 400;
	priceOfMedicine[2] = 500;
	priceOfMedicine[3] = 600;
	priceOfMedicine[4] = 700;
	nameOfMedicine[0] = "Cyclosporine";
	nameOfMedicine[1] = "   Prasugrel";
	nameOfMedicine[2] = " Paracetamol";
	nameOfMedicine[3] = "       Zosyn";
	nameOfMedicine[4] = "      Flagyl";
}


patient_medication::~patient_medication()
{
}
void patient_medication::getsurgeryprice(int s)
{
	cout << "medicine name=" << nameOfMedicine[s-1] << "and price" << priceOfMedicine[s-1];
}
void patient_medication::display()
{
	
	cout << "\tMedicine Name\t\tprice\n";
	for (int x = 0; x < 5; x++)
	{
		cout << "\t"<<x+1<<") " << nameOfMedicine[x] << "\t\t" << priceOfMedicine[x] << endl;
	}
	cout << "Enter the serial no of given medicine you want\n";
}
void patient_medication::set_charges(PatientAccount &p, int i)
{
	p.charges += priceOfMedicine[i - 1];
}
                                                             

