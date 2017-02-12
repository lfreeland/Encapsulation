#pragma once
#include "stdafx.h"

class MiddleSchoolStudent : public Student
{

public:
	MiddleSchoolStudent();
	MiddleSchoolStudent(std::string first, std::string last);
	~MiddleSchoolStudent();

	Result sendEmail(std::string text) override;

	std::string getTwitterURL();
	void setTwitterURL(std::string newTwitterURL);

	std::string getFacebookURL();
	void setFacebookURL(std::string newFacebookURL);

private:
	
	std::string twitterURL;
	std::string facebookURL;
};