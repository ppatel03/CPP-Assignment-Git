///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : Set.h														 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//																		 //
// DESC   : Set.h contains the function declaration for			         //
//			setting and the booleanthe boolean vector,					 //
//			its initialization and verifying if its a member			 //			 
//																		 //
//																		 //
//																		 //
//////////////////////////////////////////////////////////////////////////

#include<vector>
//since size requirements from 0 to 20 inclusive
#define maxVectorSize 21

using std::vector;


class Set
{
public:
	//default constructor
	Set();

	//destructor
	~Set();

	//contructor accepting the vector which will keep track of values in the set 
	Set(vector <bool>&trackVect);

	//returns  intersection of 2 sets
	Set Intersection(Set &set);

	//prints a Set
	void print();

	//check if the index for the vector is set to true 
	bool isMember(int x);

	//returns the union of 2 sets
	Set Union(Set &set);

private:
	vector <bool> v;
};


