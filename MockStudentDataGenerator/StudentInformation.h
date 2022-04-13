#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "FullName.h"
#include "PhoneNumber.h"
#include "Email.h"
#include "DOB.h"
#include "Address.h"

using namespace std;

class StudentInformation
{
private:
	int _ID;
	FullName _fullname;
	float _gpa;
	PhoneNumber _telephone;
	Email _email;
	DOB _dob;
	Address _address;
public:
	StudentInformation();
	StudentInformation(int, FullName, float, PhoneNumber, Email, DOB, Address);
	void output();
	void output1();
	StudentInformation randStudent();
	void writeFile(ofstream&);
	float gpaStudent();

};

