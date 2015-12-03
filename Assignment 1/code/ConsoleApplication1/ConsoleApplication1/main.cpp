///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : main.cpp													 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//																		 //
// DESC   : contains the main function which takes the number and its	 // 
//			base as the input from the user. It creates the object of	 //
//			Convert class to check if the input number is valid and		 //
//			gets the decimal value of the number.						 //
//																		 //
//////////////////////////////////////////////////////////////////////////

#include "convert.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	//declaring the input variables
	int number, base;
	cout << "Enter the number " << endl;
	//accepting the input number
	cin >> number;
	cout << "Enter the base" << endl;
	//accepting the input base
	cin >> base;

	//creating an object of class convert
	Convert convert(number, base);

	//check if the input is valid by verifing each digit of the input number is less than its base
	if (convert.isValidInput()){
		//converts the input number of a particular base to its equivalent decimal value
		convert.getDecimalValueOftheNumber();
		//prints the output
		convert.display();
	}
	else {
		cout << "Error : The input number is invalid" << endl;
	}

	//to avoid the console from disappearing after displaying the output
	getchar();
	getchar();

	return 0;
}
