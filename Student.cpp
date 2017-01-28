#include "Student.h"
#include <iostream>

Student::Student()
{
}

Student::Student(std::string first, std::string last)
{
	//can put checks here to detect for invalid names and throw an acception if error is found
	firstName = first;
	lastName = last;
}

Student::~Student()
{
}

void Student::setGrade(Grade g)	
{
	grade = g;
}

bool Student::setYog()
{
	if (grade != Undefined)
	{
		yog = currentYear + grade;
		return true;
	}

	return false;
}

bool Student::setEmail()
{
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

	return true;
}

bool Student::sendEmail(std::string text)
{
	if (!isUserValid())
		return false;

	std::cout << "Send To - " << email << "\n";
	std::cout << "Name - " << firstName << " " << lastName << "\n";
	std::cout << "YOG - " << yog << "\n\n";
	std::cout << text << "\n";

	return true;

}

bool Student::isUserValid()
{
	if (email.size() < 3)
		return false;
	if (grade == Undefined)
		return false;
	if (yog == 0)
		return false;

	//...
	
	return true;
}