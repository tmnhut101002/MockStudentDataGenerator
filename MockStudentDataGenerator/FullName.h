#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctime>
#include <sstream>

using namespace std;

class FullName
{
private:
	string _firstName;
	string _middleName;
	string _lastName;
public:
	FullName();
	FullName(string, string, string);
public:
	string firstName() { return _firstName; }
	string middleName() { return _middleName; }
	string lastName() { return _lastName; }
	void setFirstName(string value) { _firstName = value; }
	void setMiddleName(string value) { _middleName = value; }
	void setLastName(string value) { _lastName = value; }

	vector<string> readName(const char*);
	FullName randName();
	void output();
	string toString();
};

