#pragma once
#include <string>

#define currentYear 2017

enum Grade {														//to be added to current year to find yog
	Undefined = 0, Senior, Junior, sophomore, Freshman,
};

class Student
{
public:
	Student();
	Student(std::string first, std::string last);
	~Student();
		
	bool setEmail();												//sets email based of name
	void setGrade(Grade g);											//sets grade
	bool setYog();													//sets year of graduation based of year and grade
	bool sendEmail(std::string text);									

private:
	std::string firstName;	
	std::string lastName;	
	std::string email;			
	std::string emailEnding = "@test.com";	//school's email ending
	Grade grade = Undefined;
	int yog = 0;

	bool isUserValid();						//checks to make sure student is fully filled

	

};

