

////////////////////////////////////////////////////////////////////////////////////////////
//Name: Prashant Patel
//Course: CIS 554
//Assignment No. 8
//FileName : Hugeint.cpp
//Title: contains method implementaion and friend-function definitions of HugeInt class 
//		 performing Operator Overloading 
////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <stdexcept>
#include <cctype> // isdigit function prototype
#include "Hugeint.h" // HugeInt class definition
using namespace std;

// default constructor; conversion constructor that converts
// a long integer into a HugeInt object
HugeInt::HugeInt( long value )
{
   // initialize array to zero
   for ( int i = 0; i < digits; ++i )
      integer[ i ] = 0;

   // place digits of argument into array
   for ( int j = digits - 1; value != 0 && j >= 0; --j )
   {
      integer[ j ] = value % 10;
      value /= 10;
   } // end for

} // end HugeInt default/conversion constructor

// conversion constructor that converts a character string
// representing a large integer into a HugeInt object
HugeInt::HugeInt( const string &number )
{
   // initialize array to zero
   for ( int i = 0; i < digits; ++i )
      integer[ i ] = 0;

   // place digits of argument into array
   int length = number.size();

   for ( int j = digits - length, k = 0; j < digits; ++j, ++k )
      if ( isdigit( number[ k ] ) )
         integer[ j ] = number[ k ] - '0';

} // end HugeInt conversion constructor

// addition operator; HugeInt + HugeInt
HugeInt HugeInt::operator+( const HugeInt &op2 ) const
{
   HugeInt temp; // temporary result
   int carry = 0;

   for ( int i = digits - 1; i >= 0; --i )
   {
      temp.integer[ i ] = integer[ i ] + op2.integer[ i ] + carry;

      // determine whether to carry a 1
      if ( temp.integer[ i ] > 9 )
      {
         temp.integer[ i ] %= 10;  // reduce to 0-9
         carry = 1;
      } // end if
      else // no carry
         carry = 0;
   } // end for

   return temp; // return copy of temporary object
} // end function operator+

// addition operator; HugeInt + int
HugeInt HugeInt::operator+( int op2 ) const
{
   // convert op2 to a HugeInt, then invoke
   // operator+ for two HugeInt objects
   return *this + HugeInt( op2 );
} // end function operator+

// addition operator;
// HugeInt + string that represents large integer value
HugeInt HugeInt::operator+( const string &op2 ) const
{
   // convert op2 to a HugeInt, then invoke
   // operator+ for two HugeInt objects
   return *this + HugeInt( op2 );
} // end function operator+


// overloaded output operator
ostream& operator<<( ostream &output, const HugeInt &num )
{
   int i;

   for ( i = 0; i < HugeInt::digits && num.integer[ i ] == 0; ++i )
      ; // skip leading zeros

   if ( i == HugeInt::digits )
      output << 0;
   else
      for ( ; i < HugeInt::digits; ++i )
         output << num.integer[ i ];

   return output;
} // end function operator<<


// substraction operator; 
// it does HugeInt - HugeInt
HugeInt HugeInt::operator-(const HugeInt &op2) const{
	HugeInt temp; // temporary result
	
	bool isBorrow = false;

	for (int i = digits - 1; i >= 0; --i)
	{
		//as we reduce the number if there is a borrow by previous subtraction
		if (isBorrow){
			temp.integer[i] = 1;
		}
		
		//simply subtract
		temp.integer[i] = integer[i] - temp.integer[i] - op2.integer[i];

		//negative result indicates that we need a borrow
		if (temp.integer[i] < 0){
			temp.integer[i] = 10 + temp.integer[i];
			isBorrow = true;
		}
		else {
			isBorrow = false;
		}
		
	} // end for

	return temp; // return copy of temporary object
}

// substraction operator; 
// it does HugeInt - int
HugeInt HugeInt::operator-(int op2) const{
	// convert op2 to a HugeInt, then invoke
	// operator- for two HugeInt objects
	return *this - HugeInt(op2);
}

// substraction operator; 
// it does HugeInt - string that represents large integer value
HugeInt HugeInt::operator-(const string &op2) const{
	// convert op2 to a HugeInt, then invoke
	// operator- for two HugeInt objects
	return *this - HugeInt(op2);
}


//Multiplication Operator
//it does HugeInt * HugeInt
HugeInt HugeInt::operator*(const HugeInt &op2) const{
	HugeInt no1 = *this;
	HugeInt no2 = op2;
	HugeInt res(0);

	if (no1 == 0 || no2 == 0)
	{
		return HugeInt(0);
	}

	//x 1 for no2
	if (no1 == 1){
		res = no2;
		return res;
	}

	//x1 for no1
	if (no2 == 1){
		res = no1;
		return res;
	}

	while (no1 != 0)
	{
		res = res + no2;
		no1 = no1 - 1;
	}
	return res;
}

//Multiplcation operator; 
// it does HugeInt * Int
HugeInt HugeInt::operator*(int op2) const{
	// convert op2 to a HugeInt, then invoke
	// operator* for two HugeInt objects
	return *this * HugeInt(op2);
}

//Multiplcation operator;
// it does HugeInt * string that represents large integer value
HugeInt HugeInt::operator*(const string &op2) const{
	// convert op2 to a HugeInt, then invoke
	// operator* for two HugeInt objects
	return *this * HugeInt(op2);
}


//Equality Operator
//it does HugeInt == HugeInt
bool  HugeInt::operator==(const HugeInt &op2) const{

	for (int i = digits - 1; i >= 0; --i)
	{
		if (integer[i] != op2.integer[i]){
			return false;
		}
	}

	return true;
}

