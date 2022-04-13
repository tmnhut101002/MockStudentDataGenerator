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
void StudentInformation::output()
{
	cout << "Student: " << this->_ID<<" - ";
	this->_fullname.output();
	cout << endl << "GPA: " << _gpa;
	cout << endl << "Telephone: ";
	this->_telephone.output();
	cout << endl << "Email: ";
	this->_email.output();
	cout << endl << "DOB: ";
	this->_dob.output();
	cout << endl << "Address: ";
	this->_address.output();
}

void StudentInformation::output1()
{
	cout << this->_ID << " - ";
	this->_fullname.output();
	cout << " , ";
	cout << "GPA: " << _gpa;
}


StudentInformation StudentInformation::randStudent()
{
	StudentInformation result;
	result._ID = 1000000 + rand() % (2900000 - 1000000 + 1);
	result._address = this->_address.randAddress();
	result._fullname = this->_fullname.randName();
	result._gpa = rand() / float((RAND_MAX)) * 10.0;
	result._telephone = this->_telephone.randPhoneNum();
	result._email = this->_email.randEmail(result._fullname);
	result._dob = this->_dob.randDOB();
	result._address = this->_address.randAddress();
	return result;
}
void StudentInformation::writeFile(ofstream& ofs)
{
	ofs << "Student: " << this->_ID << " - ";
	ofs << this->_fullname.toString();
	ofs << endl << "GPA: " << _gpa;
	ofs << endl << "Telephone: ";
	ofs << this->_telephone.toString();
	ofs << endl << "Email: ";
	ofs << this->_email.toString();
	ofs << endl << "DOB: ";
	ofs << this->_dob.toString();
	ofs << endl << "Address: ";
	ofs << this->_address.toString();
	ofs << endl;

}
float StudentInformation::gpaStudent()
{
	float result = this->_gpa;
	return result;
}
