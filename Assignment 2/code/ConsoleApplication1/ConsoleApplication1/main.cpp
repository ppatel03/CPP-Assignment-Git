///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : main.cpp													 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//																		 //
// DESC   : contains the main function which  creates the object of	     //
//			Wporker class and call its function to accept employee		 //
//			pay code and process the pay and display the bar graph		 //
//																		 //
//////////////////////////////////////////////////////////////////////////


#include "Worker.h"
#include <conio.h>

int main(){
	//creating the object of class Worker
	Worker worker;
	//takes the paycode from the user and process the pay and plots the bar graph 
	worker.askPayCodesAndCalculateWageForEachEmployeeType();
	//to avoid the console from disappearing after displaying the output

	getchar();
	getchar();
	return 0;
}