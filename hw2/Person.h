#pragma once
#include <string>
#include "Date.hpp"
#include <iostream>

using std::string;
using std::ostream;


class Person
{
public:

	//default constructor prototype
	Person();	

	//copy constructor prototype
	Person(const Person& p);

	//initialization constructor prototype
	Person(const string& firstName,		
		const string& lastName, const Date& birthday);

	//accessor method prototypes
	string getFirstName() const { return firstName; };
	string getLastName() const { return lastName; };
	string getBirthDate() const { return birthday.getBirthDay(); }

	int ageDifference(const Person& p);

	~Person();

protected:

	string firstName;
	string lastName;
	Date birthday;

	friend ostream& operator << (ostream& o, const Person& p)
	{
		o << p.firstName << " " << p.lastName << 
			" is born on " << p.birthday << ".";
		return o;
	}

	friend bool operator == (const Person& p1, const Person& p2)
	{
		if (p1.firstName == p2.firstName &&
			p1.lastName == p2.lastName)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	friend bool operator < (const Person& p1, const Person& p2)
	{
		if (p1.lastName == p2.lastName)
		{
			if (p1.firstName > p2.firstName) return true;
			else return false;
		}
		else
		{
			if (p1.lastName > p2.lastName) return true;
			else return false;
		}
	}

	friend bool operator > (const Person& p1, const Person& p2)
	{
		if (p1.lastName == p2.lastName)
		{
			if (p1.firstName < p2.firstName) return true;
			else return false;
		}
		else
		{
			if (p1.lastName < p2.lastName) return true;
			else return false;
		}
	}

};

