#include"MockStudents.h"

vector<StudentInformation> MockStudents::addListStudents(const char* filename, int num_student)
{
	vector<StudentInformation> result;
	StudentInformation a;
	ofstream ofs;
	ofs.open(filename, ios::app);
	for (int i = 0; i < num_student; i++)
	{
		StudentInformation new_st;
		new_st = a.randStudent();
		result.push_back(new_st);
		new_st.writeFile(ofs);
	}
	return result;
}

int main()
{
	srand(time(NULL));
	int res = rand() % (10 - 5 + 1) + 5;
	cout << res << endl;
	MockStudents result;
	vector<StudentInformation> vt_st = result.addListStudents("students.txt", res);
	for (int i = 0; i < vt_st.size(); i++)
	{
		vt_st[i].output();
		cout << endl << "=============================================" << endl;
	}
	return 0;
}