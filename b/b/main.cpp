#include"Bank.h"
void main()
{
	Bank b1;
	Customer c1;
	int ch = 0;
	string m_name, branch, t;
	int id, accid, cid, ball, amm,choice;
	do
	{
		cout << "\t\tWelcome to MY BANK APP\n";
		cout << "\t\t_____________________________________________________________\n";
		cout << "\t\tEnter the serial number of function do you want to perform\n";
		cout << "\t\t1)Add Manager\n";
		cout << "\t\t2)Get Manager's Detail\n";
		cout << "\t\t3)Add Customer\n ";
		cout << "\t\t4)Add an Account\n";
		cout << "\t\t5)Delete an Account\n";
		cout << "\t\t6)Delete a Customer\n";
		cout << "\t\t7)Withdram Ammount\n";
		cout << "\t\t8)Deposit Ammount\n";
		cout << "\t\t9)View all Customer's details\n";
		cout << "\t\t10)View all account's detail\n";
		cout << "Enter your choice\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			
			cout << "Enter the name of manager\n";
			cin >> m_name;
			cout << "Enter the branch name of manager\n";
			cin >> branch;
			cout << "Enter the ID of manager\n";
			cin >> id;
			b1.set_manager(m_name, branch, id);
			break;
		
		case 2:
			b1.print_manager();
			break;
		case 3:
			cout << "Enter the name of customer\n";
			cin >> m_name;
			cout << "Enter the ID of customer\n";
			cin >> id;
			c1.set_values(m_name, id);
			b1.Add_Customer(c1);
			break;
		case 4:
			cout << "Enter the account id\n";
			cin >> accid;
			cout << "Enter the type of account\n";
			cin >> t;
			cout << "Enter the customer ID \n";
			cin >> cid;
			cout << "Enter the initial balance \n";
			cin >> ball;
			b1.Add_Account(accid, t, cid, ball);
			break;
		case 5:
			cout << "Enter the ID of account you want to delete\n";
			cin >> id;
			b1.delete_Account(id);
			break;
		case 6:
			cout << "Enter the ID of customer you want to delete\n";
			cin >> id;
			b1.delete_Customer(id);
			break;
		case 7:
			cout << "Enter the id of account  from which you want to withdraw\n";
			cin >> id;
			cout << "Enter the ammount you want to withdraw\n";
			cin >> amm;
			b1.withdrawAmmount(amm, id);
			break;
		case 8:
			cout << "Enter the account ID\n";
			cin >> id;
			cout << "Enter the ammount you want to deposit\n";
			cin >> amm;
			b1.depositAmmount(amm, id);
			break;
		case 9:
			cout << "The detail of all customers is\n";
			b1.show_NoOfCustomers();
			break;
		case 10:
			cout << "The detail of all accounts is\n";
			b1.show_NoOfAccounts();
			break;

		}
		cout << "Enter 1 if you want to perform another function\n";
		cin >> choice;
	} while (choice==1);
	_getch();
}

