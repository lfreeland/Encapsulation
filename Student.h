#pragma once
#include <string>

#define currentYear 2017

//to be added to current year to find yog
enum Grade {														
	Undefined = 0, Senior = 1, Junior = 2, sophomore = 3, Freshman = 4, Middle = 5, College = 6
};

struct Result {
	bool success = true;
	std::string message;
};

class Student
{
public:
	//school's email ending
	const std::string EMAIL_ENDING = "@example.com";

	Student();
	Student(std::string first, std::string last);
	~Student();
		
	//if email is empty, fill based on first and last name
	virtual std::string getEmail();											
	std::string getFirstName();									
	std::string getLastName();										
	//if year of graduation is empty, fill based on current year and year of graduation
	int getYearOfGraduation();										
	Grade getGrade();												
	void setGrade(Grade g);											
	//sends email and returns the result of the email
	virtual Result sendEmail(std::string text);

protected:
	//checks to make sure student is fully filled and returns the result of the check
	virtual Result isUserValid();

private:
	std::string firstName;
	std::string lastName;

	Grade grade = Undefined;
	int yog = 0;
};
