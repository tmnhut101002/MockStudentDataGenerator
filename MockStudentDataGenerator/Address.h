#pragma once
#include <iostream>
#include <string>

using namespace std;
class Address
{
private: 
	int _number;
	string _street;
	string _ward;
	string _district;
public: 
	Address(int, string, string, string);
	int Number() { return _number; }
	string Street() { return _street; }
	string Ward() { return _ward; }
	string District() { return _district; }
	void setNumber(int value) { _number = value; }
	void setStreet(string value) { _street = value; }
	void setWard(string value) { _ward = value; }
	void setDistrict(string value) { _district = value; }
};

