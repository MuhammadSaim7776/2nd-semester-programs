#include "user.h"

user::user()
{
	name = "";
	ID = 0;
	dateOfMembership = "";
}
user::user(string Name = "", double ID = 0, string date = "", string cno = "", string dte = "", string stAtus = "") :card(cno, dte, stAtus)
{
	set_Values(Name, ID, date, cno, dte, stAtus);
}
void user::set_Values(string nAme, double Id, string dAte, string cNo, string dTe, string sTAtus)
{
	card.set_values(cNo, dTe, sTAtus);
	set_name(nAme);
	set_ID(Id);
	set_dateofmembership(dAte);
}
void user::set_libraycarddetails(string cdno, string Dte, string statuS)
{
	card.set_values(cdno, Dte, statuS);
}
void user::set_name(string naMe)
{
	name = naMe;
}
void user::set_ID(double id)
{
	ID = id;
}
void user::set_dateofmembership(string datE)
{
	dateOfMembership = datE;
}
void user::set_fine(double f)
{
	Account.set_fineammount(f);
}
void user::increment_accoutdetails(int choice)
{
	switch (choice)
	{
	case 1:
	{
			  Account.increment_borrowedbooks();
	}
	case 2:
	{
			  Account.increment_returnedbooks();
	}
	case 3:
	{
			  Account.increment_noofreservrdbooks();
	}
	}
}
string user::get_name()const
{
	return name;
}
double user::get_ID()const
{
	return ID;
}
void user::decrement_accoutdetails(int choice)
{
	switch (choice)
	{
	case 1:
	{
			  Account.decrement_borrowedbooks();
	}
	case 2:
	{
			  Account.decrement_returnedbooks();
	}
	case 3:
	{
			  Account.decrement_noofreservrdbooks();
	}
	}

}




string user::get_dateofmembership()const
{
	return dateOfMembership;
}
void user::setfinedate(int d1, int m1, int y1, int d2, int m2, int y2)
{
	Account.setfinedate(d1, m1, y1, d2, m2, y2);
}
void user::display()
{
	
	cout << "**********USER DETAIL**********\n";
	cout << "Name" <<setw(20)<< name << endl;
	cout << "*************************************************************\n";
	cout << "ID"<<setw(20) << ID << endl;
	cout << "*************************************************************\n";
	cout << "Date of membership"<<setw(20) << dateOfMembership << endl;
	cout << "*************************************************************\n";
	card.display();
	Account.display();
}
int user::LeapOrNot(int y)
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
void user::set_NoOfDays(int d1, int m1, int y1, int d2, int m2, int y2)
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
				cout << "The return Day doesnot exists " << endl;
			}
		}
		else
		{
			cout << "The Return Month doesnot exists" << endl;
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
int user::get_noofdays()
{
	return NoOfDays;
}
string user::get_CardNo()const
{
	return card.get_cardnumber();
}
user::~user()
{
}
