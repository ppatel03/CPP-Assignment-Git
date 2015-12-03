///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : CAI.h														 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//																		 //
// DESC   : CAI.h contains the function declaration for generating the   //
//			the random number for asking the multiplication and division //
//			quiz questions to the user, showing the correctness of the	 //
//			question and printing the summary of student's performance	 //
//																		 //
//																		 //
//////////////////////////////////////////////////////////////////////////

class  CAI
{

private:
	//attempts for multiplication
	int attemptsForMultiplication[5];
	//attempts for division
	int attemptsForDivision[5];
	//number of question for multiplication and divisions each
	const int numberOfQuestionsForOneOperation = 5;

	//asking  5 multiplication questions randomnly
	void askRandomMultiplicationQuestions();
	//asking  5 division questions randomnly
	void askRandomDivisionQuestions();
	//prints the random positive message
	void printRandomGoodJob();
	//prints a random motivation message
	void printRandomEncouragementMessage();
	//returns a random number from a particular range starting from 1 to maxLimit
	int chooseRandomNumber(int minLimit, int maxLimit);
	//prints the summary of how students did
	void printTestSummary();

public:
	//default constructor
	CAI();

	//starting the test
	void startTest();

};

