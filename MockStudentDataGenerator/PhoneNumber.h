#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <sstream>

using namespace std;

class PhoneNumber
{
private:
	int _firstNum;
	int _middleNum;
	int _lastNum;
public:
	PhoneNumber();
	PhoneNumber(int, int, int);
	int FirstNum() { return _firstNum; }
	int MiddleNum() { return _middleNum; }
	int LastNum() { return _lastNum; }
	void setFirstNum(int value) { _firstNum = value; }
	void setMiddletNum(int value) { _middleNum = value; }
	void setLastNum(int value) { _lastNum = value; }

	PhoneNumber randPhoneNum();
	void output();
	string toString();
};

