//#include<iostream>
//#include<conio.h>
//#include<string>
//using namespace std;
//float sum(float num1, float num2)
//{
//	return num1 + num2;
//}
//float subtract(float num1, float num2)
//{
//	return num1 - num2;
//}
//float multiply(float num1, float num2)
//{
//	return num1*num2;
//}
//float divide(float num1, float num2)
//{
//	return num1 / num2;
//}
//void main()
//{
//	float number1 =0, number2=0;
//	int choice = 0;
//	cout << "Enter the 1st number\n";
//	cin >> number1;
//	cout << "Enter the 2nd number\n";
//	cin >> number2;
//	cout << "Enter the operation you want to perform\n1)sum\n2)subtract\n3)multiply\n4)divide\n";
//	cin >> choice;
//	switch (choice)
//	{
//	case 1:
//	{
//			  float(*ptr)(float, float) = sum;
//			  cout <<"The addition of two numbers is : "<< ptr(number1, number2);
//			  break;
//	}
//	case 2:
//	{
//			  float(*ptr)(float, float) = subtract;
//			  cout <<"The subtraction of two numbers is : "<< ptr(number1, number2);
//			  break;
//	}
//	case 3:
//	{
//			  float(*ptr)(float, float) = multiply;
//			  cout <<"The multiplication of two numbers is : "<< ptr(number1, number2);
//			  break;
//	}
//	case 4:
//	{
//			  float(*ptr)(float, float) = divide;
//			  cout <<"The division of two numbers is : "<< ptr(number1, number2);
//			  break;
//	}
//	default:
//	{
//			   cout << "invalid entry";
//	}
//	}
//	_getch();
//	
//}