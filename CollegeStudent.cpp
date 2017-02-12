#include "stdafx.h"
#include "CollegeStudent.h"

CollegeStudent::CollegeStudent()
{
	setGrade(College);
}

CollegeStudent::CollegeStudent(std::string first, std::string last)
{
	Student(first, last);
	setGrade(College);
}

CollegeStudent::~CollegeStudent()
{
}

std::string CollegeStudent::getEmail()
{
	std::string first2CharactersOfFirstName = getFirstName().substr(0, 2);

	std::string email = getLastName() + first2CharactersOfFirstName + EMAIL_ENDING;

	return email;
}

Result CollegeStudent::isUserValid()
{
	Result userValidResult = Student::isUserValid();

	// The base Student validation failed so stop immediately
	// let the caller know.
	if (userValidResult.success == false)
	{
		return userValidResult;
	}

	std::string firstName = getFirstName();

	if (firstName.empty())
	{
		userValidResult.success = false;
		userValidResult.message = "The first name of the student needs to be supplied.";

		return userValidResult;
	}

	std::string lastName = getLastName();

	if (lastName.empty())
	{
		userValidResult.success = false;
		userValidResult.message = "The last name of the student needs to be supplied.";

		return userValidResult;
	}

	return userValidResult;
}
