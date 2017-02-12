#include "Student.h"
#include <iostream>
#include "stdafx.h"

Student::Student()
{
}

Student::Student(string first, string last)
{
	//can put checks here to detect for invalid names and throw an exception if error is found
	firstName = first;
	lastName = last;
}

Student::~Student()
{
}

string Student::getEmail()
{
	string first6CharactersOfFirstName = getFirstName().substr(0, 6);
	string first5CharactersOfLastName = getLastName().substr(0, 5);

	string email = first5CharactersOfLastName + first6CharactersOfFirstName + EMAIL_ENDING;

	return email;
}

string Student::getFirstName()
{
	return firstName;
}

string Student::getLastName()
{
	return lastName;
}

int Student::getYearOfGraduation()
{
	if (grade != Undefined)
	{
		return currentYear + grade;
	}

	return 0;

}

Grade Student::getGrade()
{
	return grade;
}

void Student::setGrade(Grade g)
{
	grade = g;
}

Result Student::sendEmail(string text)
{
	
	Result emailStatus;
	emailStatus = isUserValid();
	if (!emailStatus.success)
	{
		return emailStatus;
	}

	std::cout << "--------------------------------\n";
	std::cout << "Send To - " << getEmail() << "\n";
	std::cout << "Name - " << getFirstName() << " " << getLastName() << "\n";
	std::cout << "YOG - " << getYearOfGraduation() << "\n\n";
	std::cout << text << "\n";
	std::cout << "--------------------------------\n";

	emailStatus.message = "Email Has Been Sent";
	
	return emailStatus;

}

Result Student::isUserValid()
{
	Result result;
	string email = getEmail();
	
	if (email.size() < 3)
	{
		result.success = false;
		result.message = "Invalid Email";

		return result;
	}

	if (getGrade() == Undefined)
	{
		result.success = false;
		result.message = "The grade is undefined. Please set which grade the student is in.";

		return result;
	}

	if (getYearOfGraduation() == 0)
	{
		result.success = false;
		result.message = "Invalid Year Of Graduation";

		return result;
	}
	//...
	
	return result;
}