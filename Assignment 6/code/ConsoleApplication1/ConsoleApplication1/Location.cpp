///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : Location.cpp												 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//																		 //
// DESC   : Location.cpp contains the function implementation for	     //
//			setting and the booleanthe boolean vector,					 //
//			its initialization and verifying if its a member			 //			 
//																		 //
//																		 //
//																		 //
//////////////////////////////////////////////////////////////////////////



#include"Location.h"


//gets the Location 
LOCATION Location::getLocation(Point &p){
	//bounds check
	if (p.getX() < 0 || p.getX() >= maxVectorSize || p.getY() >= maxVectorSize || p.getY() < 0)
	{
		return NOT_FOUND;
	}
	else if (losangelesX.isMember(p.getX()) && losangelesY.isMember(p.getY()))
	{
		return LOSANGELES;
	}
	else if (chicagoX.isMember(p.getX()) && chicagoY.isMember(p.getY()))
	{
		return CHICAGO;
	} 
	else if (sanfransiscoX.isMember(p.getX()) && sanfransiscoY.isMember(p.getY()))
	{
		return SANFRANSISCO;
	}
	else if (newyorkX.isMember(p.getX()) && newyorkY.isMember(p.getY()))
	{
		return NEWYORK;
	}
	return NOT_FOUND;
}

//default constructor
Location::Location(){
	bool boolArray1[] =
	{ /*true for new york */ true, true, true, true, true,true, /*true for new york */  false, false, false, false, false,
	false, false, false, false, false, false, false, false, false, false };

	bool boolArray2[] =
	{false, false, false, false, false, false, /*true for san francisco */  true, true, true, true, true,  /*true for san francisco */ 
	false, 	false, false, false, false, false, false, false, false, false };

	bool boolArray3[] =
	{ false, false, false, false, false, false, false, false, false, false, false,  /*true for LA */
	true, true, true, true, true, /*true for LA */  false, false, false, false, false };

	bool boolArray4[] =
	{ false, false, false, false, false, false, false, false, false, false, false,  
	false, false, false, false, false, /*true for Chicago */ true, true, true, true, true/*true for Chicago */  };

	vector<bool> vect1(maxVectorSize);
	vector<bool> vect2(maxVectorSize);
	vector<bool> vect3(maxVectorSize);
	vector<bool> vect4(maxVectorSize);

	//For  NewYork
	for (int i = 0; i < maxVectorSize; i++) 
	{
		vect1[i] = boolArray1[i];
	}

	//For  san francisco 
	for (int i = 0; i < maxVectorSize; i++)
	{
		vect2[i] = boolArray2[i];
	}

	//For LA
	for (int i = 0; i < maxVectorSize; i++)
	{
		vect3[i] = boolArray3[i];
	}

	//For chincago
	for (int i = 0; i < maxVectorSize; i++)
	{
		vect4[i] = boolArray4[i];
	}


	newyorkX = *new Set(vect1);
	newyorkY = *new Set(vect1);

	sanfransiscoX = *new Set(vect2);
	sanfransiscoY = *new Set(vect2);
	
	losangelesX = *new Set(vect3);
	losangelesY = *new Set(vect3);
	
	chicagoX = *new Set(vect4);
	chicagoY = *new Set(vect4);
}

//destructor
Location::~Location(){

}




