#include "fine.h"


fine::fine()
{
	set_values(0,0,0,0,0,0);
	ammount = 0;
	NoOfDays = 0;
}
void fine::set_fine(double a)
{
	ammount+= a;
}
void fine::set_values(int CDay, int CMonth, int CYear, int DDay, int DMonth, int DYear)
{
	set_creationdate(CDay, CMonth, CYear);
	set_duedate(DDay, DMonth, DYear);
}
void fine::set_creationdate(int cDay, int cMonth, int cYear)
{
	creationday = cDay;
	creationmonth = cMonth;
	creationyear = cYear;
}
void fine::set_duedate(int dDay, int dMonth, int dYear)
{
	dueday = dDay;
	duemonth = dMonth;
	dueyear = dYear;
}
int fine::get_dueday()const
{
	return dueday;
}
int fine::get_duemonth()const
{
	return duemonth;
}
int fine::get_dueyear()const
{
	return dueyear;
}
int fine::LeapOrNot(int y)
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
void fine::set_NoOfDays(int d1, int m1, int y1, int d2, int m2, int y2)
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
		cout << "The date of return is invalid" << endl;
	}


}
void fine::calculatefine(int rDay , int rMonth ,int rYear)
{
	set_NoOfDays(dueday, duemonth, dueyear, rDay, rMonth, rYear);
	if (NoOfDays > 0)
	{
		ammount += 200;
	}
}
void fine::display()const
{

	cout << "Fine Ammount" << setw(20) << ammount << endl;
	cout << "*************************************************************\n";
	cout << "Fine created on" << setw(20) << creationday << "-" << creationmonth << "-"<<creationyear << endl;
	cout << "*************************************************************\n";
	cout << "Fine payable within" << setw(20) << dueday << "-" << duemonth << "-"<<dueyear << endl;
	cout << "*************************************************************\n";

}


fine::~fine()
{
}
