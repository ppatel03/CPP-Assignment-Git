///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : Location.h												 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//																		 //
// DESC   : Location.h contains the function declaration for		     //
//			setting and the booleanthe boolean vector,					 //
//			its initialization and verifying if its a member			 //			 
//																		 //
//																		 //
//																		 //
//////////////////////////////////////////////////////////////////////////


#ifndef LOCATION_H                      
#define LOCATION_H

#include"Set.h"
#include"Point.h"

//locations as per the requirement
enum LOCATION      { 	NOT_FOUND, 	NEWYORK,	SANFRANSISCO,	LOSANGELES,	CHICAGO };

class Location
{

public:
	//gets the Location 
	LOCATION getLocation(Point &p);

	//default constructor
	Location();

	//destructor
	~Location();


private :
	
	//x coordinates for new york
	Set newyorkX;  

	//y coordinates for new york
	Set newyorkY;    

	//x coordinates for san fransisco
	Set sanfransiscoX;  

	//y coordinates for san fransisco
	Set sanfransiscoY;   

	//x coordinates for los angeles
	Set losangelesX;  

	//y coordinates for los angeles
	Set losangelesY;  

	//x coordinates for chicago
	Set chicagoX;

	//y coordinates for chicago
	Set chicagoY;  

	
};

#endif