#include "database.h"


database::database()
{
}
void database::add_book(book b1)
{
	bool status=false;
	for (unsigned i = 0; i < ListOfBooks.size(); i++)
	{
		if (b1.get_ISBN() == ListOfBooks[i].get_ISBN() || b1.get_tittle() == ListOfBooks[i].get_tittle())
		{
			status = true;
			break;
		}
		else
		{
			continue;
		}
		
	}
	if (status == true)
	{
		cout << "The book with this perticular ISBN or name already exists \n";
	}
	else
	{
		ListOfBooks.push_back(b1);
		cout << "Book added successfully\n";
	}
}
void database::add_student(student std)
{
	bool status=false;
	for (unsigned i = 0; i < ListOfRegisteredStudents.size(); i++)
	{
		if (std.get_RegNo() == ListOfRegisteredStudents[i].get_RegNo()  || ListOfRegisteredStudents[i].get_CardNo() == std.get_CardNo())
		{
			status = true;
			break;
		}
		else
		{
			continue;
		}
	}
	if (status == true)
	{
		cout << "Student with this name registraion or Card number already exists \n";
	}
	else
	{
		ListOfRegisteredStudents.push_back(std);
		cout << "Student added successfully\n";
	}
}

void database::add_reservedbook(string i_sbn, string rEGNO,string cdate , string sttus , string emal,string type)
{
	bool status1 = false;
	bool status2 = false;
	bookreservation obj;
	for (unsigned i = 0; i < ListOfBooks.size(); i++)
	{
		if (i_sbn == ListOfBooks[i].get_ISBN())
		{
			obj.set_values(ListOfBooks[i].get_ISBN(), ListOfBooks[i].get_NoOfPages(), ListOfBooks[i].get_tittle(), ListOfBooks[i].get_price(), ListOfBooks[i].get_publishor(), ListOfBooks[i].getrack());
			status1 = true;
			break;
		}
	}
	if (status1 == false)
	{
		cout << "Invalid isbn number\n";
	}
	if (type == "staff")
	{
		for (unsigned i = 0; i < ListOfRegisteredStaff.size(); i++)
		{
			if (rEGNO == ListOfRegisteredStaff[i].get_uniID())
			{
				ListOfRegisteredStaff[i].increment_accoutdetails(3);
				obj.set_Values(&ListOfRegisteredStaff[i], cdate, sttus, emal);
				status2 = true;
				break;
			}
		}
	}
	else
	{
		for (unsigned i = 0; i < ListOfRegisteredStudents.size(); i++)
		{
			if (rEGNO == ListOfRegisteredStudents[i].get_RegNo())
			{
				ListOfRegisteredStudents[i].increment_accoutdetails(3);
				obj.set_Values(&ListOfRegisteredStudents[i], cdate, sttus, emal);
				status2 = true;
				break;
			}
		}
	}
	if (status2 == false)
	{
		cout << "Invalid registration number or university id, If you are not registered than get registered first \n";
	}
	if (status1 == true && status2 == true)
	{
		ListOfReservedBooks.push_back(obj);
		cout << "Book reserved successfully\n";
	}
	else
	{
		cout << "Invalid enteries plz try again";
	}
}
void database::add_stafffmember(staff obj)
{
	bool status=false;
	for (unsigned i = 0; i < ListOfRegisteredStaff.size(); i++)
	{
		if (obj.get_ID() == ListOfRegisteredStaff[i].get_ID() && obj.get_uniID() == ListOfRegisteredStaff[i].get_uniID()||ListOfRegisteredStaff[i].get_CardNo()==obj.get_CardNo())
		{
			status = true;
			break;
		}
		else
		{
			continue;
		}
	}
	if (status == true)
	{
		cout << "This staff member is already registered\n";
	}
	else
	{
		ListOfRegisteredStaff.push_back(obj);
		cout << "Member added successfully\n";
	}
}

