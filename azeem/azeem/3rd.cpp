//#include<iostream>
//#include<conio.h>
//#include<string>
//#include<iomanip>
//using namespace std;
//struct Date
//{
//	int day=0;
//	int month=0;
//	int year=0;
//	void display()
//	{
//		cout << day << "/" << month << "/" << year << endl;
//	}
//};
//
//struct Student
//{
//	string Name="";
//	int RollNumber=0;
//	Date DateOfBirth;
//	int NoOfCourses=0;
//	float*ptr = new float[NoOfCourses];
//	float CGPA=0;
//};
//void set_values(Student &std)
//{
//	cout << "Enter the name\n";
//	cin >> std.Name;
//	cout << "Enter the Roll Number\n";
//	cin >> std.RollNumber;
//	cout << "Enter the Date of birth\ne.g.1 [space] 1 [space] 1999\n";
//	cin >> std.DateOfBirth.day >> std.DateOfBirth.month >> std.DateOfBirth.year;
//	cout << "Enter the total number of courses the student is studing\n";
//	cin >> std.NoOfCourses;
//	cout << "Enter the marks of each course\n";
//	for (int i = 0; i < std.NoOfCourses; i++)
//	{
//		cin >> std.ptr[i];
//	}
//	cout << "Enter the CGPA\n";
//	cin >> std.CGPA;
//}
//void showFailedCourse(Student&std)
//{
//	cout << "Failed Courses\n";
//	cout << "Course No" << setw(25) << "Status\n";
//	for (int i = 0; i < std.NoOfCourses; i++)
//	{
//		if (std.ptr[i] < 50)
//		{
//			cout <<"     "<< i + 1 << setw(25) << "Failed\n";
//		}
//		else
//		{
//			continue;
//		}
//	}
//	
//}
//void dropout(Student std)
//{
//	if (std.CGPA < 2.5)
//	{
//		cout << std.Name << " is going to droupout due to low CGPA of " << std.CGPA << endl;
//	}
//}
//void main()
//{
//	Student s1;
//	set_values(s1);
//	Student s2;
//	set_values(s2);
//	Student s3;
//	set_values(s3);
//	cout << "The subject status of 1st student are as follow\n";
//	showFailedCourse(s1);
//	cout << "The subject status of 2nd student are as follow\n";
//	showFailedCourse(s2);
//	cout << "The subject status of 3rd student are as follow\n";
//	showFailedCourse(s3);
//	dropout(s1);
//	dropout(s2);
//	dropout(s3);
//	_getch();
//}