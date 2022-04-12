#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include "StudentInformation.h"
class MockStudents
{
private:
	vector<StudentInformation> vt_students;
public:
	vector<StudentInformation> addListStudents(const char*, int);
};

