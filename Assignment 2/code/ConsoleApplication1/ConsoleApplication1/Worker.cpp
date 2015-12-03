
///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : Worker.cpp												 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//																		 //
// DESC   : Worker.cpp contains the implementation of the member         //
//          variables and functions. It contains the implementation to   //
//			display the bar graph of worker's wage based on their		 //
//			type. It contains getters and setters  implementation      	 //
//			for total wage of each type of workers.  It also contains    //
//			implementation for functions accepting the pay code and      //
//			calculating the wage.                                        //
//																		 //
//////////////////////////////////////////////////////////////////////////

#include "Worker.h"
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::setprecision;
using std::fixed; 
using std::string;
	

	//method to display the bar graph
	void Worker :: displayBarGraph(){
		//label to indicate the display of bar chart
		cout << " Displaying the bar chart : " << endl;
		//displaying the stats bar for managers in terms of asterik(star)
		cout << setw(15) << "Managers" << setw(25) << getStatsinStarFormat(getTotalPayOfManagers()) << endl;
		//displaying the stats bar for hourly workers in terms of asterik(star)
		cout << setw(15) << "Hourly" << setw(25) << getStatsinStarFormat(getTotalPayOfHourlyWorkers()) << endl;
		//displaying the stats bar for commission workers in terms of asterik(star)
		cout << setw(15) << "Commission" << setw(25) << getStatsinStarFormat(getTotalPayOfComissionWorkers()) << endl;
		//displaying the stats bar for piece workers in terms of asterik(star)
		cout << setw(15) << "Piece" << setw(25) << getStatsinStarFormat(getTotalPayOfPieceWorkers()) << endl;
	}




	//constructor
	Worker::Worker(){
		setTotalPayOfManagers(0);
		setTotalPayOfHourlyWorkers(0);
		setTotalPayOfComissionWorkers(0);
		setTotalPayOfPieceWorkers(0);
	}

	//getter for total salary for managers
	double Worker:: getTotalPayOfManagers(){
		return totalPayOfManagers;
	}

	//setter for total salary for managers
	void Worker:: setTotalPayOfManagers(double managersPay){
		totalPayOfManagers = managersPay;
	}

	//getter for total salary for hourly workers
	double Worker:: getTotalPayOfHourlyWorkers(){
		return totalPayOfHourlyWorkers;
	}

	//setter for total salary for hourly workers
	void Worker:: setTotalPayOfHourlyWorkers(double hourlyWorkersPay){
		totalPayOfHourlyWorkers = hourlyWorkersPay;
	}

	//getter for total salary for comission workers
	double Worker:: getTotalPayOfComissionWorkers(){
		return totalPayOfComissionWorkers;
	}

	//setter for total salary for comission workers
	void Worker::setTotalPayOfComissionWorkers(double comissionWorkersPay){
		totalPayOfComissionWorkers = comissionWorkersPay;
	}

	//getter for total salary for piece workers
	double Worker:: getTotalPayOfPieceWorkers(){
		return totalPayOfPieceWorkers;
	}

	//setter for total salary for piece workers
	void Worker:: setTotalPayOfPieceWorkers(double pieceWorkersPay){
		totalPayOfPieceWorkers = pieceWorkersPay;
	}

	//input function for pay code and call the appropriate utilities to calculate wage based on employee type
	void Worker:: askPayCodesAndCalculateWageForEachEmployeeType(){
		int payCode = 0;

		while (payCode != -1){
			//ask the user to enter the paycode
			cout << "Enter paycode (-1 to end) : " ;
			cin >> payCode;
			//set doubleing point number format
			cout << fixed << setprecision(2);
			
			switch (payCode)
			{
				case 1: processManagerInput(); break;
				case 2: processHourlyWorkerInput(); break;
				case 3: processComissionWorkerInput(); break;
				case 4: processPieceWorkerInput(); break;
				default:break;
			}
			//to take the next input prompt on new line
			cout << endl;
			cout << endl;
		}

		//finally display the total salary stats of each type of employee using bar graph stats
		displayBarGraph();
	}

	//ask for input for Manager Employee Type and calculate wage
	void Worker::processManagerInput(){
		double weeklySalary = 0.0;
		cout << "Manager selected." << endl;
		cout << "Enter weekly salary: " ;
		cin >> weeklySalary;
		//displaying the Manager's pay
		cout << "Manager's Pay is $" << weeklySalary;
		//to show on bar graph how much total money was earned by managers
		setTotalPayOfManagers(getTotalPayOfManagers() + weeklySalary);
	}

	//ask for input for Hourly Worker Employee Type and calculate wage
	void Worker:: processHourlyWorkerInput(){
		double hourlySalary = 0.0;
		double totalHours = 0.0;
		double salaryOfWorker = 0.0;

		cout << "Hourly Worker selected." << endl;
		cout << "Enter the hourly salary: ";
		cin >> hourlySalary;
		cout << "Enter the total hours worked: ";
		cin >> totalHours;
		double overtimeHours = 0.0;
		if (totalHours > 40){
			overtimeHours = totalHours - 40;
			salaryOfWorker = 40 * hourlySalary + (overtimeHours * 1.5 * hourlySalary);
		}
		else {
			salaryOfWorker = totalHours * hourlySalary;
		}
		//displaying the Worker's pay
		cout << "Worker's pay is $" <<  salaryOfWorker;
		//to show on bar graph how much total money was earned by hourly workers
		setTotalPayOfHourlyWorkers(getTotalPayOfHourlyWorkers() + salaryOfWorker);
	}

	//ask for input for Comission Worker Employee Type and calculate wage
	void Worker:: processComissionWorkerInput(){
		double grossWeeklySales = 0.0;
		double salaryOfCommissionWorker = 0.0;
		cout << "Commission Worker selected." << endl;
		cout << "Enter gross weekly sales: ";
		cin >> grossWeeklySales;
		salaryOfCommissionWorker = fixedPortionOfSalaryForCommissionWorkers + (0.057 * grossWeeklySales);
		//displaying the Worker's pay
		cout << "Commission Worker's pay is $" << salaryOfCommissionWorker;
		//to show on bar graph how much total money was earned by commission workers
		setTotalPayOfComissionWorkers(getTotalPayOfComissionWorkers() + salaryOfCommissionWorker);
	}

	//ask for input for piece Worker Employee Type and calculate wage
	void Worker:: processPieceWorkerInput(){
		double numberOfPieces = 0.0;
		double wagePerPiece = 0.0;
		double salaryOfPieceWorker = 0.0;
		cout << "PieceWorker selected." << endl;
		cout << "Enter the number of pieces: ";
		cin >> numberOfPieces;
		cout << "Enter wage per piece: ";
		cin >> wagePerPiece;
		salaryOfPieceWorker = numberOfPieces * wagePerPiece;
		//displaying the Worker's pay
		cout << "PieceWorker's pay is $"  << salaryOfPieceWorker;
		//to show on bar graph how much total money was earned by piece workers		
		setTotalPayOfPieceWorkers(getTotalPayOfPieceWorkers() + salaryOfPieceWorker);
	}

	

	//return the string containing number of stars
	string Worker:: getStatsinStarFormat(double totalWage){
		string starString = "";
		
		int noOfStars = roundUp((int)totalWage);

		int i = 0; 
		// append the star sign for bar chart
		while (i < noOfStars){
			starString = starString + star;
			i++;
		}

		return starString;
	}

	//round the number according to the multiple
	int  Worker:: roundUp(int salary)
	{
		int lastTwoDigits;
		//modulus operation gives us the last 2 digits.
		lastTwoDigits = salary % 100;        
		if (lastTwoDigits >= 50)
		{
			//if last 2 digits are greater than 50, then incrementing hunder's place.
			salary = salary + (100 - lastTwoDigits);   
		}
		else
		{
			//else keeping the hundered's place as it is.
			salary = salary - lastTwoDigits; 
		}
		return (salary / 100);
	}
	