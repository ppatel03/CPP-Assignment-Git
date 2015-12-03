///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : WordFont.cpp												 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//																		 //
// DESC   : WordFont.cpp contains the function implementation for		 //
//			taking the user input and drawing the corresponding		     //
//			characters.													 //
//																		 //
//																		 //
//////////////////////////////////////////////////////////////////////////

#include "WordFont.h"
using namespace std;

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <string>

//initializing the 2 D vector in default constructor
WordFont::WordFont()
	// using the class initialization list to 
	// construct vector as a [12][90] mulitdemensional vector, initialized to all 0
	: myMultiVector(12, vector<int>(120, 0))
	{

		// iterate through the vector and put some data in it
		for (int rows = 0; rows<myMultiVector.size(); rows++)
		{
			for (int cols = 0; cols<myMultiVector.at(0).size(); cols++)
			{				
				// alternatively, this would work as well, and be acceptable
				 myMultiVector[rows][cols] = 0;
			}
		}
	}


//draw a
void WordFont::drawA(int position, char c, int fontSize, int bold){
	//draw 1st horizontal line
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[0][i] = c;
		if (bold == 1){
			myMultiVector[1][i] = c;
		}
	}

	//draw 2nd horizontal line	
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[(fontSize - 1) / 2][i] = c;
		if (bold == 1){
			myMultiVector[((fontSize - 1) / 2) + 1][i] = c;
		}
	}


	//draw 1st vertical line
	for (int i = 0; i < fontSize; i++){
		myMultiVector[i][position] = c;
		if (bold == 1){
			myMultiVector[i][position + 1] = c;
		}
	}

	//draw last vertical line
	for (int i = 0; i < fontSize; i++){
		myMultiVector[i][position + fontSize-1] = c;
		if (bold == 1){
			myMultiVector[i][position + fontSize - 2] = c;
		}
	}

}


//draw e
void WordFont::drawE(int position, char c, int fontSize, int bold){

	//draw 1st horizontal line
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[0][i] = c;
		if (bold == 1){
			myMultiVector[1][i] = c;
		}
	}

	//draw 2nd horizontal line	
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[(fontSize - 1) / 2][i] = c;
		if (bold == 1){
			myMultiVector[((fontSize - 1) / 2) + 1][i] = c;
		}
	}

	//draw 3rd horizontal line	
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[fontSize - 1][i] = c;
		if (bold == 1){
			myMultiVector[fontSize - 2][i] = c;
		}
	}

	//draw the vertical line
	for (int i = 0; i < fontSize; i++){
		myMultiVector[i][position] = c;
		if (bold == 1){
			myMultiVector[i][position + 1] = c;
		}
	}
}


//draw i
void WordFont::drawI(int position, char c, int fontSize, int bold){
	//draw 1st horizontal line
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[0][i] = c;
		if (bold == 1){
			myMultiVector[1][i] = c;
		}
	}

	//draw 3rd horizontal line	
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[fontSize - 1][i] = c;
		if (bold == 1){
			myMultiVector[fontSize - 2][i] = c;
		}
	}

	//draw 2nd vertical line
	for (int i = 0; i < fontSize; i++){
		myMultiVector[i][position + ((fontSize - 1) / 2)] = c;
		if (bold == 1){
			myMultiVector[i][position + ((fontSize - 1) / 2) + 1] = c;
		}
	}
}

//draw o
void WordFont::drawO(int position, char c, int fontSize, int bold){
	//draw 1st horizontal line
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[0][i] = c;
		if (bold == 1){
			myMultiVector[1][i] = c;
		}
	}

	//draw 3rd horizontal line	
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[fontSize - 1][i] = c;
		if (bold == 1){
			myMultiVector[fontSize - 2][i] = c;
		}
	}


	//draw 1st vertical line
	for (int i = 0; i < fontSize; i++){
		myMultiVector[i][position] = c;
		if (bold == 1){
			myMultiVector[i][position + 1] = c;
		}
	}

	//draw last vertical line
	for (int i = 0; i < fontSize; i++){
		myMultiVector[i][position + fontSize -1] = c;
		if (bold == 1){
			myMultiVector[i][position + fontSize - 2] = c;
		}
	}
}


