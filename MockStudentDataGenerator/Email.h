#pragma once
#include <iostream>
#include <string>

using namespace std;

class Email
{
private:
	string _localPart;
	string _domain;
public:
	Email(string, string);
	string localPart() { return _localPart; }
	string domain() { return _domain; }
	void setLocalPart(string value) { _localPart = value; }
	void setDomain(string value) { _domain = value; }
};

