#include"MockStudents.h"

vector<StudentInformation> MockStudents::addListStudents(const char* filename, int num_student)
{
	vector<StudentInformation> result;
	StudentInformation a;
	ofstream ofs;
	ofs.open(filename);
	for (int i = 0; i < num_student; i++)
	{
		StudentInformation new_st;
		new_st = a.randStudent();
		result.push_back(new_st);
		new_st.writeFile(ofs);
	}
	return result;
}

