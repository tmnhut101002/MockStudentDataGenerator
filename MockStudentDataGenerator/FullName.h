#pragma once

#include <iostream>
#include <string>

using namespace std;

class FullName
{
private:
	string _firstName;
	string _middleName;
	string _lastName;
public:
	FullName(string, string, string);
	~FullName();
public:
	string firstName() { return _firstName; }
	string middleName() { return _middleName; }
	string lastName() { return _lastName; }
	void setFirstName(string value) { _firstName = value; }
	void setMiddleName(string value) { _middleName = value; }
	void setLastName(string value) { _lastName = value; }
};

