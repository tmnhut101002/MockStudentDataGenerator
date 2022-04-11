#include "DOB.h"
DOB::DOB()
{
	_day = 1;
	_month = 1;
	_year = 1900;
}
DOB::DOB(int day, int month, int year)
{
	_day = day;
	_month = month;
	_year = year;
}