#include "Address.h"
Address::Address()
{
	_number = 0;
	_street = "";
	_ward = "";
	_district = "";
}
Address::Address(int num, string st, string ward, string dist)
{
	_number = num;
	_street = st;
	_ward = ward;
	_district = ward;
}
vector<string> Address::readAddress(const char* file_name)
{
	vector<string> vt_add;
	ifstream ifs;
	ifs.open(file_name, ios::in);
	while (!ifs.eof())
	{
		string temp;
		getline(ifs, temp);
		vt_add.push_back(temp);
	}
	return vt_add;
}
Address Address::randAddress()
{
	Address result;
	vector<string> vt_street = this->readAddress("tenduong.txt");
	vector<string> vt_ward = this->readAddress("phuong.txt");
	vector<string> vt_district = this->readAddress("quan.txt");
	int num = 1 + rand() % (100);
	string street = vt_street[rand() % (vt_street.size())];
	string ward = vt_ward[rand() % (vt_ward.size())];
	string district = vt_district[rand() % (vt_district.size())];

	result._number = num;
	result._street = street;
	result._ward = ward;
	result._district = district;
	//result = to_string(num) + ", " + street + ", " + ward + " Ward, " + district + " District, TP HCM";
	return result;
}
void Address::output()
{
	cout << this->_number << ", " << this->_street << ", " << this->_ward << " Ward, " << this->_district << " District, TP HCM";
}
string Address::toString()
{
	stringstream out;
	out << this->_number << ", " << this->_street << ", " << this->_ward << " Ward, " << this->_district << " District, TP HCM";
	string result = out.str();
	return result;

}