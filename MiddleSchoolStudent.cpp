#include "stdafx.h"
#include "MiddleSchoolStudent.h"

MiddleSchoolStudent::MiddleSchoolStudent()
{
	setGrade(Middle);
}

MiddleSchoolStudent::MiddleSchoolStudent(std::string first, std::string last)
{
	Student(first, last);
	setGrade(Middle);
}

MiddleSchoolStudent::~MiddleSchoolStudent()
{
}

Result MiddleSchoolStudent::sendEmail(std::string text)
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
	std::cout << text << "\n";
	std::cout << "--------------------------------\n";

	emailStatus.message = "Email Has Been Sent";

	return emailStatus;
}

std::string MiddleSchoolStudent::getTwitterURL()
{
	return twitterURL;
}

void MiddleSchoolStudent::setTwitterURL(std::string newTwitterURL)
{
	twitterURL = newTwitterURL;
}

std::string MiddleSchoolStudent::getFacebookURL()
{
	return facebookURL;
}

void MiddleSchoolStudent::setFacebookURL(std::string newFacebookURL)
{
	facebookURL = newFacebookURL;
}
