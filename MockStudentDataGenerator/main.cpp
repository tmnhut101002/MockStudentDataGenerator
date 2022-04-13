#include"MockStudents.h"

int main()
{
	srand(time(NULL));
	int res = rand() % (10 - 5 + 1) + 5;
	float sum = 0;
	MockStudents result;
	vector<StudentInformation> vt_st = result.addListStudents("students.txt", res);


	for (int i = 0; i < vt_st.size(); i++)
	{
		sum += vt_st[i].gpaStudent();
	}

	float result1 = sum * 1.0 / vt_st.size();
	cout << "Average GPA :  " << result1 << endl;

	for (int i = 0; i < vt_st.size(); i++)
	{
		if (vt_st[i].gpaStudent() > result1)
		{
			vt_st[i].output1();
			cout << endl;
		}
	}

	return 0;
}