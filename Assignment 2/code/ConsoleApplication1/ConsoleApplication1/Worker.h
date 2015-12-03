
///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : Worker.h													 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//																		 //
// DESC   : Worker.h contains the declaration of the member variables    //
//          and functions. It contains the function declaration to		 //
//			display the bar graph of worker's wage based on their		 //
//			type. It contains getters and setters  declaration      	 //
//			for total wage of each type of workers.  It also contains    //
//			declaration for functions accepting the pay code and         //
//			calculating the wage.                                        //
//																		 //
//////////////////////////////////////////////////////////////////////////

#include<iostream>

using std::string;

class Worker{

private:

	// total salary for managers
	double  totalPayOfManagers;
	// total salary for hourly workers
	double  totalPayOfHourlyWorkers;
	// total salary for comission workers
	double  totalPayOfComissionWorkers;
	// total salary for piece workers
	double  totalPayOfPieceWorkers;
	//divisor for rounding total wage to stars
	const int divisor = 100;
	//string for displaying star
	const string star = "*";
	//max hours of worker
	const double maxHoursForWorker = 40;
	//fixed portion of commission for commission workers
	const double fixedPortionOfSalaryForCommissionWorkers = 250;


	//display the bar graph
	void displayBarGraph();
	//ask for input for Manager Employee Type and calculate wage
	void processManagerInput();
	//ask for input for Hourly Worker Employee Type and calculate wage
	void processHourlyWorkerInput();
	//ask for input for Comission Worker Employee Type and calculate wage
	void processComissionWorkerInput();
	//ask for input for piece Worker Employee Type and calculate wage
	void processPieceWorkerInput();
	//return the string containing number of stars
	string getStatsinStarFormat(double);
	//rounding to the nearest number
	int roundUp(int);

public:
	//constructor
	Worker();

	//getter for total salary for managers
	double getTotalPayOfManagers();
	//setter for total salary for managers
	void setTotalPayOfManagers(double);
	//getter for total salary for hourly workers
	double getTotalPayOfHourlyWorkers();
	//setter for total salary for hourly workers
	void setTotalPayOfHourlyWorkers(double);
	//getter for total salary for comission workers
	double getTotalPayOfComissionWorkers();
	//setter for total salary for comission workers
	void setTotalPayOfComissionWorkers(double);
	//getter for total salary for piece workers
	double getTotalPayOfPieceWorkers();
	//setter for total salary for piece workers
	void setTotalPayOfPieceWorkers(double);
	//input function for pay code and call the appropriate utilities to calculate wage based on employee type
	void askPayCodesAndCalculateWageForEachEmployeeType();

};