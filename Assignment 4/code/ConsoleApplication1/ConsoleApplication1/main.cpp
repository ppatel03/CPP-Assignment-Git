///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : main.cpp													 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//																		 //
// DESC   : SelectionSort.h contains the main function implementation    //
//			which creates an object of SelectionSort class  used for	 //
//			sorting the array and vectors and comparing their		     //
//			performance with each other and with small and large		 //
//			numbers.													 //
//																		 //
//////////////////////////////////////////////////////////////////////////

#include "SelectionSort.h"
#include "TimeStamp.h" // TimeStamp class
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;


#include <ctime>
#include <math.h>
using std::rand;
using std::srand;


//smaller collection data limit
const int smallSize = 20;

//larger collection data limit = 3500. I have not take more than 5000 because my visual studio hangs in my machine
// on taking input data more than 3500
const int largeSize = 3600;


//min limit for number in array
const int minLimit = 0;

//max limit for number in array
const int maxLimit = 100;

//returns a random number from a particular range between  minLimit - maxLimit
int chooseRandomNumber(int minLimit, int maxLimit){

	//generating the random number by adding the minLimit and getting the last digit of the time in seconds since Jan 1 1970
	int randomNumber = minLimit + rand() % maxLimit;

	return randomNumber;
}

//initialize array with random values
template<class T> void initializeCollectionDataWithDefaultValues(T data, int size){
	//setting the seed to generate different random numbers on every  call to this function
	srand((unsigned int)time(0));
	for (int i = 0; i < size; i++){
		data[i] = chooseRandomNumber(minLimit, maxLimit);
	}
}

//initialize array with random values
void initializeVectorCollectionDataWithDefaultValues(vector<int> & data, int size){
	//setting the seed to generate different random numbers on every  call to this function
	srand((unsigned int)time(0));
	for (int i = 0; i < size; i++){
		data[i] = chooseRandomNumber(minLimit, maxLimit);
	}
}



//copy array values from one array into another
void copyValuesFromOneArrayIntoAnother(int arr1[], int arr2[], int size){
	for (int i = 0; i < size; i++){
		arr2[i] = arr1[i];
	}
}

//display the collection data
template<class T> void printData(T data, unsigned int size){
	for (int i = 0; i < size; i++){
		cout << data[i] << "  ";
	}
	cout << endl;
}

void main(){
	SelectionSort selectionSort;
	

	// declare small array
	int smallArray[smallSize];
	// declare large array
	int largeArray[largeSize];
	// declare small vector
	vector<int> smallVectorData(smallSize);
	// declare large vector
	vector<int> largeVectorData(largeSize);



	// call helper function to put random data in small array
	initializeCollectionDataWithDefaultValues(smallArray, smallSize);
	// call helper function to put random data in large array
	initializeCollectionDataWithDefaultValues(largeArray, largeSize);
	// call helper function to make copy of small array
	int smallArrayCopy[smallSize];
	copyValuesFromOneArrayIntoAnother(smallArray, smallArrayCopy, smallSize);
	// call helper function to make copy of large array
	int largeArrayCopy[largeSize];
	copyValuesFromOneArrayIntoAnother(largeArray, largeArrayCopy, largeSize);


	// call helper function to put random data in small vector 
	initializeVectorCollectionDataWithDefaultValues(smallVectorData, smallSize);
	// call helper function to put random data in large vector
	initializeVectorCollectionDataWithDefaultValues(largeVectorData, largeSize);
	// make copy of small vector 
	vector<int> smallVectorDataCopy(smallSize);
	smallVectorDataCopy = smallVectorData;
	// make copy of large vector (hint: use assignment operator, no function required)
	vector<int> largeVectorDataCopy(largeSize);
	largeVectorDataCopy = largeVectorData;

	// show that your sorting algorithms work by printing small array 
	// 	call helper function to print small array before sort
	cout << " Sorting Array Data For small values :::: " << endl;
	cout << "Before Sorting !!!! " << endl;
	printData(smallArray, smallSize);
	// 	sort small array with recursion
	selectionSort.doArraySelectionSortRecursivley(smallArray, smallSize, true);
	// 	call helper function to print sorted small array
	cout << "After Sorting with Recursion!!!! " << endl;
	printData(smallArray, smallSize);
	// 	sort copy of small array with iteration
	selectionSort.doArraySelectionSortIteratively(smallArrayCopy, smallSize, true);
	// 	call helper function to print sorted small array
	cout << "After Sorting with Iteration!!!! " << endl;
	printData(smallArrayCopy, smallSize);


	// 	call helper function to print small vector before sort	
	cout << endl;
	cout << " Sorting Vector Data For small values :::: " << endl;
	cout << "Before Sorting !!!! " << endl;
	printData(smallVectorData, smallSize);
	// 	sort small vector with recursion
	selectionSort.doVectorSelectionSortRecursivley(smallVectorData, smallSize, true);
	// 	call helper function to print sorted small vector
	cout << "After Sorting with Recursion!!!! " << endl;
	printData(smallVectorData, smallSize);
	// 	sort small vector with iteration
	selectionSort.doVectorSelectionSortIteratively(smallVectorDataCopy, smallSize, true);
	// 	call helper function to print sorted small vector
	cout << "After Sorting with Iteration!!!! " << endl;
	printData(smallVectorData, smallSize);


	// analyze performance of selection algorithms using large arrays.
	cout << endl;
	cout << endl;
	cout << " Sorting Array Data For large values :::: " << endl;
	// 	print timestamp
	string timeString;
	TimeStamp ts;
	timeString = ts.GetTime();
	cout << "Before Sorting With Recursion !!! ";
	cout << "The timestamp is : " << timeString << endl;
	// 	sort large array with recursion
	selectionSort.doArraySelectionSortRecursivley(largeArray, largeSize, true);
	// 	print timestamp
	timeString = ts.GetTime();
	cout << "After  Sorting With Recursion !!! ";
	cout << " The timestamp is : " << timeString << endl;
	// 	print timestamp
	timeString = ts.GetTime();
	cout << "Before Sorting With Iteration !!! ";
	cout << "The timestamp is : " << timeString << endl;
	// 	large array with iteration
	selectionSort.doArraySelectionSortIteratively(largeArrayCopy, largeSize, true);
	// 	print  timestamp
	timeString = ts.GetTime();
	cout << "After  Sorting With Iteration !!! ";
	cout << " The timestamp is : " << timeString << endl;



	// analyze performance of selection algorithms using large vectors.
	cout << endl;
	cout << " Sorting Vector Data For large values :::: " << endl;
	// 	print timestamp
	timeString = ts.GetTime();
	cout << "Before Sorting With Recursion !!! ";
	cout << "The timestamp is : " << timeString << endl;
	// 	sort large vector with recursion
	selectionSort.doVectorSelectionSortRecursivley(largeVectorData, largeSize, true);
	// 	print timestamp
	timeString = ts.GetTime();
	cout << "After  Sorting With Recursion !!! ";
	cout << " The timestamp is : " << timeString << endl;
	// 	print timestamp
	timeString = ts.GetTime();
	cout << "Before Sorting With Iteration !!! ";
	cout << "The timestamp is : " << timeString << endl;
	// sort	large vector with iteration
	selectionSort.doVectorSelectionSortIteratively(largeVectorDataCopy, largeSize, true);
	// 	print  timestamp
	timeString = ts.GetTime();
	cout << "After  Sorting With Iteration !!! ";
	cout << " The timestamp is : " << timeString << endl;

	cin.get();
}
