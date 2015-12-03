
////////////////////////////////////////////////////////////////////////////////////////////
//Name: Prashant Patel
//Course: CIS 554
//Assignment No. 8
//FileName : HugeIntTest.cpp
//Title: contains test program to test method implementaion and friend-function definitions  
//		 of HugeInt class performing Operator Overloading 
////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include "Hugeint.h"
#include <conio.h>
using namespace std;
using std::cin;

int main()
{
   HugeInt n1( 7654321 );
   HugeInt n2( 7891234 );
   HugeInt n3( "99999999999999999999999999999" );
   HugeInt n4( "1" );
   HugeInt result;

   cout << "n1 is " << n1 << "\nn2 is " << n2
      << "\nn3 is " << n3 << "\nn4 is " << n4
      << "\nAddition operation "  << "\n";

   //Addition
   result = n1 + n2;
   cout << n1 << " + " << n2 << " = " << result << endl;

   cout << n3 << " + " << n4 << "= " << (n3 + n4) << endl;

   result = n1 + 9;
   cout << n1 << " + " << 9 << " = " << result << endl;

   result = n2 + "10000";
   cout << n2 << " + " << "10000" << " = " << result << "\n\n";

   //Subtraction
   cout << "\n Subtraction operation "  << "\n";
   result = n2 - n1;
   cout << n2 << " - " << n1 << " = " << result << endl;

   cout << n3 << " - " << n4 << "= " << (n3 - n4) << endl;

   result = n1 - 9;
   cout << n1 << " - " << 9 << " = " << result << endl;

   result = n2 - "10000";
   cout << n2 << " - " << "10000" << " = " << result << "\n\n";


   //Equality
   cout << "\n Testing Equality " << "\n";
   result = n2 == n3;
   cout << n2 << " == " << n3 << " = " << result << endl;
   cout << n2 << " == " << 7891234 << "= " << (n2 == 7891234) << endl;
   cout << n3 << " == " << "7891234" << "= " << (n3 == "7891234") << endl;

   //InEquality
   cout << "\n Testing InEquality " << "\n";
   result = n2 != n3;
   cout << n2 << " != " << n3 << " = " << result << endl;
   cout << n2 << " != " << 7891234 << "= " << (n2 != 7891234) << endl;
   cout << n3 << " != " << "7891234" << "= " << (n3 != "7891234") << endl;

   //Greater than 
   cout << "\n Greater than  " << "\n";
   result = n2 > n3;
   cout << n2 << " > " << n3 << " = " << result << endl;
  // cout << n2 << " > " << 7891234 << "= " << (n2 > 7891234) << endl;
   cout << n3 << " > " << "7891234" << "= " << (n3 > "7891234") << endl;

   //Less than 
   cout << "\n Less than  " << "\n";
   result = n2 < n3;
   cout << n2 << " < " << n3 << " = " << result << endl;
  // cout << n2 << " < " << 7891234 << "= " << (n2 < 7891234) << endl;
   cout << n3 << " < " << "7891234" << "= " << (n3 < "7891234") << endl;


   //Greater than or equal to
   cout << "\n Greater than or equal to " << "\n";
   result = n2 >= n3;
   cout << n2 << " >= " << n3 << " = " << result << endl;
   cout << n2 << " >= " << 7891234 << "= " << (n2 >= 7891234) << endl;
   cout << n3 << " >= " << "7891234" << "= " << (n3 >= "7891234") << endl;

   //Less than ot equal to 
   cout << "\n Less than  ot equal to  " << "\n";
   result = n2 <= n3;
   cout << n2 << " <= " << n3 << " = " << result << endl;
   cout << n2 << " <= " << 7891234 << "= " << (n2 <= 7891234) << endl;
   cout << n3 << " <= " << "7891234" << "= " << (n3 <= "7891234") << endl;

   //Multiplication
   cout << "\n Multiplication operation " << "\n";
   cout << "Multiplication is time consuming.. Please wait for 20-30 s... " << "\n";
   result = n2 * n1;
   cout << n2 << " * " << n1 << " = " << result << endl;

   cout << "Multiplication is time consuming.. Please wait for 20-30 s... " << "\n";
   cout << n3 << " * " << n4 << "= " << (n3 * n4) << endl;

   cout << "Multiplication is time consuming.. Please wait for 20-30 s... " << "\n";
   result = n2 * "10000";
   cout << n2 << " * " << "10000" << " = " << result << "\n\n";


   //Division   
   cout << "\n Division operation " << "\n";
   result = n2 / n1;
   cout << n2 << " / " << n1 << " = " << result << endl;

   cout << n3 << " / " << n4 << "= " << (n3 / n4) << endl;
   cout << "This Division is time consuming.. Please wait for long time... " << "\n";
   HugeInt n5("511111111111");
   result = n5 / "2";
   cout << n5 << " / " << "2" << " = " << result << "\n\n";
   



   getche();

} // end main

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
