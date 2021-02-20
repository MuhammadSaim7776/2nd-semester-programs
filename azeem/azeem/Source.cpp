//#include <iostream>
//#include<conio.h>
//#include <string>
//using namespace std;
//class PUCITstudent
//{
//private:
//	string name;      // to store name of the student
//	string RollNo;    // to store roll number of the student
//	float cgpa;       // to store cgpa of the student
//public:
//	PUCITstudent(string Name= "" , string RNo="",float gpa=0)
//	{
//		name = Name;
//		RollNo = RNo;
//		cgpa = gpa;
//	}
//	// A constructor that should act as default as well as parametrized constructor.
//	
//	void setName()           // set name of the student
//	{
//		cout << "Enter Name : ";
//		cin >> name;
//	}
//	void setRollNo()                   // set roll number. It should be of exactly 10 characters
//	{
//		cout << "Enter roll no : ";
//		cin >> RollNo;
//
//		//	if (str.RollNo<10 ||str.RollNo>10) 
//		//	{
//		//		cout<<"Enter rollno : (It should be exactly 10 characters)";
//		//	    cin>>cgpa;
//		//	}
//	}
//	void setCGPA()                          // set CGPA. It should be strictly between 1–4.00
//	{
//		cout << "Enter CGPA : ";
//		do
//		{
//			cin >> cgpa;
//		} while (cgpa > 4.00 || cgpa < 1);
//		
//	}
//	string PUCITstudent::getName()                        // return name
//	{
//		return name;
//	}
//	string PUCITstudent::getRollNo()                    // return roll number
//	{
//		return RollNo;
//	}
//	float PUCITstudent::getCGPA()                      // return CGPA
//	{
//		return cgpa;
//	}
//	string PUCITstudent::getDegreeProgram()           // return degree program in which student is enrolled
//	{
//		return RollNo.substr(0, 3);
//	}
//	string PUCITstudent::getBatch()                 // return batch of the student
//	{
//		return RollNo.substr(4, 2);
//	}
//	string PUCITstudent::getSection()                   // return section (M for morning and A for Afternoon)
//	{
//		return RollNo.substr(6, 1);
//	}
//	string PUCITstudent::getStudentStatus()         // student status i.e pass, drop out, probation
//	{
//		if (cgpa > 1.7)
//		{
//			return "Passed";
//		}
//		else if (cgpa < 1.5)
//		{
//			return "Failed and droped out";
//		}
//		else if (cgpa < 1.7&&cgpa > 1.5)
//		{
//			return "probation";
//		}
//		else
//		{
//			return "Invalid cgpa";
//		}
//
//	}
//	//int PUCITstudent::graduatingYear()                // return year of graduation
//	//{
//
//	//}
//};
//int main()
//{
//	string n, r;
//	float c;
//	cout << "Enter the name of student\n";
//	cin >> n;
//	cout << "Enter the Roll number of student\n";
//	cin >> r;
//	cout << "Enter the cgpa\n";
//	cin >> c;
//	PUCITstudent p1(n,r,c);
//	cout << p1.getName()<<endl;
//	cout << p1.getRollNo() << endl;
//	cout << p1.getDegreeProgram() << endl;
//	cout << p1.getBatch() << endl;
//	cout << p1.getSection() << endl;
//	cout << p1.getStudentStatus() << endl;
//	cout << p1.getCGPA() << endl;
//	_getch();
//
//
//}