///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : Point.h													 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//																		 //
// DESC   : Point.cpp contains the function declaration for				 //
//			setting the x and y coordinates and getting them		     //
//																		 //
//																		 //
//																		 //
//////////////////////////////////////////////////////////////////////////

#ifndef POINT_H    
#define POINT_H

class Point
{

public:
	//default constructor
	Point();  

	//destructor
	~Point();     

	// constructor accepting two parameters
	Point(int x, int y);  


	//getter for x coordinate
	int getX();

	//getter for y coordinate
	int getY();

	//setter for x coordinate
	void setX(int x);    

	//setter for y coordinate
	void setY(int y);  
           

private:
	int x;
	int y;
};

#endif