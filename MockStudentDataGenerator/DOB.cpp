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
DOB DOB::randDOB()
{
	DOB result;
	_year = 1900 + rand() % (2022 - 1900 + 1);
	_month = 1 + rand() % (12 - 1 + 1);
	if (_month == 2)
	{
		if ((_year % 4 == 0 & _year % 100 != 0) || _year % 400 == 0)
		{
			_day = 1 + rand() % (29);
		}
		else
		{
			_day = 1 + rand() % (28);
		}
	}
	else if (_month == 1 || _month == 3 || _month == 5 || _month == 7 || _month == 8 || _month == 10 || _month == 12)
	{
		_day = 1 + rand() % (31);
	}
	else
	{
		_day = 1 + rand() % (30);
	}
	result._day = _day;
	result._month = _month;
	result._year = _year;
	return result;
}
void DOB::output()
{
	cout << this->_day << "/" << this->_month << "/" << this->_year;
}
string DOB::toString()
{
	stringstream out;
	out << this->_day << "/" << this->_month << "/" << this->_year;
	string result = out.str();
	return result;
}