//draw u
void WordFont::drawU(int position, char c, int fontSize, int bold){

	//draw 3rd horizontal line	
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[fontSize - 1][i] = c;
		if (bold == 1){
			myMultiVector[fontSize - 2][i] = c;
		}
	}


	//draw 1st vertical line
	for (int i = 0; i < fontSize; i++){
		myMultiVector[i][position] = c;
		if (bold == 1){
			myMultiVector[i][position + 1] = c;
		}
	}

	//draw last vertical line
	for (int i = 0; i < fontSize; i++){
		myMultiVector[i][position + fontSize-1] = c;
		if (bold == 1){
			myMultiVector[i][position + fontSize - 2] = c;
		}
	}

}

//draw b
void WordFont::drawB(int position, char c, int fontSize, int bold){
	//draw 1st horizontal line
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[0][i] = c;
		if (bold == 1){
			myMultiVector[1][i] = c;
		}
	}

	//draw 2nd horizontal line	
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[(fontSize - 1) / 2][i] = c;
		if (bold == 1){
			myMultiVector[((fontSize - 1) / 2) + 1][i] = c;
		}
	}

	//draw 3rd horizontal line	
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[fontSize - 1][i] = c;
		if (bold == 1){
			myMultiVector[fontSize - 2][i] = c;
		}
	}

	//draw 1st vertical line
	for (int i = 0; i < fontSize; i++){
		myMultiVector[i][position] = c;
		if (bold == 1){
			myMultiVector[i][position + 1] = c;
		}
	}

	//draw last vertical line
	for (int i = 0; i < fontSize; i++){
		myMultiVector[i][position + fontSize-1] = c;
		if (bold == 1){
			myMultiVector[i][position + fontSize - 2] = c;
		}
	}
}

//draw c
void WordFont::drawC(int position, char c, int fontSize, int bold){
	//draw 1st horizontal line
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[0][i] = c;
		if (bold == 1){
			myMultiVector[1][i] = c;
		}
	}

	//draw 3rd horizontal line	
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[fontSize - 1][i] = c;
		if (bold == 1){
			myMultiVector[fontSize - 2][i] = c;
		}
	}

	//draw 1st vertical line
	for (int i = 0; i < fontSize; i++){
		myMultiVector[i][position] = c;
		if (bold == 1){
			myMultiVector[i][position + 1] = c;
		}
	}
}

//draw F
void WordFont:: drawF(int position, char c, int fontSize, int bold){
	//draw 1st horizontal line
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[0][i] = c;
		if (bold == 1){
			myMultiVector[1][i] = c;
		}
	}

	//draw 2nd horizontal line	
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[(fontSize - 1) / 2][i] = c;
		if (bold == 1){
			myMultiVector[((fontSize - 1) / 2) + 1][i] = c;
		}
	}

	//draw 1st vertical line
	for (int i = 0; i < fontSize; i++){
		myMultiVector[i][position] = c;
		if (bold == 1){
			myMultiVector[i][position + 1] = c;
		}
	}	
}

//draw h
void WordFont::drawH(int position, char c, int fontSize, int bold){
	

	//draw 2nd horizontal line	
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[(fontSize - 1) / 2][i] = c;
		if (bold == 1){
			myMultiVector[((fontSize - 1) / 2) + 1][i] = c;
		}
	}

	
	//draw 1st vertical line
	for (int i = 0; i < fontSize; i++){
		myMultiVector[i][position] = c;
		if (bold == 1){
			myMultiVector[i][position + 1] = c;
		}
	}

	//draw last vertical line
	for (int i = 0; i < fontSize; i++){
		myMultiVector[i][position + fontSize-1] = c;
		if (bold == 1){
			myMultiVector[i][position + fontSize - 2] = c;
		}
	}
}

