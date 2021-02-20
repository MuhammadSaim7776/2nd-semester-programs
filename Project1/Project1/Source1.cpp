//#include<iostream>
//#include<conio.h>
//using namespace std;
//class student
//{
//	float*marks;
//	int subjects;
//	float GPA;
//public:
//	student(int s)
//	{
//		marks = new float[s];
//		GPA = 0;
//	}
//	void set_marks(int index,float m)
//	{
//		marks[index] = m;
//	}
//	void set_subjects(int d)
//	{
//		subjects = d;
//	}
//	void set_GPA()
//	{
//		float sum=0;
//		for (int i = 0; i < subjects; i++)
//		{
//			sum += marks[i];
//		}
//		GPA = sum / subjects;
//	}
//	float get_GPA()const
//	{
//		return GPA;
//	}
//};
//void main()
//{
//	int s;
//	float m;
//	cout << "Enter the no of subjects" << endl;
//	cin >> s;
//	student s1(s);
//	s1.set_subjects(s);
//	cout << "Enter the marks of student" << endl;
//	for (int i = 0; i < s; i++)
//	{
//		cout << "Enter the marks of subject " << i + 1<<endl;
//		cin >> m;
//		s1.set_marks(i, m);
//	}
//	s1.set_GPA();
//	cout << "The GPA of student is  " << s1.get_GPA();
//	_getch();
//}
