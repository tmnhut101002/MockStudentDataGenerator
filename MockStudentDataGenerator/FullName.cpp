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
FullName FullName::randName()
{
	FullName result;
	vector<string> vt_first_name = readName("ho.txt");
	vector<string> vt_middle_name = readName("tenlot.txt");
	vector<string> vt_last_name = readName("ten.txt");

	string first_name = vt_first_name[rand() % (vt_first_name.size())];
	string mid_name = vt_middle_name[rand() % (vt_middle_name.size())];
	string last_name = vt_last_name[rand() % (vt_last_name.size())];
	result._firstName = first_name;
	result._middleName = mid_name;
	result._lastName = last_name;

	return result;
}

void FullName::output()
{
	cout << this->_firstName << " " << this->_middleName << " " << this->_lastName;
}

string FullName::toString()
{
	stringstream out;
	out << this->_firstName << " " << this->_middleName << " " << this->_lastName;
	string result = out.str();
	return result;

}
