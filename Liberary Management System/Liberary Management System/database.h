#pragma once
#include"student.h"
#include"staff.h"
#include"bookreservation.h"
#include"book.h"
#include"issue.h"
#include<vector>
class database
{
private:
	vector<book>ListOfBooks;
	vector<student>ListOfRegisteredStudents;
	vector<staff>ListOfRegisteredStaff;
	vector<bookreservation>ListOfReservedBooks;
	vector<issue>ListOfIssuedBooks;
public:
	database();
	void add_book(book);
	void add_student(student);
	void add_reservedbook(string i_sbn , string rEGNO,string,string,string,string);
	void add_stafffmember(staff);
	void issueBook(string i_sbn, string rEGNO, int, int, int, int, int, int, string type);
	void dlt_book(string isbn);
	void dlt_reservedbook(string, string);
	void dlt_student(string);
	void dlt_staff(string);
	void dlt_issuebook(string, double);
	void updateBookInfo(string,book);
	void updateStudentInfo(string,student);
	void updateStaff(string,staff);
	void searchbookbyISBN(string);
	void searchstudentbycardNo(string);
	void searchstaffbycardNo(string);
	void calculateFine(string,string,string,int,int,int);
	void ReturnBook(string, string,string,int,int,int,int,int,int);
	void displayBooks()const;
	void displayStudents()const;
	void diplayStaff()const;
	~database();
};