void database::issueBook(string i_sbn, string rEGNO, int d1, int m1, int y1, int d2, int m2, int y2, string type)
{
	bool status1 = false;
	bool status2 = false;
	issue obj;
	for (unsigned i = 0; i < ListOfBooks.size(); i++)
	{
		if (i_sbn == ListOfBooks[i].get_ISBN())
		{
			obj.set_values(ListOfBooks[i].get_ISBN(), ListOfBooks[i].get_NoOfPages(), ListOfBooks[i].get_tittle(), ListOfBooks[i].get_price(), ListOfBooks[i].get_publishor(), ListOfBooks[i].getrack());
			status1 = true;
			break;
		}
	}
	if (status1 == false)
	{
		cout << "Invalid isbn number\n";
	}
	if (type == "staff")
	{
		for (unsigned i = 0; i < ListOfRegisteredStaff.size(); i++)
		{
			if (rEGNO == ListOfRegisteredStaff[i].get_uniID())
			{
				ListOfRegisteredStaff[i].increment_accoutdetails(1);
				obj.set_Values(&ListOfRegisteredStaff[i], d1,m1,y1,d2,m2,y2);
				status2 = true;
				break;
			}
		}
	}
	else
	{
		for (unsigned i = 0; i < ListOfRegisteredStudents.size(); i++)
		{
			if (rEGNO == ListOfRegisteredStudents[i].get_RegNo())
			{
				ListOfRegisteredStudents[i].increment_accoutdetails(1);
				obj.set_Values(&ListOfRegisteredStudents[i], d1, m1, y1, d2, m2, y2);
				status2 = true;
				break;
			}
		}
	}
	if (status2 == false)
	{
		cout << "Invalid registration number or university id, If you are not registered than get registered first \n";
	}
	if (status1 == true && status2 == true)
	{
		ListOfIssuedBooks.push_back(obj);
		cout << "Book issued successfully\n";
	}
	else
	{
		cout << "Invalid enteries plz try again";
	}
}
void database::dlt_issuebook(string isbN, double i_d)
{
	bool status = false;
	for (unsigned i = 0; i < ListOfIssuedBooks.size(); i++)
	{
		if (isbN == ListOfIssuedBooks[i].get_ISBN() && i_d == ListOfIssuedBooks[i].get_issuedby()->get_ID())
		{
			ListOfIssuedBooks.erase(ListOfIssuedBooks.begin() + i);
			status = true;
			break;
		}
		else
		{
			continue;
		}
	}
	if (status == true)
	{
		cout << "Book is deleted from issued state\n";
	}
	else
	{
		cout << "Book not found. plz try again\n";
	}
}

void database::dlt_reservedbook(string isbN, string emaiL)
{
	bool status=false;
	for (unsigned i = 0; i < ListOfReservedBooks.size(); i++)
	{
		if (isbN == ListOfReservedBooks[i].get_ISBN() && emaiL == ListOfReservedBooks[i].get_email())
		{
			ListOfReservedBooks.erase(ListOfReservedBooks.begin()+i);
			status = true;
			break;
		}
		else
		{
			continue;
		}
	}
	if (status == true)
	{
		cout << "Book is deleted from reserved state\n";
	}
	else
	{
		cout << "Book not found. plz try again\n";
	}
}
void database::dlt_student(string reGNO)
{
	bool status=false;
	for (unsigned i = 0; i < ListOfRegisteredStudents.size(); i++)
	{
		if (reGNO == ListOfRegisteredStudents[i].get_RegNo())
		{
			ListOfRegisteredStudents.erase(ListOfRegisteredStudents.begin() + i);
			status = true;
			break;
		}
		else
		{
			continue;
		}
	}
	if (status == true)
	{
		cout << "Student deleted successfully\n";
	}
	else
	{
		cout << "Student not found.Plz try again\n";
	}
}
void database::dlt_book(string isbn)
{
	bool status = false;
	for (unsigned i = 0; i < ListOfBooks.size(); i++)
	{
		if (isbn == ListOfBooks[i].get_ISBN())
		{
			ListOfBooks.erase(ListOfBooks.begin() + i);
			status = true;
			break;
		}
	}
	if (status == true)
	{
		cout << "Book deletd successfully\n";
	}
	else
	{
		cout << "Book not found\n";
	}
	
}
void database::dlt_staff(string uID)
{
	bool status = false;
	for (unsigned i = 0; i < ListOfRegisteredStaff.size(); i++)
	{
		if (uID == ListOfRegisteredStaff[i].get_uniID())
		{
			ListOfRegisteredStaff.erase(ListOfRegisteredStaff.begin() + i);
			status = true;
			break;
		}
		else
		{
			continue;
		}
	}
	if (status == true)
	{
		cout << "Staff member deleted successfully\n";
	}
	else
	{
		cout << "Staff member not found.Plz try again\n";
	}
}





