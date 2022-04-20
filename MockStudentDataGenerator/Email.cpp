#include "Email.h"
Email::Email()
{
	_localPart = "";
	_domain = "";
}
Email::Email(string local_part, string domain)
{
	_localPart = local_part;
	_domain = domain;
}

vector<string> Email::readEmail(const char* file_name)
{
	vector<string> vt_domain;
	ifstream ifs;
	ifs.open(file_name, ios::in);
	while (!ifs.eof())
	{
		string temp;
		getline(ifs, temp);
		vt_domain.push_back(temp);
	}
	return vt_domain;
}

string Email::mail(FullName a)
{
	string result;

	result += tolower(a.firstName()[0]);
	result += tolower(a.middleName()[0]);
	result += tolower(a.lastName()[0]);
	for (int i = 1; i < a.lastName().size(); i++)
	{
		result += a.lastName()[i];
	}

	return result;

}

Email Email::randEmail(FullName a)
{
	Email result;
	vector<string> vt_domain = readEmail("domain.txt");
	string domain = vt_domain[rand() % (vt_domain.size())];
	result._domain = domain;
	result._localPart = mail(a);
	return result;
}

void Email::output()
{
	cout << this->_localPart << "@" << this->_domain;
}

string Email::toString()
{
	stringstream out;
	out << this->_localPart << "@" << this->_domain;
	string result = out.str();
	return result;
}

