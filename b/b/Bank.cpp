#include"Bank.h"
Bank::Bank()
{
	manager.set_values("", "", 0);
	acc.set_values(0, "", 0, 0);
}
void Bank::set_manager(string a, string b, int c)
{
	manager.set_values(a, b, c);
}
void Bank::print_manager()const
{
	manager.print_Detail();
}
void Bank::Add_Customer(Customer&c)
{
	int ss = 0;
	for (unsigned i = 0; i < customer_arr.size(); i++)
	{
		if (c.get_ID() == customer_arr[i].get_ID())
		{
			cout << "The entered ID is already taken\n";
			cout << "Try with another id\n\n";
			ss = 1;
			break;
		}
		else
		{
			continue;
		}
	}
	if (ss == 0)
	{
		customer_arr.push_back(c);
	}
}
void Bank::Add_Account(int d, string e, int f, int g)
{
	int ss = 0;
	int s = 0;
	string name;
	for (unsigned i = 0; i < account_arr.size(); i++)
	{
		if (d == account_arr[i].get_AccountID())
		{
			cout << "Your account id has been taken already\n";
			cout << "Try with another\n\n";
			s = 1;
			break;
		}
		else
		{
			continue;
		}
	}
	if (s == 0)
	{
		for (unsigned i = 0; i < customer_arr.size(); i++)
		{
			if (f == customer_arr[i].get_ID())
			{
				cout << "Your ID already exists in our customer\n";
				cout << "If you are a customer of our bank then\n";
				cout << "Enter your name\n";
				cin >> name;
				if (name == customer_arr[i].get_Name())
				{
					acc.set_values(d, e, customer_arr[i].get_ID(), g);
					account_arr.push_back(acc);
					ss = 1;
					break;
				}
			}
			else
			{
				continue;
			}
		}
		if (ss == 0)
		{
			cout << "Error occured!\n";

			cout << "You should be entered as a customer first\n";
			
		}
	}
	}
	
void Bank::withdrawAmmount(int h, int id)
{
	int ss = 0;
	for (unsigned i = 0; i<account_arr.size(); i++)
	{
		if (account_arr[i].get_AccountID() == id)
		{
			account_arr[i].widhdraw(h);
			ss = 1;
			break;
		}
		else
		{
			continue;
		}
	}
	if (ss == 0)
	{
		cout << "You have entered wrong id\n\n";
	}
}
void Bank::depositAmmount(int h, int id)
{
	int ss = 0;
	for (unsigned i = 0; i<account_arr.size(); i++)
	{
		if (account_arr[i].get_AccountID() == id)
		{
			account_arr[i].deposit(h);
			ss = 1;
			break;
		}
		else
		{
			continue;
		}
	}
	if (ss == 0)
	{
		cout << "You have entered wrong id\n\n";
	}
}
void Bank::delete_Account(int id)
{
	int ss = 0;
	for (unsigned i = 0; i < account_arr.size(); i++)
	{
		if (account_arr[i].get_AccountID() == id)
		{
			account_arr.erase(account_arr.begin() + i);
			ss = 1;
			break;
		}
		else
		{
			continue;
		}
	}
	if (ss == 0)
	{
		cout << "Your entered id doesnot exist\n\n";
	}

}
void Bank::delete_Customer(int id)
{
	int ss = 0;
	for (unsigned i = 0; i < customer_arr.size(); i++)
	{
		if (customer_arr[i].get_ID() == id)
		{
			customer_arr.erase(customer_arr.begin() + i);
			ss = 1;
			break;
		}
		else
		{
			continue;
		}
	}

}
void Bank::print_customer(int id)
{
	int ss = 0;
	for (unsigned i = 0; i < customer_arr.size(); i++)
	{
		if (customer_arr[i].get_ID() == id)
		{
			customer_arr[i].print_Details();
			ss = 1;
			break;
		}
		else
		{
			continue;
		}
	}
	if (ss == 0)
	{
		cout << "Your entered id doesnot exist\n\n";
	}
}
void Bank::print_account(int id)
{
	int ss = 0;
	for (unsigned i = 0; i < account_arr.size(); i++)
	{
		if (account_arr[i].get_AccountID() == id)
		{
			account_arr[i].display_Details();
			ss = 1;
			break;
		}
		else
		{
			continue;
		}
	}
	if (ss == 0)
	{
		cout << "Your entered id doesnot exist\n\n";
	}
}
void Bank::show_NoOfAccounts()const
{
	for (unsigned i = 0; i < account_arr.size(); i++)
	{
		account_arr[i].display_Details();
	}
}
void Bank::show_NoOfCustomers()const
{
	for (unsigned i = 0; i < customer_arr.size(); i++)
	{
		customer_arr[i].print_Details();
	}
}
