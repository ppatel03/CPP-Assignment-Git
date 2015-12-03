
///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : convert.h													 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//																		 //
// DESC   : Convert.h contains the declaration of the member variables   //
//          and functions. It contains the function declaration to		 //
//			determine whether the input is valid.  It contains the		 //
//			function declaration to	convert the number belonging		 //
//			to any base to decimal base. It also contains function		 //
//			declaration for getters and setters.						 //
//																		 //
//////////////////////////////////////////////////////////////////////////

class Convert{

private :
	// input number 
	int number;
	// base for the inputted number
	int base;
	// equivalent decimal value of the inputted number belonging to the inputted base
	int decimalNumber;

public:
	//parameterized constructor
	Convert(int , int );

	//getter for input Number
	int getNumber();

	//setter for input Number 
	void setNumber(int);

	//getter for base
	int getBase();

	//setter for base
	void setBase(int);

	//getter for deminal number
	int getDecimalNumber();

	//setter for decimal
	void setDecimalNumber(int);

	//verfiying whether the input is valid using the validation of digit is less than the base
	bool isValidInput();

	//converts number from any base  to decimal
	int getDecimalValueOftheNumber();

	//get the value of the number with powers
	int getValueOfNumberWithPowers(int , int );

	//display the object data
	void display();
};