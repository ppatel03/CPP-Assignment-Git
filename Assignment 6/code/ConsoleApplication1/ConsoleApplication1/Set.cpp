///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : Set.h														 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//																		 //
// DESC   : Set.h contains the function implementation for		         //
//			setting and the booleanthe boolean vector,					 //
//			its initialization and verifying if its a member			 //			 
//																		 //
//																		 //
//																		 //
//////////////////////////////////////////////////////////////////////////

#include<vector>
#include<iostream>

#include "Set.h"
using std::vector;
using std::cout;
using std::endl;


//default constructor
Set::Set(){

}

//destructor
Set :: ~Set(){

}

//contructor accepting the vector which will keep track of values in the set 
Set::Set(vector <bool>&trackVect){
	v = *new vector<bool>(maxVectorSize);
	v = trackVect;
}

//check if the index for the vector is set to true 
bool Set::isMember(int x){
	return v[x];
}


//prints a Set
void Set::print(){
	cout << "\n The Set containing boolean vector is :-  \n";
	for (int i = 0; i < maxVectorSize; i++)
		cout << "  " << v[i];
	cout << endl;
}

//returns the union of 2 sets
Set Set::Union(Set &set){
	vector<bool> uVector(maxVectorSize);
	for (int count = 0; count < maxVectorSize; count++)
	{
		// union is simply ORing
		if (v[count] || set.v[count])
		{
			uVector[count] = true;
		}
	}
	Set uSet(uVector);
	return uSet;
}

//returns  intersection of 2 sets
Set Set::Intersection(Set &set){
	vector<bool> iVector(maxVectorSize);
	for (int count = 0; count < maxVectorSize; count++)
	{
		// intersection is simply Anding
		if (v[count] && set.v[count])
		{
			iVector[count] = true;
		}
	}
	Set iSet(iVector);
	return iSet;
}

