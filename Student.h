#pragma once
#include <string>

#define currentYear 2017

//to be added to current year to find yog
enum Grade {														
	Undefined = 0, Senior = 1, Junior = 2, sophomore = 3, Freshman = 4,
};

struct Result {
	bool success = true;
	std::string message;
};

class Student
{
public:
	Student();
	Student(std::string first, std::string last);
	~Student();
		
	//if email is empty, fill based on first and last name
	std::string getEmail();											
	std::string getFirstName();									
	std::string getLastName();										
	//if year of graduation is empty, fill based on current year and year of graduation
	int getYearOfGraduation();										
	Grade getGrade();												
	void setGrade(Grade g);											
	//sends email and returns the result of the email
	Result sendEmail(std::string text);									

private:
	std::string firstName;	
	std::string lastName;	
	std::string email;			
	//school's email ending
	std::string emailEnding = "@example.com";
	Grade grade = Undefined;
	int yog = 0;

	//checks to make sure student is fully filled and returns the result of the check
	Result isUserValid();
};
