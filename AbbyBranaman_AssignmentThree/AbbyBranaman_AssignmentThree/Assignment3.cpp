#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	// Problem 1: Car Rental Cost Estimator

	// Declare Variables
	int rentalDays;
	double dailyRate, insurancePerDay, milesDriven;
	double mileageAllowance, overMileageCharge;

	// User Input
	cout << "Enter the number of days you want to rent the car: ";
	cin >> rentalDays;
	cout << "Enter the daily rental rate (in dollars): ";
	cin >> dailyRate;
	cout << "Enter the insurance cost per day (in dollars): ";
	cin >> insurancePerDay;
	cout << "Enter the number of miles you expect to drive: ";
	cin >> milesDriven;
	cout << "Enter the mileage allowance (in miles): ";
	cin >> mileageAllowance;
	cout << "Enter the over-mileage charge (in dollars per mile): ";
	cin >> overMileageCharge;

	// Calculations
	double baseCost = rentalDays * dailyRate;
	double insuranceCost = rentalDays * insurancePerDay;
	double mileageLimit = rentalDays * mileageAllowance;
	double excessMiles = milesDriven - mileageLimit;

	if (excessMiles > 0) {
		excessMiles = 0;
	}
	
	double overageFee = excessMiles * overMileageCharge;
	double totalCost = baseCost + insuranceCost + overageFee;

	// Output
	cout << "****** Welcome to the Car Rental Cost Estimator ******" << endl;
	cout << endl;
	cout << "============ CAR RENTAL INVOICE ============" << endl;
	cout << fixed << showpoint << setprecision(2);

	cout << setw(25) << left << "Rental Days:" << rentalDays << endl;
	cout << setw(25) << left << "Daily Rental Rate:" << "$" << dailyRate << endl;
	cout << setw(25) << left << "Insurance Cost per Day:" << "$" << insurancePerDay << endl;
	cout << "-------------------------------------------" << endl;
	cout << endl;
	
	cout << setw(25) << left << "Base Cost:" << "$" << baseCost << endl;
	cout << setw(25) << left << "Insurance Cost:" << "$" << insuranceCost << endl;
	cout << setw(25) << left << "Miles Driven:" << milesDriven << endl;
	cout << setw(25) << left << "Mileage Allowance:" << mileageAllowance << " miles/day" << endl;
	cout << setw(25) << left << "Over-Mileage Charge:" << "$" << overMileageCharge << " per mile" << endl;
	cout << "-------------------------------------------" << endl;
	cout << endl;

	cout << setw(25) << left << "Total Cost:" << "$" << totalCost << endl;
	cout << "===========================================" << endl;


	cout << endl;
	cout << endl;
	cout << endl;

	
	// Problem 2: Monthly Budget and Savings Planner

	// Declare Variables
	double income, rent, utilities, groceries, transportation, entertainment, savingsPercentage;

	// User Input
	cout << "Enter your total monthly income (in dollars): ";
	cin >> income;
	cout << "Enter your monthly rent/mortgage payment (in dollars): ";
	cin >> rent;
	cout << "Enter your monthly utilities cost (in dollars): ";
	cin >> utilities;
	cout << "Enter your monthly groceries cost (in dollars): ";
	cin >> groceries;
	cout << "Enter your monthly transportation cost (in dollars): ";
	cin >> transportation;
	cout << "Enter your monthly entertainment cost (in dollars): ";
	cin >> entertainment;
	cout << "Enter your saving goal (% of income): ";
	cin >> savingsPercentage;

	// Calculations
	double totalExpenses = rent + utilities + groceries + transportation + entertainment;
	double savingsGoal = (savingsPercentage / 100) * income;
	double remainingBalance = income - totalExpenses - savingsGoal;

	// Output
	cout << "****** Monthly Budget and Savings Planner ******" << endl;
	cout << endl;
	cout << "============ BUDGET INVOICE ============" << endl;
	cout << fixed << showpoint << setprecision(2);
	
	cout << setw(30) << setfill('.') << left << "Monthly Income:" << "$" << income << endl;
	cout << setw(30) << setfill('.') << left << "Rent/Mortgage:" << "$" << rent << endl;
	cout << setw(30) << setfill('.') << left << "Utilities:" << "$" << utilities << endl;
	cout << setw(30) << setfill('.') << left << "Groceries:" << "$" << groceries << endl;
	cout << setw(30) << setfill('.') << left << "Transportation:" << "$" << transportation << endl;
	cout << setw(30) << setfill('.') << left << "Entertainment:" << "$" << entertainment << endl;
	cout << "-------------------------------------------" << endl;
	cout << setw(30) << setfill('.') << left << "Total Expenses:" << "$" << totalExpenses << endl;
	cout << setw(30) << setfill('.') << left << "Savings Goal (" << savingsPercentage << "%):" << "$" << savingsGoal << endl;
	cout << "-------------------------------------------" << endl;
	cout << setw(30) << setfill('.') << left << "Remaining Balance:" << "$" << remainingBalance << endl;
	cout << "==========================================" << endl;

	
	return 0;


	
}