//draw J
void WordFont::drawJ(int position, char c, int fontSize, int bold){
	//draw 1st horizontal line
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[0][i] = c;
		if (bold == 1){
			myMultiVector[1][i] = c;
		}
	}

	//draw 3rd horizontal line	
	for (int i = position; i < position + ((fontSize-1)/2); i++){
		myMultiVector[fontSize - 1][i] = c;
		if (bold == 1){
			myMultiVector[fontSize - 2][i] = c;
		}
	}

	//draw 2nd vertical line
	for (int i = 0; i < fontSize; i++){
		myMultiVector[i][position + ((fontSize - 1) / 2)] = c;
		if (bold == 1){
			myMultiVector[i][position + ((fontSize - 1) / 2) + 1] = c;
		}
	}
}

//draw l
void WordFont::drawL(int position, char c, int fontSize, int bold){
	
	//draw 3rd horizontal line	
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[fontSize - 1][i] = c;
		if (bold == 1){
			myMultiVector[fontSize - 2][i] = c;
		}
	}

	//draw 1st vertical line
	for (int i = 0; i < fontSize; i++){
		myMultiVector[i][position] = c;
		if (bold == 1){
			myMultiVector[i][position + 1] = c;
		}
	}
}

//draw n
void WordFont::drawN(int position, char c, int fontSize, int bold){
	//draw 1st horizontal line
	for (int i = position, j =0 ; i < position + fontSize; i++, j++){
		myMultiVector[j][i] = c;
		//also check if the i is not positioned at 0
		if (bold == 1 && j != 0){
			myMultiVector[j][i-1] = c;
		}
	}

	//draw 1st vertical line
	for (int i = 0; i < fontSize; i++){
		myMultiVector[i][position] = c;
		if (bold == 1){
			myMultiVector[i][position + 1] = c;
		}
	}

	//draw last vertical line
	for (int i = 0; i < fontSize; i++){
		myMultiVector[i][position + fontSize-1] = c;
		if (bold == 1){
			myMultiVector[i][position + fontSize - 2] = c;
		}
	}
}

//draw p
void WordFont::drawP(int position, char c, int fontSize, int bold){
	//draw 1st horizontal line
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[0][i] = c;
		if (bold == 1){
			myMultiVector[1][i] = c;
		}
	}

	//draw 2nd horizontal line	
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[(fontSize - 1) / 2][i] = c;
		if (bold == 1){
			myMultiVector[((fontSize - 1) / 2) + 1][i] = c;
		}
	}

	//draw 1st vertical line
	for (int i = 0; i < fontSize; i++){
		myMultiVector[i][position] = c;
		if (bold == 1){
			myMultiVector[i][position + 1] = c;
		}
	}

	//draw last vertical line
	for (int i = 0; i < (fontSize)/2 ; i++){
		myMultiVector[i][position + fontSize-1] = c;
		if (bold == 1){
			myMultiVector[i][position + fontSize - 2] = c;
		}
	}
}

//draw S
void WordFont::drawS(int position, char c, int fontSize, int bold){
	//draw 1st horizontal line
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[0][i] = c;
		if (bold == 1){
			myMultiVector[1][i] = c;
		}
	}

	//draw 2nd horizontal line	
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[(fontSize - 1) / 2][i] = c;
		if (bold == 1){
			myMultiVector[((fontSize - 1) / 2) + 1][i] = c;
		}
	}

	//draw 3rd horizontal line	
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[fontSize - 1][i] = c;
		if (bold == 1){
			myMultiVector[fontSize - 2][i] = c;
		}
	}

	//draw 1st vertical line
	for (int i = 0; i < (fontSize-1)/2; i++){
		myMultiVector[i][position] = c;
		if (bold == 1){
			myMultiVector[i][position + 1] = c;
		}
	}

	//draw last vertical line
	for (int i = (fontSize - 1) / 2; i < fontSize; i++){
		myMultiVector[i][position + fontSize-1] = c;
		if (bold == 1){
			myMultiVector[i][position + fontSize - 2] = c;
		}
	}
}

