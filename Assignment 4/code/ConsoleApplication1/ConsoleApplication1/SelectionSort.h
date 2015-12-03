///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : SelectionSort.h											 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//																		 //
// DESC   : SelectionSort.h contains the function declaration for        //
//			sorting the array and vectors and comparing their			 //
//			performance with each other and with small and large		 //
//			numbers.													 //
//																		 //
//////////////////////////////////////////////////////////////////////////

#include <vector>
using std::vector;

class  SelectionSort
{

private:
	
	
public:


	//default constructor
	SelectionSort();




	// sorts the array with selection sort iteratively
	void doArraySelectionSortIteratively(int[], unsigned int size, bool isAscending);

	//sorts the vector with selection sort iteratively
	void doVectorSelectionSortIteratively(vector <int> &, unsigned int size, bool isAscending);

	//sorts the array with Selection sort recursively
	void doArraySelectionSortRecursivley(int[], unsigned int size, bool isAscending);

	//sorts the vector with Selection sort recursively
	void doVectorSelectionSortRecursivley(vector <int> &, unsigned int size, bool isAscending);



};

