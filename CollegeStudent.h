#pragma once
#include "stdafx.h"

class CollegeStudent : public Student
{

public:
	CollegeStudent();
	CollegeStudent(string firstName, string lastName);
	~CollegeStudent();

	string getEmail() override;

protected:
	//checks to make sure student is fully filled and returns the result of the check
	Result isUserValid() override;
};