void database::calculateFine(string type , string isBN , string cdno,int rdAy,int rmOnth,int ryEar)
{

	if (type == "staff")
	{
		for (unsigned i = 0; i < ListOfIssuedBooks.size(); i++)
		{
			if (isBN == ListOfIssuedBooks[i].get_ISBN() && cdno == ListOfIssuedBooks[i].get_issuedby()->get_CardNo())
			{
				ListOfIssuedBooks[i].get_issuedby()->set_NoOfDays(ListOfIssuedBooks[i].get_dueday(), ListOfIssuedBooks[i].get_duemonth(), ListOfIssuedBooks[i].get_dueyear(), rdAy, rmOnth, ryEar);
				if (ListOfIssuedBooks[i].get_issuedby()->get_noofdays()>0)
				{
					double f = 200;
					ListOfIssuedBooks[i].get_issuedby()->set_fine(f);
					/*for (unsigned j = 0; j < ListOfRegisteredStaff.size(); j++)
					{
						if (cdno == ListOfRegisteredStudents[i].get_CardNo())
						{
							ListOfRegisteredStudents[i].set_fine(f);
							break;
						}
						else
						{
							continue;
						}
					}*/
				}
				else
				{
					continue;
				}
			}
		}
		
	}
	else if (type == "student")
	{
		for (unsigned i = 0; i < ListOfIssuedBooks.size(); i++)
		{
			if (isBN == ListOfIssuedBooks[i].get_ISBN() && cdno == ListOfIssuedBooks[i].get_issuedby()->get_CardNo())
			{
				ListOfIssuedBooks[i].get_issuedby()->set_NoOfDays(ListOfIssuedBooks[i].get_dueday(), ListOfIssuedBooks[i].get_duemonth(), ListOfIssuedBooks[i].get_dueyear(), rdAy, rmOnth, ryEar);
				if (ListOfIssuedBooks[i].get_issuedby()->get_noofdays()>0)
				{
					double f = 200;
					ListOfIssuedBooks[i].get_issuedby()->set_fine(f);
					/*for (unsigned j = 0; j < ListOfRegisteredStudents.size(); j++)
					{
						if (cdno == ListOfRegisteredStudents[i].get_CardNo())
						{
							ListOfRegisteredStudents[i].set_fine(f);
							break;
						}
						else
						{
							continue;
						}
					}*/
				}
				else
				{
					continue;
				}
			}
		}
	}
	else
	{
		cout << "Invalid Entry\n";
	}
}
void database::updateBookInfo(string iSBN, book bOOK)
{
	for (unsigned i = 0; i < ListOfBooks.size(); i++)
	{
		if (iSBN == ListOfBooks[i].get_ISBN())
		{
			ListOfBooks[i] = bOOK;
			cout << "Book info updated successfully\n";
		}
		break;
	}
	
}
void database::updateStudentInfo(string rEGNo,student sttd)
{
	for (unsigned i = 0; i < ListOfRegisteredStudents.size(); i++)
	{
		if (rEGNo == ListOfRegisteredStudents[i].get_RegNo())
		{
			ListOfRegisteredStudents[i] = sttd;
			cout << "Student info updated successfully\n";
		}
		break;
	}
}
void database::updateStaff(string uI_D, staff sttd)
{
	for (unsigned i = 0; i < ListOfRegisteredStaff.size(); i++)
	{
		if (uI_D == ListOfRegisteredStaff[i].get_uniID())
		{
			ListOfRegisteredStaff[i] = sttd;
			cout << "Staff member info updated successfully\n";
		}
		break;
	}
}
void database::searchbookbyISBN(string iSBn)
{
	bool status = false;
	for (unsigned i = 0; i < ListOfBooks.size(); i++)
	{
		if (iSBn == ListOfBooks[i].get_ISBN())
		{
			ListOfBooks[i].display();
			status = true;
			break;
		}
	}
	if (status == false)
	{
		cout << "Book Not found\n";
	}
}
void database::searchstudentbycardNo(string cDNo)
{
	bool status = false;
	for (unsigned i = 0; i < ListOfRegisteredStudents.size(); i++)
	{
		if (cDNo == ListOfRegisteredStudents[i].get_CardNo())
		{
			ListOfRegisteredStudents[i].display();
			status = true;
		}
	}
	if (status == false)
	{
		cout << "Student not found\n";
	}
}
void database::searchstaffbycardNo(string cDNo)
{
	bool status = false;
	for (unsigned i = 0; i < ListOfRegisteredStaff.size(); i++)
	{
		if (cDNo == ListOfRegisteredStaff[i].get_CardNo())
		{
			ListOfRegisteredStaff[i].display();
			status = true;
		}
	}
	if (status == false)
	{
		cout << "Staff Member not found\n";
	}
}
void database::ReturnBook(string type, string cdno, string isb_n,int Rday,int Rmonth , int Ryear,int fday, int fmonth,int fyear)
{
	if (type == "student")
	{
		for (unsigned i = 0; i < ListOfIssuedBooks.size(); i++)
		{
			if (cdno == ListOfIssuedBooks[i].get_issuedby()->get_CardNo())
			{
				if (isb_n == ListOfIssuedBooks[i].get_ISBN())
				{
					
					calculateFine("student", isb_n, cdno, Rday, Rmonth, Ryear);
					ListOfIssuedBooks[i].get_issuedby()->decrement_accoutdetails(1);
					ListOfIssuedBooks[i].get_issuedby()->setfinedate(Rday, Rmonth, Ryear, fday, fmonth, fyear);
					ListOfIssuedBooks.erase(ListOfIssuedBooks.begin() + i);
					
					cout << "Book returned successfully. plz see your all info to know about your fine\n";
					for (unsigned j = 0; j < ListOfRegisteredStudents.size(); j++)
					{
						if (cdno == ListOfRegisteredStudents[i].get_CardNo())
						{
							ListOfRegisteredStudents[i].setfinedate(Rday, Rmonth, Ryear, fday, fmonth, fyear);
							break;
						}
						else
						{
							continue;
						}
					}
				}
				else
				{
					cout << "Invalud ISBN of book\n";
				}
			}
			else
			{
				cout << "Invalid card number\n";
			}
		}
		
	}
	else if (type == "staff")
	{
		for (unsigned i = 0; i < ListOfIssuedBooks.size(); i++)
		{
			if (cdno == ListOfIssuedBooks[i].get_issuedby()->get_CardNo())
			{
				if (isb_n == ListOfIssuedBooks[i].get_ISBN())
				{
					
					calculateFine("student", isb_n, cdno, Rday, Rmonth, Ryear);
					ListOfIssuedBooks[i].get_issuedby()->decrement_accoutdetails(1);
					ListOfIssuedBooks[i].get_issuedby()->setfinedate(Rday, Rmonth, Ryear, fday, fmonth, fyear);
					ListOfIssuedBooks.erase(ListOfIssuedBooks.begin() + i); 
					for (unsigned j = 0; j < ListOfRegisteredStudents.size(); j++)
					{
						if (cdno == ListOfRegisteredStaff[i].get_CardNo())
						{
							ListOfRegisteredStaff[i].setfinedate(Rday, Rmonth, Ryear, fday, fmonth, fyear);
							break;
						}
						else
						{
							continue;
						}
					}
					cout << "Book returned successfully. plz see your all info to know about your fine\n";
				}
				else
				{
					cout << "Invalud ISBN of book\n";
				}
			}
			else
			{
				cout << "Invalid card number\n";
			}
		}
	}
}




