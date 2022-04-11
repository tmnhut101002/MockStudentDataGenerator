#include "StudentInformation.h"
StudentInformation::StudentInformation()
{
	_ID = 0;
	_fullname = FullName();
	_gpa = 0.0;
	_telephone = PhoneNumber();
	_email = Email();
	_dob = DOB();
	_address = Address();
}
StudentInformation::StudentInformation(int ID, FullName fullname, float gpa,
	PhoneNumber telephone, Email email, DOB dob, Address address)
{
	_ID = ID;
	_fullname = fullname;
	_gpa = gpa;
	_telephone = telephone;
	_email = email;
	_dob = dob;
	_address = address;
}