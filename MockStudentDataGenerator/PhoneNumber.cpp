#include "PhoneNumber.h"
PhoneNumber::PhoneNumber()
{
	_firstNum = 0;
	_middleNum = 0;
	_lastNum = 0;
}
PhoneNumber::PhoneNumber(int first, int mid, int last)
{
	_firstNum = first;
	_middleNum = mid;
	_lastNum = last;
}

PhoneNumber PhoneNumber::randPhoneNum()
{
	PhoneNumber result;
	_firstNum = 900 + rand() % (999 - 900 + 1);
	_middleNum = 100 + rand() % (999 - 100 + 1);
	_lastNum = 100 + rand() % (999 - 100 + 1);

	result._firstNum = _firstNum;
	result._middleNum = _middleNum;
	result._lastNum = _lastNum;
	return result;
}

void PhoneNumber::output()
{
	cout << "0" << this->_firstNum << " " << this->_middleNum << " " << this->_lastNum;
}

string PhoneNumber::toString()
{
	stringstream out;
	out << "0" << this->_firstNum << " " << this->_middleNum << " " << this->_lastNum;
	string result = out.str();
	return result;

}