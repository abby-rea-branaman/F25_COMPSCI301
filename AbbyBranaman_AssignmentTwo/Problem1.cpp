#include <iostream>
using namespace std;

int main() {
	// Tech store Invoice 

	// Declare variables
	string item1, item2, accessory;
	double price1, price2, price3; 
	const double TAX_PRICE = 0.095; // Tax rate of 9.5%

	// User Input 
	cout << "Enter the name of the first item: ";
	cin >> item1;
	cout << "Enter the price of the first item: $";
	cin >> price1;

	cout << "Enter the name of the second item: ";
	cin >> item2;
	cout << "Enter the price of the second item: $";
	cin >> price2;

	cout << "Enter the name of the accessory: ";
	cin >> accessory;
	cout << "Enter the price of the accessory: $";
	cin >> price3;

	// Calculations 
	double subtotal = price1 + price2 + price3;
	double tax = subtotal * TAX_PRICE;
	double total = subtotal + tax;

	cout << endl;

	// Output
	cout << "\t\t\t\t\t ----- Tech Store Invoice ----- \n";
}