//draw T
void WordFont::drawT(int position, char c, int fontSize, int bold){
	//draw 1st horizontal line
	for (int i = position; i < position + fontSize; i++){
		myMultiVector[0][i] = c;
		if (bold == 1){
			myMultiVector[1][i] = c;
		}
	}

	//draw 2nd vertical line
	for (int i = 0; i < fontSize; i++){
		myMultiVector[i][position + ((fontSize - 1) / 2)] = c;
		if (bold == 1){
			myMultiVector[i][position + ((fontSize - 1) / 2) + 1] = c;
		}
	}
}

//display the character
void WordFont::display(){
	for (int rows = 0; rows<myMultiVector.size(); rows++)
	{
		for (int cols = 0; cols<myMultiVector.at(0).size(); cols++)
		{
			// put some data in each row and column, using subscript notation
			cout << setw(1) << right << (char)myMultiVector[rows][cols];

			// alternatively, this would work as well, and be acceptable
			// cout << myMultiVector.at(rows).at(cols);
		}

		// put a new line before printing the next row of data
		cout << endl;
	}

}

//checks the letter and calls the draw method
void WordFont::checkLetterAndCallLetterDraw(char c, int position, int fontSize, int bold, char pixelCharacter){
	c = tolower(c);
	switch (c)
	{
		case 'a':drawA(position, pixelCharacter, fontSize, bold); break;
		case 'e':drawE(position, pixelCharacter, fontSize, bold); break;
		case 'i':drawI(position, pixelCharacter, fontSize, bold); break;
		case 'o':drawO(position, pixelCharacter, fontSize, bold); break;
		case 'u':drawU(position, pixelCharacter, fontSize, bold); break;
		case 'b':drawB(position, pixelCharacter, fontSize, bold); break;
		case 'c':drawC(position, pixelCharacter, fontSize, bold); break;
		case 'f':drawF(position, pixelCharacter, fontSize, bold); break;
		case 'h':drawH(position, pixelCharacter, fontSize, bold); break;
		case 'j':drawJ(position, pixelCharacter, fontSize, bold); break;
		case 'l':drawL(position, pixelCharacter, fontSize, bold); break;
		case 'n':drawN(position, pixelCharacter, fontSize, bold); break;
		case 'p':drawP(position, pixelCharacter, fontSize, bold); break;
		case 's':drawS(position, pixelCharacter, fontSize, bold); break;
		case 't':drawT(position, pixelCharacter, fontSize, bold); break;
		default :break;
	}
}

//take all the inputs related to word, pixel character, font size and type of font
void WordFont::takeUserInput(){
	
	//take the word as the input
	char wordInput[10];
	cout << "Enter a word (8 letters or less), using a, e, i, o, u, b, c, f, h, j, l, n, p, s, t: ";
	cin.getline( wordInput,10);
	cout << endl;
	

	//take the pixel character as input
	char pixelCharacter; 
	cout << "Enter the pixel character you want to use to draw: ";
	cin >> pixelCharacter;
	cout << endl;

	//take the font size as input
	int fontSize;
	cout << "Enter the fontsize (8-12) : ";
	cin >> fontSize;
	cout << endl;

	//bold or not bold
	int bold;
	cout << " Bold? (0=No, 1=Yes) : ";
	cin >> bold; 
	cout << endl;

	int position = 0;

	for (int i = 0; i < sizeof(wordInput); i++){
		checkLetterAndCallLetterDraw(wordInput[i], position, fontSize, bold, pixelCharacter);
		position += fontSize + 2;
	}
	

	display();

}




