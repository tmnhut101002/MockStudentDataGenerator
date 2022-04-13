#pragma once
#include "StudentInformation.h"
class MockStudents
{
private:
	vector<StudentInformation> vt_students;
public:
	vector<StudentInformation> addListStudents(const char*, int);
};

