////////////////////////////////////////////////////////////////////////////////////////////
//Name: Prashant Patel
//Course: CIS 554
//Assignment No. 8
//FileName : Hugeint.h
//Title: contains method declaration of HugeInt class 
//		 performing Operator Overloading 
////////////////////////////////////////////////////////////////////////////////////////////


#ifndef HUGEINT_H
#define HUGEINT_H

#include <iostream>
#include <string>
using namespace std;

class HugeInt
{
   friend ostream &operator<<( ostream &, const HugeInt & );
public:
   static const int digits = 30; // maximum digits in a HugeInt

   HugeInt( long = 0 ); // conversion/default constructor
   HugeInt( const string & ); // conversion constructor

   // addition operator; HugeInt + HugeInt
   HugeInt operator+( const HugeInt & ) const;

   // addition operator; HugeInt + int
   HugeInt operator+( int ) const; 

   // addition operator; 
   // HugeInt + string that represents large integer value
   HugeInt operator+( const string & ) const;

   // substraction operator; 
   // it does HugeInt - HugeInt
   HugeInt operator-(const HugeInt &) const;

   // substraction operator; 
   // it does HugeInt - int
   HugeInt operator-(int) const;

   // substraction operator; 
   // it does HugeInt - string that represents large integer value
   HugeInt operator-(const string &) const;

   //Multiplication Operator
   //it does HugeInt * HugeInt
   HugeInt operator*(const HugeInt &) const;

   //Multiplcation operator; 
   // it does HugeInt * Int
   HugeInt operator*(int) const;

   //Multiplcation operator;
   // it does HugeInt * string that represents large integer value
   HugeInt operator*(const string &) const;

   //Equality Operator
   //it does HugeInt == HugeInt
   bool operator==(const HugeInt &) const;

   //Equality operator;
   // it does HugeInt == Int
   bool operator==(int) const;

   //Equality operator;
   // it does HugeInt == string that represents large integer value
   bool operator==(const string &) const;

   //Inequality Operator
   //it does HugeInt != HugeInt
   bool operator!=(const HugeInt &) const;

   //Inequality Operator
   //it does HugeInt != Int
   bool operator!=(int) const;

   //Inequality Operator
   // it does HugeInt != string that represents large integer value
   bool operator!=(const string &) const;

   //Greater than Operator
   //it does HugeInt > HugeInt
   bool operator>(const HugeInt &) const;

   //Greater than Operator
   //it does HugeInt > Int
   bool operator>(int) const;

   //Greater than Operator
   //it does HugeInt > string that represents large integer value
   bool operator>(const string &) const;

   //Greater than OR EQUAL TO Operator
   //it does HugeInt >= HugeInt
   bool operator>=(const HugeInt &) const;

   //Greater than OR EQUAL TO Operator
   //it does HugeInt >= Int
   bool operator>=(int) const;

   //Greater than OR EQUAL TO Operator
   //it does HugeInt >= string that represents large integer value
   bool operator>=(const string &) const;

   //LESS than Operator
   //it does HugeInt < HugeInt
   bool operator<(const HugeInt &) const;

   //LESS than Operator
   //it does HugeInt < Int
   bool operator<(int) const;

   //LESS than Operator
   //it does HugeInt < string that represents large integer value
   bool operator<(const string &) const;

   //Less than equal to Operator
   //it does HugeInt >= HugeInt
   bool operator<=(const HugeInt &) const;

   //Less than equal to operator; 
   // it does HugeInt >= Int
   bool operator<=(int) const;

   //Less than equal to operator; 
   // it does HugeInt <= string that represents large integer value
   bool operator<=(const string &) const;

   //Division Operator
   //it does HugeInt / HugeInt
   HugeInt operator/(const HugeInt &) const;
   
   //Division Operator
   //it does HugeInt / Int
   HugeInt operator/(int) const;
   
   //Division Operator
   // it does HugeInt / string that represents large integer value
   HugeInt operator/(const string &) const;
  

private:
   short integer[ digits ];
}; // end class HugeInt

#endif


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
