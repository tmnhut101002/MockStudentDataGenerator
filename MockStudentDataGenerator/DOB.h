#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <sstream>
using namespace std;
class DOB
{
private:
	int _day;
	int _month;
	int _year;
public:
	DOB();
	DOB(int, int, int);
	int Day() { return _day; }
	int Month() { return _month; }
	int Year() { return _year; }
	void setDay(int value) { _day = value; }
	void setMonth(int value) { _month = value; }
	void setYear(int value) { _year = value; }

	DOB randDOB();
	void output();
	string toString();
};