//Equality operator;
// it does HugeInt == Int
bool  HugeInt::operator==(int op2) const{
	// convert op2 to a HugeInt, then invoke
	// operator== for two HugeInt objects
	return *this == HugeInt(op2);
}

//Equality operator;
// it does HugeInt == string that represents large integer value
bool  HugeInt::operator==(const string &op2) const{
	// convert op2 to a HugeInt, then invoke
	// operator== for two HugeInt objects
	return *this == HugeInt(op2);
}


//Inequality Operator
//it does HugeInt != HugeInt
bool  HugeInt::operator!=(const HugeInt &op2) const{

	for (int i = digits - 1; i >= 0; --i)
	{
		if (integer[i] != op2.integer[i]){
			return true;
		}
	}

	return false;
}

//Inequality Operator
//it does HugeInt != Int
bool  HugeInt::operator!=(int op2) const{
	// convert op2 to a HugeInt, then invoke
	// operator!= for two HugeInt objects
	return *this != HugeInt(op2);
}

//Inequality Operator
// it does HugeInt != string that represents large integer value
bool  HugeInt::operator!=(const string &op2) const{
	// convert op2 to a HugeInt, then invoke
	// operator!= for two HugeInt objects
	return *this != HugeInt(op2);
}

//Greater than Operator
//it does HugeInt > HugeInt
bool HugeInt::operator>(const HugeInt &op2) const{
	
	for (int i = 0; i < HugeInt::digits; i++){
		if (integer[i] < op2.integer[i])
			return false;
		if (integer[i] > op2.integer[i])
			return true;
		i++;
	}

}

//Greater than Operator
//it does HugeInt > Int
bool HugeInt::operator>(int op2) const{
	// convert op2 to a HugeInt, then invoke
	// operator> for two HugeInt objects
	return *this > HugeInt(op2);
}

//Greater than Operator
//it does HugeInt > string that represents large integer value
bool HugeInt::operator>(const string &op2) const{
	// convert op2 to a HugeInt, then invoke
	// operator> for two HugeInt objects
	return *this > HugeInt(op2);
}

//Greater than OR EQUAL TO Operator
//it does HugeInt >= HugeInt
bool HugeInt::operator>=(const HugeInt &op2) const{
	// convert op2 to a HugeInt, then invoke
	// operator>= for two HugeInt objects
	return (*this > HugeInt(op2)) || (*this == HugeInt(op2));
}

//Greater than OR EQUAL TO Operator
//it does HugeInt >= Int
bool HugeInt::operator>=(int op2) const{
	// convert op2 to a HugeInt, then invoke
	// operator>= for two HugeInt objects
	return *this >= HugeInt(op2);
}

//Greater than OR EQUAL TO Operator
//it does HugeInt >= string that represents large integer value
bool HugeInt::operator>=(const string &op2) const{
	// convert op2 to a HugeInt, then invoke
	// operator>= for two HugeInt objects
	return *this >= HugeInt(op2);
}


//LESS than Operator
//it does HugeInt < HugeInt
bool HugeInt::operator<(const HugeInt &op2) const{

	for (int i = 0; i < HugeInt::digits; i++){
		if (integer[i] < op2.integer[i])
			return true;
		if (integer[i] > op2.integer[i])
			return false;
		i++;
	}
}

//LESS than Operator
//it does HugeInt < Int
bool HugeInt::operator<(int op2) const{
	// convert op2 to a HugeInt, then invoke
	// operator< for two HugeInt objects
	return *this < HugeInt(op2);
}

//LESS than Operator
//it does HugeInt < string that represents large integer value
bool HugeInt::operator<(const string &op2) const{
	// convert op2 to a HugeInt, then invoke
	// operator< for two HugeInt objects
	return *this < HugeInt(op2);
}

//Less than equal to Operator
//it does HugeInt <= HugeInt
bool HugeInt::operator<=(const HugeInt & op2) const{
// convert op2 to a HugeInt, then invoke
// operator<= for two HugeInt objects
return (*this < HugeInt(op2)) || (*this == HugeInt(op2));
}


//Less than equal to operator; 
// it does HugeInt <= Int
bool HugeInt::operator<=(int  op2) const{
	// convert op2 to a HugeInt, then invoke
	// operator<= for two HugeInt objects
	return *this <= HugeInt(op2);
}
//Less than equal to operator; 
// it does HugeInt <= string that represents large integer value
bool HugeInt::operator<=(const string & op2) const{
	// convert op2 to a HugeInt, then invoke
	// operator<= for two HugeInt objects
	return *this <= HugeInt(op2);
}


//Division Operator
//it does HugeInt / HugeInt
HugeInt HugeInt::operator/(const HugeInt &op2) const{
	HugeInt no1 = *this;
	HugeInt no2 = op2;
	HugeInt res(0);

	if (no1 == 0)
		return HugeInt(0);
	else if (no2 == 0)
	{
		cout << "\n divide by 0 Invalid Operand";
		return HugeInt(0);
	}
	
	// / by 1 is the numerator
	if (no2 == 1){
		return no1;
	}

	while (no1 >= no2)
	{
		res = res + 1;
		no1 = no1 - no2;
	}

	return res;
}

//Division Operator
//it does HugeInt / Int
HugeInt HugeInt::operator/(int op2) const{
	// convert op2 to a HugeInt, then invoke
	// operator/ for two HugeInt objects
	return *this / HugeInt(op2);
}

//Division Operator
// it does HugeInt / string that represents large integer value
HugeInt HugeInt::operator/(const string &op2) const{
	// convert op2 to a HugeInt, then invoke
	// operator/ for two HugeInt objects
	return *this / HugeInt(op2);
}

/**************************************************************************
 * (C) Copyright 1992-2010 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
