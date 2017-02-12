#pragma once
#include <string>
#include "stdafx.h"

using namespace std;

#define currentYear 2017

//to be added to current year to find yog
enum Grade {														
	Undefined = 0, Senior = 1, Junior = 2, sophomore = 3, Freshman = 4, Middle = 5, College = 6
};

struct Result {
	bool success = true;
	string message;
};

class Student
{
public:
	//school's email ending
	const string EMAIL_ENDING = "@example.com";

	Student();
	Student(string first, string last);
	~Student();
		
	//if email is empty, fill based on first and last name
	virtual string getEmail();	

	string getFirstName();							
	string getLastName();

	//if year of graduation is empty, fill based on current year and year of graduation
	int getYearOfGraduation();										

	Grade getGrade();												
	void setGrade(Grade g);											

	//sends email and returns the result of the email
	virtual Result sendEmail(string body);

protected:
	//checks to make sure student is fully filled and returns the result of the check
	virtual Result isUserValid();

private:
	string firstName;
	string lastName;

	Grade grade = Undefined;
};
