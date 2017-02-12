#include "stdafx.h"
#include "MiddleSchoolStudent.h"

MiddleSchoolStudent::MiddleSchoolStudent()
{
	setGrade(Middle);
}

MiddleSchoolStudent::MiddleSchoolStudent(string firstName, string lastName)
	:Student(firstName, lastName)
{
	setGrade(Middle);
}

MiddleSchoolStudent::~MiddleSchoolStudent()
{
}

Result MiddleSchoolStudent::sendEmail(string body)
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
	std::cout << "Twitter URL - " << getTwitterURL() << "\n\n";
	std::cout << "Facebook URL - " << getFacebookURL() << "\n\n";
	std::cout << body << "\n";
	std::cout << "--------------------------------\n";

	emailStatus.message = "Email Has Been Sent";

	return emailStatus;
}

string MiddleSchoolStudent::getTwitterURL()
{
	return twitterURL;
}

void MiddleSchoolStudent::setTwitterURL(string newTwitterURL)
{
	twitterURL = newTwitterURL;
}

string MiddleSchoolStudent::getFacebookURL()
{
	return facebookURL;
}

void MiddleSchoolStudent::setFacebookURL(string newFacebookURL)
{
	facebookURL = newFacebookURL;
}
