///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : main.cpp													 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//																		 //
// DESC   : contains the main function which  creates the object of	     //
//			CAI class and call its function to start the  test			 //
//			and prints the summary of test performance.					 //
//																		 //
//////////////////////////////////////////////////////////////////////////


#include "CAI.h"
#include <conio.h>
#include <iostream>

using  std::cout;
using  std::endl;



int main(){
	//creating the object of class CAI
	CAI  cai;
	//call the appropriate method to start the test
	cai.startTest();

	
	_getch();
	return 0;
}