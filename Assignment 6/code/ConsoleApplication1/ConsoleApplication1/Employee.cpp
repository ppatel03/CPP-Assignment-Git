///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : Employee.cpp												 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//																		 //
// DESC   : Employee.h contains the function implementation for			 //
//			setting the name, x and y coordinates  of the Employees		 //
//			and getting them											 //
//																		 //
//																		 //
//																		 //
//////////////////////////////////////////////////////////////////////////

#include "Point.h"
#include "Employee.h"
#include <string>
using std::string;


	//default constructor
	Employee :: Employee(){

	}

	//destructor
	Employee :: ~Employee(){

	}

	// constructor accepting two parameters - name and Point object
	Employee::Employee(string empName, Point empPoint){
		name = empName;
		p = empPoint;
	}

	//getter for name 
	string Employee::getName(){
		return name;
	}

	//setter for name
	void Employee::setName(string &empName){
		name = empName;
	}


	//getter for Point
	Point Employee::getCoordinates(){
		return p;
	}

	//setter for  Point 
	void Employee::setCoordinates(Point &empPoint){
		p = empPoint;
	}