void database::displayBooks()const
{
	cout << "\t\t*******************************************\n";
	cout << setw(44) << "BOOKS DETAILS\n";
	cout << "\t\t*******************************************\n\n";
	cout << "Sr No" << setw(18) << "NAME" << setw(18) << "ISBN" << setw(18) << "PUBLISHOR" << setw(18) << "RACK NO" << endl;
	for (unsigned i = 0; i < ListOfBooks.size(); i++)
	{
		cout << i + 1 << ")" << setw(18) << ListOfBooks[i].get_tittle() << setw(18) << ListOfBooks[i].get_ISBN() << setw(18) << ListOfBooks[i].get_publishor() << setw(18) << ListOfBooks[i].get_rckno() << endl;
	}

}
void database::displayStudents()const
{
	cout << "\t\t*******************************************\n";
	cout << setw(55) << "REGISTERED STUDENTS DETAILS\n";
	cout << "\t\t*******************************************\n\n";
	cout << "Sr NO" << setw(18) << "NAME" << setw(18) << "DEPT  " << setw(18) << "REGISTRATION NUMBER" << setw(18) << "CARD NUMBER" << endl;
	for (unsigned i = 0; i < ListOfRegisteredStudents.size(); i++)
	{
		cout << i + 1 << ")" << setw(18) << ListOfRegisteredStudents[i].get_name() << setw(18) << ListOfRegisteredStudents[i].get_dept() << setw(18) << ListOfRegisteredStudents[i].get_RegNo() << setw(18) << ListOfRegisteredStudents[i].get_CardNo() << endl;
	}
}
void database::diplayStaff()const
{
	cout << "\t\t*******************************************\n";
	cout << setw(50) << "REGISTERED STAFF MEMBER DETAILS\n";
	cout << "\t\t*******************************************\n\n";
	cout << "Sr No" << setw(18) << "NAME" << setw(18) << "DEPT" << setw(18) << "UNIVERSITY ID" << setw(18) << "CARD NUMBER" << endl;
	for (unsigned i = 0; i < ListOfRegisteredStaff.size(); i++)
	{
		cout << i + 1 << ")" << setw(18) << ListOfRegisteredStaff[i].get_name() << setw(18) << ListOfRegisteredStaff[i].get_dept() << setw(18) << ListOfRegisteredStaff[i].get_uniID() << setw(18) << ListOfRegisteredStudents[i].get_CardNo() << endl;
	}
}
database::~database()
{
}