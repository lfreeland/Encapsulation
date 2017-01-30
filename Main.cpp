#include "Student.h"
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
	std::cout << person.sendEmail("Your books are late!").message;	

	std::cout << std::endl;
}