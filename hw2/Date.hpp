#pragma once
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

class Date
{
public:

	//default constructor
	Date()
	{
		month = 1;
		day = 1;
		year = 2000;
	}

	//copy constructor
	Date(const Date& birthday)
	{
		month = birthday.month;
		day = birthday.day;
		year = birthday.year;
	}

	//initialization constructor 
	Date(const int& month, const int& day, const int& year)
		:month(month), day(day), year(year)
	{
	}

	//accessor method
	string getBirthDay() const
	{
		string birthday = to_string(month) + "/" +
			to_string(day) + "/" + to_string(year);
		return birthday;
	}

	~Date()
	{
	}

protected:

	int month;
	int day;
	int year;

	friend ostream& operator << (ostream& o, const Date& birthday)
	{
		o << birthday.month << "/" <<
			birthday.day << "/" <<
			birthday.year;
		return o;
	}

	friend bool operator == (const Date& bday1, const Date& bday2)
	{
		if (bday1.year == bday2.year &&
			bday1.month == bday2.month &&
			bday1.day == bday2.day)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	friend bool operator > (const Date& bday1, const Date& bday2)
	{
		if (bday1.year > bday2.year ||
			(bday1.year == bday2.year && bday1.month < bday2.month) ||
			(bday1.year == bday2.year && bday1.month == bday2.month && bday1.day < bday2.day)) 
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	friend bool operator < (const Date& bday1, const Date& bday2)
	{
		if (bday1.year < bday2.year ||
			(bday1.year == bday2.year && bday1.month > bday2.month) ||
			(bday1.year == bday2.year && bday1.month == bday2.month && bday1.day > bday2.day))
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	friend int operator - (const Date& bday1, const Date& bday2)
	{

		int daysInMonth[12] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
		int dayForbday1, dayForbday2;

		dayForbday1 = daysInMonth[bday1.month - 1] + bday1.day;
		dayForbday2 = daysInMonth[bday2.month - 1] + bday2.day;

		return (bday2.year - bday1.year) * 365 + (dayForbday2 - dayForbday1);

	}

};

