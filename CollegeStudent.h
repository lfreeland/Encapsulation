#pragma once
#include "stdafx.h"

class CollegeStudent : public Student
{

public:
	CollegeStudent();
	CollegeStudent(std::string first, std::string last);
	~CollegeStudent();

	std::string getEmail() override;

protected:
	//checks to make sure student is fully filled and returns the result of the check
	Result isUserValid() override;
};