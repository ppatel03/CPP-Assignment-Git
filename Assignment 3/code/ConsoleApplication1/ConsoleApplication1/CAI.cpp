///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : CAI.cpp													 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//																		 //
// DESC   : CAI.cpp contains the implementation for all functions		 //
//			decalred in CAI.h like generating the						 //
//			the random number for asking the multiplication and division //
//			quiz questions to the user, showing the correctness of the	 //
//			question and printing the summary of student's performance	 //
//																		 //
//																		 //
///////////////////////////////////////////////////////////////////////////

#include "CAI.h"
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::string;
using std::rand;
using std::srand;
using std::setprecision;
using std::fixed;



//default constructor
CAI::CAI(){
	
}

//asking  5 multiplication questions randomnly
void CAI::askRandomMultiplicationQuestions(){
	//asking the multiplication based question 5 times
	

	for (int i = 0; i < numberOfQuestionsForOneOperation; i++){

		// keeping seed as the time so that we can get different set of random numbers every time we execute
		srand((unsigned int ) time(0));

		attemptsForMultiplication[i] = 0;
		int multiplicand = chooseRandomNumber(1, 9);
		int multiplier = chooseRandomNumber(1, 9);

		while (true){			

			int inputAnswer;

			cout << "How much is " << multiplicand << " times " << multiplier << " ? " << endl;
			cin >> inputAnswer;

			//increamenting the attempt
			attemptsForMultiplication[i]++;

			//calculating the correct answer
			double correctAnswer = multiplicand * multiplier;

			if (inputAnswer == correctAnswer){
				//answer is correct. 
				printRandomGoodJob();
				break;
			}
			else {
				//answer is wrong.
				printRandomEncouragementMessage();
			}
		}
	}
}

//asking  5 division questions randomnly
void CAI::askRandomDivisionQuestions(){
	
	//asking the division based question 5 times
	for (int i = 0; i < numberOfQuestionsForOneOperation; i++){
		attemptsForDivision[i] = 0;
		int numerator = chooseRandomNumber(1, 9);
		int denominator = chooseRandomNumber(1, 9);

		while (true){	

			int inputAnswer;

			cout << "How much is " << numerator << " divided by " << denominator << " ? " << endl;
			cin >> inputAnswer;

			//increamenting the attempt
			attemptsForDivision[i]++;

			//rounding to the nearest number upto 2 decimal places
			int correctAnswer =numerator / denominator;

			if (inputAnswer == correctAnswer){
				//answer is correct. 
				printRandomGoodJob();
				break;
			}
			else {
				//answer is wrong.
				printRandomEncouragementMessage();
			}
		}
	}
}

//prints the random positive message
void CAI::printRandomGoodJob(){
	//gets the randomChoice between 1-4 for printing the success message
	int randomChoice = chooseRandomNumber(1, 4);

	switch (randomChoice){
		case 1 : cout << "Very good ! " << endl; break;
		case 2 : cout << "Excellent !" << endl; break;
		case 3: cout << " Nice work ! " << endl; break;
		case 4: cout << " Keep up the good work ! " << endl; break;
		default: cout << " Awesome, Fantabulous ! " << endl;
	}
}

//prints a random motivation message
void CAI::printRandomEncouragementMessage(){
	//gets the randomChoice between 1-4 for printing the wrong answer message
	srand(unsigned int(time(NULL)));
	int randomChoice = chooseRandomNumber(1, 4);

	switch (randomChoice){
	case 1: cout << "No. Please try again. " << endl; break;
	case 2: cout << "Wrong. Try once more." << endl; break;
	case 3: cout << "Don't give up ! " << endl; break;
	case 4: cout << "No. Keep trying. " << endl; break;
	default: cout << "Try, try untill you succeed " << endl;
	}
}

//returns a random number from a particular range between  minLimit - maxLimit
int CAI::chooseRandomNumber(int minLimit, int maxLimit){
	
	//generating the random number by adding the minLimit and getting the last digit of the time in seconds since Jan 1 1970
	int randomNumber = minLimit + rand() % maxLimit;

	return randomNumber;
}

//prints the summary of how students did
void CAI::printTestSummary(){

	double totalAttemptsForMultiplication = 0;
	double totalAttemptsForDivison = 0;

	cout << setw(40) << " Multiplication Results " << setw(40) << " Division Results " << endl;
	cout << setw(40) << "------------------------" << setw(40) << "------------------" << endl;
	cout << setw(20) << "Question Number"  << setw(20) << "Number of attempts" << setw(30) << 
		"Question Number" << setw(30) << "Number of attempts" << endl;
	cout << endl;
	for (int i = 0; i < numberOfQuestionsForOneOperation; i++){
		cout << setw(20) <<  i  << setw(20) << attemptsForMultiplication[i] << setw(30) << 
			i << setw(30) << attemptsForDivision[i] << endl;
		totalAttemptsForMultiplication += attemptsForMultiplication[i];
		totalAttemptsForDivison += attemptsForDivision[i];
	}

	cout << " Printing Averages : " << endl;
	cout << "-----------------------------------------" << endl;
	cout << " Printing Average of Multiplication Attempts : " << totalAttemptsForMultiplication / numberOfQuestionsForOneOperation << endl;
	cout << " Printing Average of Division Attempts : " << totalAttemptsForDivison / numberOfQuestionsForOneOperation << endl;
	cout << " Printing Total Average of Attempts : " << (totalAttemptsForDivison + totalAttemptsForMultiplication) /
		(numberOfQuestionsForOneOperation + numberOfQuestionsForOneOperation) << endl;


}

//starting the test
void CAI::startTest(){
	cout << " Multiplication quiz !!!  " << endl;
	cout << "-------------------------" << endl;
	cout << endl;
	//starting the quiz with 5 multiplication questions
	askRandomMultiplicationQuestions();
	cout << endl;

	cout << " Division quiz !!!  " << endl;
	cout << "-------------------" << endl;
	//starting the quiz with 5 division questions
	askRandomDivisionQuestions();
	cout << endl;

	cout << "Printing your quiz summary !!! " << endl;
	cout << "-------------------------------" << endl;
	cout << endl;
	//printing the summary of test results
	printTestSummary();
}