///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : WordFont.h												 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//																		 //
// DESC   : WordFont.h contains the function declaration for			 //
//			taking the user input and drawing the corresponding		     //
//			characters.													 //
//																		 //
//																		 //
//////////////////////////////////////////////////////////////////////////

#include <vector>
using std::vector;

class  WordFont
{

private:
	// vector declaration
	vector<vector<int>> myMultiVector;

	//draw a
	void drawA(int position, char c, int fontSize,int bold);

	//draw e
	void drawE(int position, char c, int fontSize, int bold);

	//draw i
	void drawI(int position, char c, int fontSize, int bold);

	//draw o
	void drawO(int position, char c, int fontSize, int bold);

	//draw u
	void drawU(int position, char c, int fontSize, int bold);

	//draw b
	void drawB(int position, char c, int fontSize, int bold);

	//draw c
	void drawC(int position, char c, int fontSize, int bold);

	//draw F
	void drawF(int position, char c, int fontSize, int bold);

	//draw h
	void drawH(int position, char c, int fontSize, int bold);

	//draw J
	void drawJ(int position, char c, int fontSize, int bold);

	//draw l
	void drawL(int position, char c, int fontSize, int bold);

	//draw n
	void drawN(int position, char c, int fontSize, int bold);

	//draw p
	void drawP(int position, char c, int fontSize, int bold);

	//draw S
	void drawS(int position, char c, int fontSize, int bold);

	//draw T
	void drawT(int position, char c, int fontSize, int bold);

	//display the word
	void display();

	//checks the letter and calls the draw method
	void checkLetterAndCallLetterDraw(char c, int position, int fontSize, int bold,  char pixelCharacter);


public:

	//default constructor
	WordFont();

	// display the word from user input
	void takeUserInput();

};