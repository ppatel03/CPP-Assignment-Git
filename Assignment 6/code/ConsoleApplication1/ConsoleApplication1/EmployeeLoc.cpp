///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : EmployeeLoc.cpp											 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//																		 //
// DESC   : EmployeeLoc.cpp contains the function implementation for	 //
//			taking the employee name and location as input and 			 //
//			gets its city location as output							 //			 
//																		 //
//																		 //
//																		 //
//////////////////////////////////////////////////////////////////////////

#include"Location.h"
#include"Employee.h"
#include<iostream>
using  std::cout;
using  std::cin;
using  std::endl;

void askInputAndDisplayCityName()
{
	Employee emp;
	Point coordinate;
	int x, y;
	string name;

	while (1)
	{
		cout << "\n\n Enter the Employee's name  : ";
		cin >> name;
		cout << " Enter X Position  (Enter -1 to quit) :  ";
		cin >> x;
		// -1 means quit
		if (x == -1 ){
			break;
		}

		cout << " Enter Y Position  (Enter -1 to quit) :  ";
		cin >> y;
		// -1 means quit
		if ( y == -1){
			break;
		}

		coordinate.setX(x);
		coordinate.setY(y);
		//creating the employee object with inputted name and location
		emp = *new Employee(name, coordinate);
		Location l;
		LOCATION loc = l.getLocation(emp.getCoordinates());

		//switch case on LOCATION enum
		switch (loc)
		{
		case NOT_FOUND: cout << emp.getName() << "'s location not found";	break;
		case NEWYORK:cout << emp.getName() << " is in New York"; break;
		case SANFRANSISCO:cout << emp.getName() << " is in San Fransisco"; break;
		case LOSANGELES:cout << emp.getName() << " is in Los Angeles"; break;
		case CHICAGO: cout << emp.getName() << " is in Chicago"; break;
		default:
			break;
		} // end of switch
	}// end of while
}


//main function
void  main()
{
	askInputAndDisplayCityName();
}
