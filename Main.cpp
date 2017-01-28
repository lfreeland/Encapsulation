#include "Student.h"

int main()
{
	Student person("steve", "jobs");				//creates person and sets name to steve jobs
	person.setGrade(sophomore);						//sets grade to sophomore	
	person.setEmail();								//sets email based off of name
	person.setYog();								//sets year of graduation based off grade
	person.sendEmail("Your books are late!");		//prints email with information and message
}