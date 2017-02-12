#pragma once
#include "stdafx.h"

class MiddleSchoolStudent : public Student
{

public:
	MiddleSchoolStudent();
	MiddleSchoolStudent(string firstName, string lastName);
	~MiddleSchoolStudent();

	Result sendEmail(string body) override;

	string getTwitterURL();
	void setTwitterURL(string newTwitterURL);

	string getFacebookURL();
	void setFacebookURL(string newFacebookURL);

private:
	
	string twitterURL;
	string facebookURL;
};