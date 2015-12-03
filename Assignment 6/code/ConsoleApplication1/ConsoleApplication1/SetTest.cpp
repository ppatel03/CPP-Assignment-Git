///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : SetTest.cpp												 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//																		 //
// DESC   : SetTest.cpp is aimed to test the Set class for		         //
//			setting and the booleanthe boolean vector,					 //
//			its initialization and verifying if its a member			 //			 
//																		 //
//																		 //
//																		 //
//////////////////////////////////////////////////////////////////////////


#include"Set.h"
#include<ctime>
#include <iostream>
using std::cout;
using std::endl;
using std::cin;


void testSetClass()
{
	vector<bool> vector1(maxVectorSize);
	bool boolArray1[] =
	{ true, false, true, true, true, true, false, false, false, false, false, 
		false, false, false, true, false, true, false, false, false, false };


	vector<bool> vector2(maxVectorSize);
	bool boolArray2[] =
	{ true, false, false, false, false, false , false, false, false, false, false,
	false, false, false, true, false, true,  true,  true,  true, true };


	// initializing the two vectors for set1 and set2 respectively
	for (int i = 0; i < maxVectorSize; i++)
	{		
		vector1[i] = boolArray1[i];
		vector2[i] = boolArray2[i];
	}

	Set set1(vector1);

	//displaying
	cout << "Printing the Set-1 containing vector-1";
	set1.print();

	Set set2(vector2);

	//displaying
	cout << "\nPrinting vector 2";
	set2.print();

	cout << endl;

	cout << "\n ---------------- isMember Utility --------------- :  \n\n";
	for (int i = 0; i < maxVectorSize; i++)
	{
		if (set1.isMember(i))
		{
			cout << i << "  is a Member of Set 1 " << endl;
		}
		else {
			cout << i << "  is not a Member Set 1 " << endl;

		}
	}

	cout << endl;

	Set set3;
	cout << "\n ------------------------- Union -----------------------: \n";
	//taking union 
	set3 = set1.Union(set2);
	set3.print();

	cout << endl;

	cout << "\n ------------------------ Intersection -----------------: \n";
	//taking intersection 
	set3 = set1.Intersection(set2);
	set3.print();


	cin.get();
}

/*
void main()
{
	testSetClass();
}

*/