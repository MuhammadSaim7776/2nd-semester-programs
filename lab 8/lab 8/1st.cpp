//#include<iostream>
//#include<conio.h>
//using namespace std;
//class Time
//{
//	int hours, minutes, seconds;
//public:
//	Time()
//	{
//		hours = 0;
//		minutes = 0;
//		seconds = 0;
//	}                                                    
//	Time(int hr, int mi, int sec)
//	{
//		setvalues(hr, mi, sec);
//	}
//	void setvalues(int hrs, int min, int secs)
//	{
//		if (hrs >= 0 && hrs <= 12 )
//		{
//			hours = hrs;
//		}
//		else
//		{
//			hours = 0;
//			
//		}
//		if (min >= 0 && min <= 60)
//		{
//			minutes = min;
//		}
//		else
//		{
//			minutes = 0;
//
//		}
//		if (secs >= 0 && secs <= 60)
//		{
//			seconds = secs;
//		}
//		else
//		{
//			seconds = 0;
//		}
//	}
//	void checksum()
//	{
//		if (minutes > 60)
//		{
//			minutes = minutes - 60;
//			seconds = seconds + 1;
//		}
//		else if (minutes<0)
//		{
//			hours = hours - 1;
//			minutes = 0;
//		}
//		if (seconds > 60)
//		{
//			seconds = seconds - 60;
//			hours = hours + 1;
//		}
//		else if (seconds < 0)
//		{
//			minutes = minutes - 1;
//			seconds = 0;
//			checksum();
//		}
//	}
//	void show()const
//	{
//		cout << "Time is\n";
//		cout << hours << ":" << minutes << ":" << seconds << endl;
//	}
//	Time operator +(const Time &R)
//	{
//		Time temp;
//		temp.hours = hours + R.hours;
//		temp.minutes = minutes + R.minutes;
//		temp.seconds = seconds + R.seconds;
//		return temp;
//	}
//	Time operator -(const Time &R)
//	{
//		Time temp;
//		temp.hours = hours - R.hours;
//		temp.minutes = minutes - R.minutes;
//		temp.seconds = seconds - R.seconds;
//		return temp;
//	}
//	
//		
//	Time operator++(int n)
//	{
//		Time temp = *this;
//		seconds++;
//		return temp;
//	}
//	Time operator ++()
//	{
//		seconds++;
//		return *this;
//	}
//	Time operator--(int n)
//	{
//		Time temp = *this;
//		seconds--;
//		return temp;
//	}
//	Time operator --()
//	{
//		seconds--;
//		return *this;
//	}
//};
//void main()
//{
//	int h, m, s;
//	cout << "Enter the time 1\n";
//	cin >> h >> m >> s;
//	Time T1(h, m, s);
//	cout << "Enter the time 2\n";
//	cin >> h >> m >> s;
//	Time T2(h,m,s);
//	Time sum;
//	sum = T1.operator+(T2);
//	T1.show();
//	T2.show();
//	sum.checksum();
//	sum.show();
//	cout << "The time after postincrement is\n";
//	Time su = sum++;
//	su.show();
//	cout << "The time after postdicrement is\n";
//	 su = sum--;
//	su.show();
//	_getch();
//}