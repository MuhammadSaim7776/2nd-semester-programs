#include"liberary.h"
#include"liberarian.h"
#include"staff.h"
#include"student.h"
#include"bookreservation.h"
#include"issue.h"
using namespace std;
int isLogin(string name , string passcode)
{

	system("cls");
	bool login = 0;
	string adm_name;									// ----> strings to hold input credentials 
	string adm_pw;
	cin.ignore();
	cout << endl << endl << endl;
	cout << setw(28) << " Enter the name of admin: ";	// ----> taking input for credentials
	getline(cin, adm_name);
	cout << endl;
	cout << setw(29) << " Enter the admin password: ";
	getline(cin, adm_pw);

	for (int i = 0; i<1; i++)
	{
		if (adm_name == name && adm_pw == passcode)           // ----> checking for password and user name match
		{
			cout << "\n\n\t\tYou are successfully logged in to Admin Mode \n\n\t";
			login = 1;
			system("pause");
		}

	}
	return login;	// ----> returning the login value to the function

}
void main()
{
	int D1, M1, Y1, D2, M2, Y2;
	liberarian LIBERARIAN;
	LIBERARIAN.set_values("Asif", "12345", "UET");
	database DATABASE;
	liberary LIBERARY("QUAID-E-AZAM LIBRARY", "Kala Shah Kaku", "UNIVERSITY OF ENGINEERING AND TECHNOLOGY", LIBERARIAN, DATABASE);
	string n,e,b,c,d;
	int a=0;
	string isBN="";
	int pages=0;
	string tiTTle="";
	int pRIce=0;
	string pUBlishor="";
	string uisbn = "";
	double I_D = 0;
	Rack rAck;
	book BOOK;
	student STD;
	staff STF;
	/*rAck.setvalues(1, "1st row last setup");
	BOOK.set_values("123", 500, "OOP", 800, "XYZ", &rAck);
	DATABASE.add_book(BOOK);
	rAck.setvalues(2, "1st row middle setup");
	BOOK.set_values("456", 800, "DMS", 1000, "XYZ", &rAck);
	DATABASE.add_book(BOOK);
	rAck.setvalues(3, "1st row starting");
	BOOK.set_values("789", 250, "DLD", 500, "XYZ", &rAck);
	DATABASE.add_book(BOOK);*/
	system("COLOR D");							// ----> for coonsole background 

top:											// ----> defining label for first screen
	int choices = 0, ad_choices = 0, li_choices = 0;			// ----> integer variables declared for making choices in main section,admin mode and library section
	string pw;									// ----> string used for library password
	string try_top;								// ----> string used if wrong password is entered
	cout << endl << endl << "        ";
	for (int c = 0; c<15; c++)					// ----> The main heading line
	{
		cout << "*";
	}
	cout << "	___WELCOME TO LIBRARY___	";

	for (int c = 0; c<15; c++)
	{
		cout << "*";
	}
	cout << endl << "  ";
	cout << setw(24) << "_____ " << LIBERARY.get_name() << "_____ " << endl;
	cout << setw(43) << LIBERARY.get_address() << endl;
	cout << setw(55) << LIBERARY.get_uniname() << endl;
	cout << endl << endl << endl << endl;


	cout << setw(66) << " Please Enter the password to gain access to the system : " << endl << endl;
	cout << "           ";
	cin >> pw;
	// ----> input password string for login to the library
	if (pw == LIBERARY.Librarian->get_password())
	{
		system("cls");
	top1:
		cout << "\t_______________________________________________\n\n\t 1).To gain access to admin mode\n\t";
		cout << " 2).To go to the library section\n\t";
		cout << " 3).To end the program \n\t_______________________________________________" << endl;
		cout << endl << endl << endl;
		cout << "\t Please enter your choice (1-3) :   " << endl;
		cout << "           ";
		cin >> choices;
		// ----> input for the option selection
		switch (choices)
		{
		case 1:
			//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
			// ADMIN MODE

			if (isLogin(LIBERARY.Librarian->get_name(),LIBERARY.Librarian->get_password()) == 1)				// ----> calling the bool isLogin function
			{
				system("cls");
			top2:
				cout << "\t\t______________________________________________________\n\n\t\t\t\t ***Admin Mode*** \n\n\t\t\t 1. Add Book\n\t\t\t 2. Delete Book\n\t\t\t 3. Add Student\n\t\t\t 4. Delete Student\n\t\t\t 5. Add Staff Member\n\t\t\t 6. Delete Staff Member \n\t\t\t 7. Add Reserved Book\n\t\t\t 8. Delete Reserved Book \n\t\t\t 9. Update Book info \n\t\t\t 10.Update student info\n\t\t\t 11.Update staff info\n\t\t\t 12.Issue Book\n\t\t\t 13.Return Book\n\t\t\t 14.Main Menu \n\t\t\t 15. Exit Programme.\n\t\t______________________________________________________\n";

				cout << endl << "\t\t\t Please enter your choice (1-14) :   ";
				cin >> ad_choices;				// ----> input for option selction in admin mode
				switch (ad_choices)
				{

				case 1:
					system("cls");
					cout << "Enter the rack no in which book will be placed after adding\n";
					cin >>a ;
					cout << "Enter the location identifier of respected rack\n";
				    /*cin.ignore();
					getline(cin, n);*/
					cin >> n;
					rAck.setvalues(a, n);
					cout << "Enter the ISBN number\n";
					cin >> isBN;
					/*getline(cin, isBN);*/
					cout << "Enter the total number of pages of book\n";
					cin >> pages;
					cout << "Enter the tittle of book\n";
					/*cin.ignore();
					getline(cin, tiTTle);*/
					cin >> tiTTle;
					cout << "Enter the price of book\n";
					cin >> pRIce;
					cout << "Enter the publishor of book\n";
					/*cin.ignore();
					getline(cin, pUBlishor);*/
					cin >> pUBlishor;
					BOOK.set_values(isBN,pages, tiTTle, pRIce, pUBlishor,&rAck);
					DATABASE.add_book(BOOK);
					system("pause");
					system("cls");
					goto top2;

				case 2:
					system("cls");
					cout << "Enter the ISBN number of book\n";
					/*cin.ignore();
					getline(cin,isBN);*/
					cin >> isBN;
					DATABASE.dlt_book(isBN);
					system("pause");
					system("cls");
					goto top2;

				case 3:
					system("cls");
					cout << "Enter the name of student\n";
					/*cin.ignore();
					getline(cin, tiTTle);*/
					cin >> tiTTle;
					cout << "Enter the ID/Bform NO of student\n";
					cin >> I_D;
					cout << "Enter the date of membership of student\n";
					/*cin.ignore();
					getline(cin,e);*/
					cin >> e;
					cout << "Enter the liberrary card Number\n";
					/*cin.ignore();
					getline(cin, b);*/
					cin >> b;
					cout << "Enter the issue date of card to student\n";
					/*cin.ignore();
					getline(cin, c);*/
					cin >> c;
					cout << "Enter the active of card\n";
					/*cin.ignore();
					getline(cin, pUBlishor);*/
					cin >> pUBlishor;
					STD.set_Values(tiTTle, I_D, e, b,c, pUBlishor);
					cout << "Enter the Regitration Number of student\n";
					/*cin.ignore();
					getline(cin, isBN);*/
					cin >> isBN;
					cout << "Enter the session of student\n";
					cin >> pRIce;
					cout << "Enter the department of student\n";
					/*cin.ignore();
					getline(cin, d);*/
					cin >> d;
					STD.set_values(isBN, pRIce, d);
					DATABASE.add_student(STD);
					system("pause");
					system("cls");
					goto top2;

				case 4:
					system("cls");
					cout << "Enter the Registration Number of student\n";
					/*cin.ignore();
					getline(cin, tiTTle);*/
					cin >> tiTTle;
					DATABASE.dlt_student(tiTTle);
					system("pause");
					system("cls");
					goto top2;

				case 5:
					system("cls");
					/*cout << "Enter the name of staff member\n";
					cin.ignore();*/
					/*getline(cin, tiTTle);*/
					cin >> tiTTle;
					cout << "Enter the ID card NO of staff member\n";
					cin >> I_D;
					cout << "Enter the date of membership\n";
					/*cin.ignore();
					getline(cin, e);*/
					cin >> e;
					cout << "Enter the liberrary card Number\n";
					/*cin.ignore();
					getline(cin, b);*/
					cin >> b;
					cout << "Enter the issue date of card\n";
					/*cin.ignore();
					getline(cin, c);*/
					cin >> c;
					cout << "Enter the active of card\n";
					/*cin.ignore();
					getline(cin, pUBlishor);*/
					cin >> pUBlishor;
					STF.set_Values(tiTTle, I_D, e, b, c, pUBlishor);
					cout << "Enter the ID of staff member given by UNIVERSITY\n";
					/*cin.ignore();
					getline(cin, tiTTle);*/
					cin >> tiTTle;
					cout << "Enter the department\n";
					/*cin.ignore();
					getline(cin, d);*/
					cin >> d;
					STF.set_values(tiTTle, d);
					DATABASE.add_stafffmember(STF);
					system("pause");
					system("cls");
					goto top2;
				case 6:
					system("cls");
					cout << "Enter the university ID of staff member\n";
					/*cin.ignore();
					getline(cin, c);*/
					cin >> c;
					DATABASE.dlt_staff(c);
					system("pause");
					system("cls");
					goto top2;

				case 7:
					system("cls");
					cout << "Enter the isbn number of book you want to reserve\n";
					/*cin.ignore();
					getline(cin, uisbn);*/
					cin >> uisbn;
					cout << "Enter your registration number or UNIVERSITY ID(in case of staff)\n";
					/*cin.ignore();
					getline(cin, e);*/
					cin >> e;
					cout << "Enter the date on which book is reserved\n";
					/*cin.ignore();
					getline(cin, b);*/
					cin >> b;
					cout << "write active to activate your book reservation\n";
					/*cin.ignore();
					getline(cin, c);*/
					cin >> c;
					cout << "Enter your email\n";
					/*cin.ignore();
					getline(cin, pUBlishor);*/
					cin >> pUBlishor;
					cout << "if you are a staff memebr than write 'staff'otherwise student" << endl;
					/*cin.ignore();
					getline(cin, d);*/
					cin >> d;
					DATABASE.add_reservedbook(uisbn,e,b,c,pUBlishor,d);
					system("pause");
					system("cls");
					goto top2;




				case 8:
					system("cls");
					cout << "Enter the ISBN number of reserved book\n";
					/*cin.ignore();
					getline(cin, isBN);*/
					cin >> isBN;
					cout << "Enter the email of user by which the book is reserved\n";
					/*cin.ignore();
					getline(cin, pUBlishor);*/
					cin >> pUBlishor;
					DATABASE.dlt_reservedbook(isBN, pUBlishor);
					system("pause");
					system("cls");
					goto top2;

				case 9:
					system("cls");
					cout << "Enter the isbn of book of which you want to update\n";
					/*cin.ignore();
					getline(cin, uisbn);*/
					cin >> uisbn;
					cout << "Enter the updated info of book\n";
					cout << "Enter the rack no in which book will be placed after adding\n";
					cin >> a;
					cout << "Enter the location identifier of respected rack\n";
					/*cin.ignore();
					getline(cin, n);*/
					cin >> n;
					rAck.setvalues(a, n);
					cout << "Enter the ISBN number\n";
					/*cin.ignore();
					getline(cin, isBN);*/
					cin >> isBN;
					cout << "Enter the total noof pages\n";
					cin >> pages;
					cout << "Enter the tittle of book\n";
					/*cin.ignore();
					getline(cin, tiTTle);*/
					cin >> tiTTle;
					cout << "Enter the price of book\n";
					cin >> pRIce;
					cout << "Enter the publishor of book\n";
					/*cin.ignore();
					getline(cin, pUBlishor);*/
					cin >> pUBlishor;
					BOOK.set_values(isBN, pages, tiTTle, pRIce, pUBlishor, &rAck);
					DATABASE.updateBookInfo(uisbn, BOOK);
					system("pause");
					system("cls");
					goto top2;

				case 10:
					system("cls");
					cout << "Enter the registration number of student you want to update\n";
					/*cin.ignore();
					getline(cin, uisbn);*/
					cin >> uisbn;
					cout << "Enter the name of student\n";
					/*cin.ignore();
					getline(cin, tiTTle);*/
					cin >> tiTTle;
					cout << "Enter the ID/Bform NO of student\n";
					cin >> I_D;
					cout << "Enter the date of membership of student\n";
					/*cin.ignore();
					getline(cin, e);*/
					cin >> e;
					cout << "Enter the liberrary card Number\n";
					/*cin.ignore();
					getline(cin, b);*/
					cin >> b;
					cout << "Enter the issue date of card to student\n";
					/*cin.ignore();
					getline(cin, c);*/
					cin >> c;
					cout << "Enter the active of card\n";
					/*cin.ignore();
					getline(cin, pUBlishor);*/
					cin >> pUBlishor;
					STD.set_Values(tiTTle, I_D, e, b, c, pUBlishor);
					cout << "Enter the Regitration Number of student\n";
					/*cin.ignore();
					getline(cin, isBN);*/
					cin >> isBN;
					cout << "Enter the session of student\n";
					cin >> pRIce;
					cout << "Enter the department of student\n";
					/*cin.ignore();
					getline(cin, tiTTle);*/
					cin >> tiTTle;
					STD.set_values(isBN, pRIce, tiTTle);
					DATABASE.updateStudentInfo(uisbn, STD);
					system("pause");
					system("cls");
					goto top2;

				case 11:
					system("cls");
					cout << "Enter the university ID of staff you want to update\n ";
					/*cin.ignore();
					getline(cin, uisbn);*/
					cin >> uisbn;
					cout << "Enter the name of staff member\n";
					/*cin.ignore();
					getline(cin, tiTTle);*/
					cin >> tiTTle;
					cout << "Enter the ID card NO of staff member\n";
					cin >> I_D;
					cout << "Enter the date of membership\n";
					/*cin.ignore();
					getline(cin,e);*/
					cin >> e;
					cout << "Enter the liberrary card Number\n";
					/*cin.ignore();
					getline(cin, b);*/
					cin >> b;
					cout << "Enter the issue date of card\n";
					/*cin.ignore();
					getline(cin, c);*/
					cin >> c;
					cout << "Enter the active state of card\n";
					/*cin.ignore();
					getline(cin, pUBlishor);*/
					cin >> pUBlishor;
					STF.set_Values(tiTTle, I_D, e, b, c, pUBlishor);
					cout << "Enter the ID of staff member given by UNIVERSITY\n";
					/*cin.ignore();
					getline(cin, tiTTle);*/
					cin >> tiTTle;
					cout << "Enter the department\n";
					/*cin.ignore();
					getline(cin, b);*/
					cin >> b;
					STF.set_values(tiTTle, b);
					DATABASE.updateStaff(uisbn, STF);
					system("pause");
					system("cls");
					goto top2;

				case 12:
					system("cls");
					cout << "Enter the ISBN number of book you want to issue\n";
					/*cin.ignore();
					getline(cin, isBN);*/
					cin >> isBN;
					cout << "Enter your registration number or university ID(in case of staff)";
					/*cin.ignore();
					getline(cin, e);*/
					cin >> e;
					cout << "Enter the day month and year of borrowing date\n";
					cin >> D1 >> M1 >> Y1;
					cout << "Enter the due day month and year of duedate\n";
					cin >> D2 >> M2 >> Y2;
					cout << "Write staff if you are a staff member otherwise student\n ";
					/*cin.ignore();
					getline(cin,d);*/
					cin >> d;
					DATABASE.issueBook(isBN, e, D1, M1, Y1, D2, M2, Y2, d);
					system("pause");
					system("cls");
					goto top2;
				case 13:
					system("cls");
					cout << "Type 'student' if you are student or 'staff' if you are a staff member\n";
					/*cin.ignore();
					getline(cin, n);*/
					cin >> n;
					cout << "Enter your liberary card number\n";
					/*cin.ignore();
					getline(cin, e);*/
					cin >> e;
					cout << "Enter the isbn of issued bbok\n";
					/*getline(cin, isBN);*/
					cin >> isBN;
					cout << "Enter the day of returning book\n";
					cin >> D2;
					cout << "Enter the month of returning book\n";
					cin >> M2;
					cout << "Enter the year of returning book\n";
					cin >> Y2;
					cout << "Enter the due day to pay fine if any\n";
					cin >> D1;
					cout << "Enter the due month to pay fine if any\n";
					cin >> M1;
					cout << "Enter the due year to pay fine\n";
					cin >> Y1;
					DATABASE.ReturnBook(n, e, isBN, D2, M2, Y2, D1, M1, Y1);
					system("pause");
					system("cls");
					goto top3;
				case 14:
					system("cls");
					goto top1;				// ----> for going back to the main menu

				case 15:
					system("pause");
					exit(0);				// ----> exiting the program

				default:

					cout << " Invalid Entry \n\n";

					system("pause");
					system("cls");
					goto top2;				// ----> for going back to the admin menu
				}
			}
			else
			{
				cout << endl << endl << setw(84) << " Wrong Ussername or Password  Entered!!!!!\n\n" << endl;

				cout << setw(85) << " Do you want to choose another choice ? (y/n) ";
				cin >> try_top;					// ----> string input for decision
				if (try_top == "y" || try_top == "Y")
				{
					system("cls");
					goto top1;						// ----> for going back to the main menu
				}
				else if (try_top == "n" || try_top == "N")
				{
					system("pause");
					exit(0);
				}
				else
				{
					cout << " Wrong choice entered!! " << endl;
					system("pause");
					exit(0);
				}
			}

			break;


			//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
			// LIBRARY SECTION
		case 2:
			system("cls");
		top3:
			cout << " \t_______________________________________________\n\n\t\t ***Library section*** \n\n";
			cout << "\t 1. To display the list of all books available \n";
			cout << "\t 2. To display the list of all students	\n";
			cout << "\t 3. To display the  all staff\n";
			cout << "\t 4. To search a book for its availability	\n";
			cout << "\t 5. To search student by card number\n";
			cout << "\t 6. To search staff member by card number\n";
			cout << "\t 7. To go back to the main menu\n";
			cout << "\t 8. To exit the program \n";
			cout << "\t_______________________________________________\n\n";

			cout << endl << "\t Please enter your choice (1-6) :   ";
			cin >> li_choices;						// ----> input for the option selection
			switch (li_choices)
			{

			case 1:
				system("cls");
				DATABASE.displayBooks();
				system("pause");
				system("cls");
				goto top3;

			case 2:
				system("cls");
				DATABASE.displayStudents();
				system("pause");
				system("cls");
				goto top3;

			case 3:
				system("cls");
				DATABASE.diplayStaff();
				system("pause");
				system("cls");
				goto top3;

			case 4:
				system("cls");
				cout << "Enter the ISBN of book you want to search\n";
				/*cin.ignore();
				getline(cin, isBN);*/
				cin >> isBN;
				DATABASE.searchbookbyISBN(isBN);
				system("pause");
				system("cls");
				goto top3;
			case 5:
				system("cls");
				cout << "Enter the Card number of student you want to search\n";
				/*cin.ignore();
				getline(cin, e);*/
				cin >> e;
				system("cls");
				DATABASE.searchstudentbycardNo(e);
				system("pause");
				system("cls");
				goto top3;
			case 6:
				system("cls");
				cout << "Enter the Card number of staff member you want to search\n";
				/*cin.ignore();
				getline(cin, e);*/
				cin >> e;
				system("cls");
				DATABASE.searchstaffbycardNo(e);
				system("pause");
				system("cls");
				goto top3;
			
			case 7:
				system("cls");
				goto top1;						// ----> for going to the main menu

			case 8:
				system("pause");
				exit(0);
			default:
				cout << "\n Invalid Entry \n\n";
				system("pause");
				system("cls");
				goto top3;					// ----> for going to the library section

			}

			//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
		case 3:
			system("pause");
			exit(0);
			break;

		default:

			cout << "\n Entry Invalid\n\n";
			system("pause");
			system("cls");
			goto top1;		// ----> for going to the main menu
			break;
		}
	}

	else
	{
		cout << "\n\t You entered the wrong password, please try again by pressing any key. " << endl << endl << endl;
		cout << "\t\t";
		system("pause");
		system("cls");
		goto top;										// ----> for going the first screen
	}
	system("pause");
	_getch();
}





