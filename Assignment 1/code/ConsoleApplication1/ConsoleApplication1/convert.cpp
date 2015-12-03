
///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : convert.cpp												 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//																		 //
// DESC   : Convert.cpp contains the implementation of the methods       //
//          declared in Convert.h. It contains the function to determine //
//			whether the input is valid. It contains the function to		 //
//			convert the number belonging to any base to decimal base.	 //
//			It also contains getters and setter methods.				 //
//																		 //
//////////////////////////////////////////////////////////////////////////

#include "convert.h"
#include <iostream>
using namespace std;

//parameterized constructor to initialize the number and its base during object creation
Convert::Convert(int number, int base){
	setNumber(number);
	setBase(base);
	setDecimalNumber(0);
}

//getter for number
int Convert::getNumber(){
	return number;
}

//setter for number
void Convert::setNumber(int num){
	number = num;
}

//getter for base
int Convert::getBase(){
	return base;
}

//setter for base
void Convert::setBase(int inputBase){
	base = inputBase;
}

//getter for decimal number
int Convert::getDecimalNumber(){
	return decimalNumber;
}

//setter for base
void Convert::setDecimalNumber(int decimal){
	decimalNumber = decimal;
}

//verfiying whether the input is valid using the validation of digit is less than the base
bool Convert::isValidInput(){
	//store the number temporarily since we are performing the division and modulo operation on the input number
	int tempNumber = number;

	while (tempNumber > 0){
		//get the digit using modulo
		int remainder = tempNumber % 10;

		// check if input number is valid by verfiying the fetched digit is less than than the base
		if (remainder >= base){
			return false;
		}
		else {
			// divide to get the next digit after modulo
			tempNumber = tempNumber / 10;
		}
	}
	return true;
}

// get the value of the number containing powers
int Convert :: getValueOfNumberWithPowers(int number, int power){
	//initialize to the value of 1 since anything to power 0 is 1
	int value = 1;
	int i = power;
	//make sure that the power is more than 0
	while (i > 0){
		value *= number;
		i= i-1;
	}	
	return value;
}

//converts number from any base  to decimal
int Convert::getDecimalValueOftheNumber(){
	int tempNumber = number;
	// the position of the digit
	int digit = 0;

	while (tempNumber > 0){
		//get the digit using modulo
		int remainder = tempNumber % 10;
		//the value will ne evaluated by multiplying the digit with the powers of its base
		decimalNumber += remainder * getValueOfNumberWithPowers(base, digit);
		// divide to get the next digit after modulo
		tempNumber = tempNumber / 10;
		//increment the digit
		digit = digit + 1;
	}
	
	return decimalNumber;
}

//displaying the object's value
void Convert::display(){
	cout << "The decimal value of the number : " << number << " to the base : "<<base<<" is : "<<decimalNumber << endl;
}





