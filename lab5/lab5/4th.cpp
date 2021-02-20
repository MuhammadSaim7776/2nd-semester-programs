#include<iostream>
#include<conio.h>
using namespace std;
class ClockType{
private:
	int hours, minutes, *seconds;
public:
	ClockType()
	{
		hours = 0;
		minutes = 0;
		seconds = new int;
		*seconds = 0;
	}
	/*ClockType(const ClockType &c)
	{
		hours = c.hours;
		minutes = c.minutes;
		seconds = c.seconds;
		//*seconds = *c.seconds;
	}*/
	void set_data(int h, int m, int s)
	{
		set_hours(h);
		set_minutes(m);
		set_seconds(s);

	}
	void set_hours(int h)
	{
		hours = h;
	}
	void set_minutes(int m)
	{
		minutes=m;
	}
	void set_seconds(int s)
	{
		*seconds=s;
	}
	int get_hours()const
	{
		return hours;
	}
	int get_minutes()const
	{
		return minutes;
	}
	int get_seconds()const
	{
		return *seconds;
	}
	void dislay()const
	{
		cout << "Time is \n" << hours << ":" << minutes << ":" << *seconds << endl;
	}
	void increment_data()
	{
		hours++;
		minutes++;
		*seconds=(*seconds)++;
	}
	void increment_hours()
	{
		hours++;
	}
	void increment_minutes()
	{
		minutes++;
	}
	void increment_seconds()
	{
		*seconds++;
	}
};
void main()
{
	ClockType c1;
	int hrs, min, sec;
	cout << "Enter the hours\n";
	cin >> hrs;
	cout << "Enter the minutes\n";
	cin >> min;
	cout << "Enter the seconds\n";
	cin >> sec;
	c1.set_data(hrs, min, sec);
	ClockType c2=c1;
	/*c2 = c1;*/
	cout << "In first onject\n";
	c1.dislay();
	cout << "In second onject\n";
	c2.dislay();
	c1.increment_data();
	cout << "After increment In first onject\n";
	c1.dislay();
	cout << "In second onject\n";
	c2.dislay();
	_getch();
}