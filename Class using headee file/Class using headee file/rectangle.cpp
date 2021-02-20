#include<iostream>
#include<conio.h>
#include"rectangle.h"
using namespace std;
rectangle::rectangle()
{
	length = 0;
	width = 0;
}
rectangle::rectangle(int l, int w)
{
	set_data(l, w);
}
void rectangle::set_length(int l)
{
	if (l > 0)
	{
		length = l;
	}
	else
	{
		cerr << "INVALID INPUT";
	}
}
void rectangle::set_width(int w)
{
	if (w > 0)
	{
		width = w;
	}
	else
	{
		cerr << "INVALID INPUT";
	}
}
void rectangle::set_data(int l, int w)
{
	set_length(l);
	set_width(w);

}
int rectangle::get_length()const
{
	return length;
}
int rectangle::get_width()const
{
	return width;
}
int rectangle::getarea()
{
	return get_length()*get_width();
}
