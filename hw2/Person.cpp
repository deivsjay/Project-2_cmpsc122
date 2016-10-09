#include "stdafx.h"
#include "Person.h"
#include <string>

using std::string;

//default constructor implementation
Person::Person()		
{
	firstName = "";
	lastName = "";
	birthday;
}

//copy constructor implementation
Person::Person(const Person& p)
{
	this->firstName = p.firstName;
	this->lastName = p.lastName;
	birthday = p.birthday;
}

//initialization constructor implementation
Person::Person(const string& firstName,
	const string& lastName, const Date& birthday)
	:firstName(firstName), lastName(lastName), 
	birthday(birthday)
{
}

//age comparison
int Person::ageDifference(const Person& p)
{
//	int daysApart;
	if (this->birthday == p.birthday)
	{
		return 0;
	}
	else if (this->birthday > p.birthday)
	{
		return birthday - p.birthday;
	}
	else
	{
		return -(p.birthday - this->birthday);
	}
}


Person::~Person()
{
}
