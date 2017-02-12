#include "stdafx.h"
#include "CollegeStudent.h"

CollegeStudent::CollegeStudent()
{
	setGrade(College);
}

CollegeStudent::CollegeStudent(string firstName, string lastName)
	:Student(firstName, lastName)
{
	setGrade(College);
}

CollegeStudent::~CollegeStudent()
{
}

string CollegeStudent::getEmail()
{
	string first2CharactersOfFirstName = getFirstName().substr(0, 2);

	string email = getLastName() + first2CharactersOfFirstName + EMAIL_ENDING;

	return email;
}

Result CollegeStudent::isUserValid()
{
	// Call the base Student's isUserValid to invoke its
	// validation logic.
	Result userValidResult = Student::isUserValid();

	// The base Student validation failed so stop immediately
	// and let the caller know.
	if (userValidResult.success == false)
	{
		return userValidResult;
	}

	string firstName = getFirstName();

	if (firstName.empty())
	{
		userValidResult.success = false;
		userValidResult.message = "The first name of the student needs to be supplied.";

		return userValidResult;
	}

	string lastName = getLastName();

	if (lastName.empty())
	{
		userValidResult.success = false;
		userValidResult.message = "The last name of the student needs to be supplied.";

		return userValidResult;
	}

	return userValidResult;
}
