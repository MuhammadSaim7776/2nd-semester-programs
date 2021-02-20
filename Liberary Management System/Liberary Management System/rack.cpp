#include "Rack.h"
using namespace std;
Rack::Rack()
{
	racknumber = 0;
	locationidentifier = "";
}
Rack::Rack(int, string)		 			
{
	setvalues(racknumber, locationidentifier);
}
void Rack::setvalues(int racknumber, string locationidentifier)
{
	setracknumber(racknumber);
	setlocationidentifier(locationidentifier);
}
void Rack::setracknumber(int rackNumber)
{
	racknumber = rackNumber;
}
void Rack::setlocationidentifier(string locationIdentifier)
{
	locationidentifier = locationIdentifier;
}
int Rack::getracknumber()
{
	return racknumber;
}
string Rack::getlocationidentifier()
{
	return locationidentifier;
}
void Rack::display()
{
	cout << "Rack number"<<setw(12) << racknumber << endl;
	cout << "*****************************************************************\n";
	cout << "Locationidentifier" << setw(20) << locationidentifier << endl;
	cout << "*****************************************************************\n";
}
Rack::~Rack()				
{
}