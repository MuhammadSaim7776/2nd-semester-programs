//#include<iostream>
//#include<conio.h>
//#include<string>
//using namespace std;
//class student{
//private:
//	string name;
//	int roll_number;
//public:
//	student()
//	{
//		name = "";
//		roll_number = 0;
//	}
//	void set_data(string name, int roll_number)
//	{
//		set_name(name);
//	}
//	void set_name(string name)
//	{
//		this->name = name;
//		set_rollnumber(roll_number);
//	}
//	void set_rollnumber(int roll_number)
//	{
//		this->roll_number = roll_number;
//	}
//	string get_name()const
//	{
//		return name;
//	}
//	int get_rollnumber()const
//	{
//		return roll_number;
//	}
//};
//void main()

//{
//	string name="";
//	int roll_number=0;
//	float average=0, sum=0, highest=0;
//	float*marks = new float[5];
//	student*ptr = NULL;
//	ptr = new student[5];
//	cout << "Enter the name and rollnumber of five students" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "Enter the name of student " << i + 1 << endl;
//		cin >> name;
//		ptr[i].set_name(name);
//		cout << "Enter the roll number of student " << i + 1 << endl;
//		cin >> roll_number;
//		ptr[i].set_rollnumber(roll_number);
//		cout << "Enter the marks of student " << i + 1 << endl;
//		cin >> marks[i];
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		sum += marks[i];
//	}
//	average = sum / 5;
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 1; j < 5; j++)
//		{
//			if (marks[i]>marks[j])
//			{
//				highest = marks[i];
//			}
//			else
//			{
//				continue;
//			}
//		}
//	}
//	
//	cout << "The average marks of student are" << average << endl;
//	cout << "The highest marks of student are" << highest << endl;
//	_getch();
//}