#include "stdafx.h"
#include "Student.h"
#include "CollegeStudent.h"
#include "MiddleSchoolStudent.h"
#include <iostream>

int main()
{
	//creates person and sets name to steve jobs
	Student person("steve", "jobs");

	//sets grade to sophomore	
	person.setGrade(sophomore);

	//sets email based off of name
	person.getEmail();								

	//sets year of graduation based off grade
	person.getYearOfGraduation();					

	//sends email and prints out the message result
	std::cout << person.sendEmail("Your books are late!").message << std::endl;


	CollegeStudent collegeStudent("steve", "jobs");

	std::cout << collegeStudent.sendEmail("College Student email").message << std::endl;


	MiddleSchoolStudent middleschoolStudent("steve", "jobs");

	std::cout << middleschoolStudent.sendEmail("Middle School Student email").message << std::endl;

	std::cout << std::endl;
}