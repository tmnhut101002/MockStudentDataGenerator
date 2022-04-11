#include "FullName.h"
FullName::FullName()
{
	_firstName = "";
	_middleName = "";
	_lastName = "";
}
FullName::FullName(string first_name, string middle_name, string last_name)
{
	_firstName = first_name;
	_middleName = middle_name;
	_lastName = last_name;
}
vector<string> FullName::readName(const char* file_name)
{
	vector<string> vt_name;
	ifstream ifs;
	ifs.open(file_name, ios::in);
	while (!ifs.eof())
	{
		string temp;
		getline(ifs, temp);
		vt_name.push_back(temp);
	}
	return vt_name;
}