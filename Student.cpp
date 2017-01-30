#include "Student.h"
#include <iostream>

Student::Student()
{
}

Student::Student(std::string first, std::string last)
{
	//can put checks here to detect for invalid names and throw an exception if error is found
	firstName = first;
	lastName = last;
}

Student::~Student()
{
}

std::string Student::getEmail()
{
	if (email.size() != 0)
	{
		return email;
	}

	int x{ 0 };
	while (x < 5)
	{
		if (lastName[x] == '\0')
			break;
		
		email.push_back(lastName[x]);
		x++;
	}
	
	int i = 0;
	while (x < 6)
	{
		if (firstName[i] == '\0')
			break;
		
		email.push_back(firstName[i]);
		x++;
		i++;
	}
	for (int i = 0; i < emailEnding.size(); i++)
	{
		email.push_back(emailEnding[i]);
	}

	return email;
}

std::string Student::getFirstName()
{
	return firstName;
}

std::string Student::getLastName()
{
	return lastName;
}

int Student::getYearOfGraduation()
{
	if (grade != Undefined)
	{
		yog = currentYear + grade;
		return yog;
	}

	return yog;

}

Grade Student::getGrade()
{
	return grade;
}

void Student::setGrade(Grade g)
{
	grade = g;
}

Result Student::sendEmail(std::string text)
{
	
	Result emailStatus;
	emailStatus = isUserValid();
	if (!emailStatus.success)
	{
		return emailStatus;
	}

	std::cout << "--------------------------------\n";
	std::cout << "Send To - " << email << "\n";
	std::cout << "Name - " << firstName << " " << lastName << "\n";
	std::cout << "YOG - " << yog << "\n\n";
	std::cout << text << "\n";
	std::cout << "--------------------------------\n";

	emailStatus.message = "Email Has Been Sent";
	
	return emailStatus;

}

Result Student::isUserValid()
{
	Result result;
	
	if (email.size() < 3)
	{
		result.success = false;
		result.message = "Invalid Email";
	}
	if (grade == Undefined)
	{
		result.success = false;
		result.message = "Invalid Grade";
	}
	if (yog == 0)
	{
		result.success = false;
		result.message = "Invalid Year Of Graduation";
	}
	//...
	
	return result;
}