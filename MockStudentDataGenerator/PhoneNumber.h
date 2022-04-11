#pragma once
#include <iostream>
#include <string>

using namespace std;

class PhoneNumber
{
private:
	string _firstNum;
	string _middleNum;
	string _lastNum;
public:
	PhoneNumber();
	PhoneNumber(string, string, string);
	string FirstNum() { return _firstNum; }
	string MiddleNum() { return _middleNum; }
	string LastNum() { return _lastNum; }
	void setFirstNum(string value) { _firstNum = value; }
	void setMiddletNum(string value) { _middleNum = value; }
	void setLastNum(string value) { _lastNum = value; }
};

