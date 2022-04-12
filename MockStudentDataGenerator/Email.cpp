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
Email Email::randEmail()
{
	Email result;
	vector<string> vt_domain = readEmail("domain.txt");
	string domain = vt_domain[rand() % (vt_domain.size())];
	result._domain = domain;
	result._localPart = "xxxxxxxxxx";
	return result;
}

void Email::output()
{
	cout << this->_localPart << "@" << this->_domain;
}