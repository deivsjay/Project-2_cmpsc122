// hw2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	//example of default constructor
	Person nobody;
	cout << "The variable nobody should have no name and a birthday of 01/01/2000:\n" << 
		nobody << endl;

	//example of initialization constructor
	Person nic("Nicholas", "Rase", Date(2, 13, 1993));
	Person div("Divya", "Jagadeesh", Date(8, 28, 1994));
	cout << endl << nic << endl << div << endl;

	//example of copy constructor
	Person copycat(nic);
	cout << "\nThe variable copycat should have the same name and birthday as Nic:\n" <<
		copycat << endl;

	//example of accessor methods
	cout << "\nDiv's first name is " << div.getFirstName() << "." << endl;
	cout << "Nic's last name is " << nic.getLastName() << "." << endl;
	cout << "Div's birthday is " << div.getBirthDate() << "." << endl;

	//compute age difference
	cout << endl << nic.getFirstName() << " is " << nic.ageDifference(div) 
		<< " days older than " << div.getFirstName() << "." << endl;

	//another example for computing age difference
	Person viki("Vinay", "Naidu", Date(8, 27, 1995));
	cout << endl << div.getFirstName() << " is " << div.ageDifference(viki) << 
		" days older than " << viki.getFirstName() << "." << endl;

	//age difference between me and the seester
	Person bhavs("Bhavya", "Jagadeesh", Date(11, 28, 1995));
	cout << endl << div.getFirstName() << " is " << div.ageDifference(bhavs) <<
		" days older than " << bhavs.getFirstName() << "." << endl;

	return 0;
}

