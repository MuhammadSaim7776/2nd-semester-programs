#include"Account.h"
#include"Customer.h"
#include"Manager.h"
#include<vector>
using namespace std;
class Bank
{
private:
	Manager manager;
	Account acc;
	vector<Account>account_arr;
	vector<Customer>customer_arr;
public:
	Bank();
	void set_manager(string, string, int);
	void Add_Customer(Customer&);
	void Add_Account(int, string, int, int);
	void withdrawAmmount(int, int);
	void depositAmmount(int, int);
	void delete_Account(int);
	void delete_Customer(int);
	void print_customer(int);
	void print_account(int);
	void print_manager()const;
	void show_NoOfAccounts()const;
	void show_NoOfCustomers()const;
};