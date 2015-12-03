///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : SelectionSort.cpp											 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//																		 //
// DESC   : SelectionSort.h contains the function implementation for     //
//			sorting the array and vectors and comparing their			 //
//			performance with each other and with small and large		 //
//			numbers.													 //
//																		 //
//////////////////////////////////////////////////////////////////////////

#include "SelectionSort.h"
#include "TimeStamp.h" // TimeStamp class

#include <vector>
using std::vector;

#include<iostream>
using std::cout;
using std::endl;

#include <ctime>
#include <math.h>
using std::rand;
using std::srand;




//default construction
SelectionSort::SelectionSort(){

}

// sorts the array with selection sort iteratively
void SelectionSort::doArraySelectionSortIteratively(int arr[], unsigned int size, bool isAscending){
	for (int i = 0; i < size; i++){
		int pivot = arr[i];
		int pivotPosition = i;
		for (int j = i + 1; j < size; j++){
			//based on the boolean value, decide the order
			if (isAscending && arr[j] < pivot){
				pivot = arr[j];
				pivotPosition = j;
			}
			else if (!isAscending && arr[j] > pivot){
				pivot = arr[j];
				pivotPosition = j;
			}
		}

		//swap the pivot element found to the start ith position
		arr[pivotPosition] = arr[i];
		arr[i] = pivot;
	}
}

// sorts the vector with selection sort iteratively
void SelectionSort::doVectorSelectionSortIteratively(vector<int> &arr, unsigned int size, bool isAscending){
	for (int i = 0; i < size; i++){
		int pivot = arr[i];
		int pivotPosition = i;
		for (int j = i + 1; j < size; j++){
			//based on the boolean value, decide the order
			if (isAscending && arr[j] < pivot){
				pivot = arr[j];
				pivotPosition = j;
			}
			else if (!isAscending && arr[j] > pivot){
				pivot = arr[j];
				pivotPosition = j;
			}
		}

		//swap the pivot element found to the start ith position
		arr[pivotPosition] = arr[i];
		arr[i] = pivot;
	}
}

//sorts the array with Selection sort recursively
void SelectionSort::doArraySelectionSortRecursivley(int arr[], unsigned int size, bool isAscending){

	short int pivot = arr[0];
	short int pivotPosition = 0;
	for (short int j = 1; j < size; j++){
		//based on the boolean value, decide the order
		if (!isAscending && arr[j] < pivot){
			pivot = arr[j];
			pivotPosition = j;
		}
		else if (isAscending && arr[j] > pivot){
			pivot = arr[j];
			pivotPosition = j;
		}
	}

	//swap the pivot element found to the end  position
	arr[pivotPosition] = arr[size - 1];
	arr[size - 1] = pivot;

	if (size > 1){
		doArraySelectionSortRecursivley(arr, --size, isAscending);
	}
}


//sorts the vector with Selection sort recursively
void SelectionSort::doVectorSelectionSortRecursivley(vector<int> &arr, unsigned int size, bool isAscending){
	short int pivot = arr[0];
	short int pivotPosition = 0;
	for (int j = 1; j < size; j++){
		//based on the boolean value, decide the order
		if (!isAscending && arr[j] < pivot){
			pivot = arr[j];
			pivotPosition = j;
		}
		else if (isAscending && arr[j] > pivot){
			pivot = arr[j];
			pivotPosition = j;
		}
	}

	//swap the pivot element found to the end  position
	arr[pivotPosition] = arr[size - 1];
	arr[size - 1] = pivot;

	if (size > 1){
		doVectorSelectionSortRecursivley(arr, --size, isAscending);
	}
}





