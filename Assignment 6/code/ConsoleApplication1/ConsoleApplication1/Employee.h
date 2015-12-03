///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : Employee.h												 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//																		 //
// DESC   : Employee.h contains the function declaration for			 //
//			setting the name, x and y coordinates  of the Employees		 //
//			and getting them											 //
//																		 //
//																		 //
//																		 //
//////////////////////////////////////////////////////////////////////////

#include "Point.h"
#include <string>
using std::string;

class Employee
{
public:
	//default constructor
	Employee();   

	//destructor
	~Employee();         

	// constructor accepting two parameters - name and Point object
	Employee(string name, Point p);  


	//getter for name 
	string getName();

	//setter for name
	void setName(string &name);

	//getter for Point
	Point getCoordinates();          
	
	//setter for  Point 
	void setCoordinates(Point &p);    
     

private:
	//employee name
	string name;

	//employee location
	Point p;
};