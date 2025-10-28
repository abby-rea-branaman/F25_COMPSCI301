#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	// Declare variables
	int small, medium, large; // Number of Coffee sizes ordered
	const double SMALL_PRICE = 2.25;
	const double MEDIUM_PRICE = 3.00;
	const double LARGE_PRICE = 3.75;

	const double TAX_RATE = 8.25;

	// Get user input
	cout << "Enter number of small coffees ordered: ";
	cin >> small;
	cout << "Enter number of medium coffees ordered: ";
	cin >> medium;
	cout << "Enter number of large coffees ordered: ";
	cin >> large;
	
	// Calculations 
	double subtotal = (small * SMALL_PRICE) + (medium * MEDIUM_PRICE) + (large * LARGE_PRICE);
	double tax = subtotal * (TAX_RATE / 100);
	double total = subtotal + tax;

	// Output
	cout << "****** Welcome to the Coffee Shop Order Calculator ******" << endl;
	cout << endl;
	cout << endl;

	cout << fixed << setprecision(2);

	cout << "================= COFFEE ORDER RECEIPT =================" << endl;
	cout << left << setw(30) << setfill(' ') << "Small Coffees (" + to_string(small) + " x $2.25):" << right << "$" << fixed << setprecision(2) << showpoint << (small * SMALL_PRICE) << endl;
	cout << left << setw(30) << setfill(' ') << "Medium Coffees (" + to_string(medium) + " x $3.00):" << right << "$" << fixed << setprecision(2) << showpoint << (medium * MEDIUM_PRICE) << endl;
	cout << left << setw(30) << setfill(' ') << "Large Coffees (" + to_string(large) + " x $3.75):" << right << "$" << fixed << setprecision(2) << showpoint << (large * LARGE_PRICE) << endl;
	
	cout << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << endl;
	
	cout << left << setw(30) << setfill(' ') << "Subtotal:" << right << "$" << fixed << setprecision(2) << showpoint << subtotal << endl;
	cout << left << setw(30) << setfill(' ') << "Tax (8.25%):" << right << "$" << fixed << setprecision(2) << showpoint << tax << endl;

	cout << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << endl;

	cout << left << setw(30) << setfill(' ') << "Total:" << right << "$" << fixed << setprecision(2) << showpoint << total << endl;



}