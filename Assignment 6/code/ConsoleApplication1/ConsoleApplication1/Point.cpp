///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : Point.cpp													 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//																		 //
// DESC   : Point.cpp contains the function implementation for			 //
//			setting the x and y coordinates and getting them		     //
//																		 //
//																		 //
//																		 //
//////////////////////////////////////////////////////////////////////////

#include "Point.h"

//default constructor
Point :: Point(){
	x = y = 0;
}

//destructor
Point:: ~Point(){

}

// constructor accepting two parameters
Point :: Point(int xCoordinate, int yCoordinate){
	x = xCoordinate;
	y = yCoordinate;
}

//getter for x coordinate
int Point::getX(){
	return x;
}

//getter for y coordinate
int Point::getY(){
	return y;
}

//setter for x coordinate
void Point :: setX(int xCoordinate){
	x = xCoordinate;
}

//setter for y coordinate
void Point :: setY(int yCoordinate){
	y = yCoordinate; 
}

