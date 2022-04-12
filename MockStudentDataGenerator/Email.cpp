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
void split(string str, string delimiter, string token[]) {
	size_t pos = 0;
	int i = 0;
	while ((pos = str.find(delimiter)) != string::npos) {
		token[i] = str.substr(0, pos);
		str.erase(0, pos + delimiter.length());
		i++;
	}
}

string Email::mail(FullName a)
{
	/*
	FullName name = a.randName();
	string a1 = name.firstName();
	string a2 = name.middleName();
	string a3 = name.lastName();
	char a4 = a1.front();
	char a5 = a2.front();

	stringstream out;
	out << a4 << a5 << a3;
	string result = out.str();
	return result;
	*/

	//stringstream out;
	string result;


	result += a.firstName()[0];
	result += a.middleName()[0];
	result += a.lastName();
	/*
	string a1;
	string token[3];
	split(name, " ", token);
	for (int i = 0; i < 2; i++)
	{
		out<<token[i].front();
	}
	string result = out.str();
	*/

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

