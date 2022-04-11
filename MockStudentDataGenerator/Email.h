#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class Email
{
private:
	string _localPart;
	string _domain;
public:
	Email();
	Email(string, string);
	string localPart() { return _localPart; }
	string domain() { return _domain; }
	void setLocalPart(string value) { _localPart = value; }
	void setDomain(string value) { _domain = value; }

	vector<string> readEmail(const char*);
};

