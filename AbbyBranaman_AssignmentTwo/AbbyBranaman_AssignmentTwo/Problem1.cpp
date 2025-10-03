#include <iostream>
#include <string>
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
	cout << "\t\t\t\t\t\t----- Tech Store Invoice ----- \n";
	cout << endl;

	cout << "\tItem\t\t\tPrice\n";
	cout << "\t-------------------------------------\n";
	cout << "\t" << item1 << "\t\t$" << price1 << endl;
	cout << "\t" << item2 << "\t\t$" << price2 << endl;
	cout << "\t" << accessory << "\t\t$" << price3 << endl;
	cout << "\t-------------------------------------\n";
	cout << "\tSubtotal:\t\t$" << subtotal << endl;
	cout << "\tTax (9.5%):\t\t$" << tax << endl;
	cout << "\tTotal:\t\t\t$" << total << endl;

	cout << endl;
	cout << endl;

	// Photoagraphy Trip Planner

	// Declare variables
	double distA, distB, distC, mpg, gasPrice, gearWeight;

	// User Input
	cout << "Enter the distance to location A (in miles): ";
	cin >> distA;
	cout << "Enter the distance to location B (in miles): ";
	cin >> distB;
	cout << "Enter the distance to location C (in miles): ";
	cin >> distC;

	cout << "Enter your vehicle's fuel efficiency (in miles per gallon): ";
	cin >> mpg;
	cout << "Enter the current price of gas (per gallon): $";
	cin >> gasPrice;
	cout << "Enter the weight of your photography gear (in pounds): ";
	cin >> gearWeight;

	// Calculations
	double totalDistance = distA + distB + distC;
	double totalGasCost = (totalDistance / mpg) * gasPrice;
	double weightFee = 0.15 * gearWeight * totalDistance;
	double totalTripCost = totalGasCost + weightFee;

	// Output
	cout << endl;
	cout << "\t\t\t\t\t----- Photography Trip Planner ----- \n";
	cout << endl;
	cout << "\tTotal Distance:\t\t" << totalDistance << " miles\n";
	cout << "\tTotal Gas Cost:\t\t$" << totalGasCost << endl;
	cout << "\tWeight Fee:\t\t$" << weightFee << endl;
	cout << "\tTotal Trip Cost:\t$" << totalTripCost << endl;
	
	cout << endl;
	cout << endl;

	// Freelance Invoice

	// Declare variables
	string client1, client2, client3;
	double hours1, hours2, hours3, rate1, rate2, rate3;

	// User Input
	cout << "Enter the name of the first client: ";
	cin >> client1;
	cout << "Enter the hours worked for the first client: ";
	cin >> hours1;
	cout << "Enter the hourly rate for the first client: $";
	cin >> rate1;
	
	cout << "Enter the name of the second client: ";
	cin >> client2;
	cout << "Enter the hours worked for the second client: ";
	cin >> hours2;
	cout << "Enter the hourly rate for the second client: $";
	cin >> rate2;

	cout << "Enter the name of the third client: ";
	cin >> client3;
	cout << "Enter the hours worked for the third client: ";
	cin >> hours3;
	cout << "Enter the hourly rate for the third client: $";
	cin >> rate3;

	// Calculations
	double payment1 = hours1 * rate1, payment2 = hours2 * rate2, payment3 = hours3 * rate3;
	double totalPayment = payment1 + payment2 + payment3;

	// Output
	cout << endl;
	cout << "\t\t\t\t\t----- Freelance Invoice ----- \n";
	cout << endl;
	cout << "\tClient\t\tHours Worked\tRate\tPayment\n";
	cout << "\t--------------------------------------------------\n";
	cout << "\t" << client1 << "\t\t" << hours1 << "\t\t$" << rate1 << "\t$" << payment1 << endl;
	cout << "\t" << client2 << "\t\t" << hours2 << "\t\t$" << rate2 << "\t$" << payment2 << endl;
	cout << "\t" << client3 << "\t\t" << hours3 << "\t\t$" << rate3 << "\t$" << payment3 << endl;
	cout << "\t--------------------------------------------------\n";
	cout << "\tTotal Payment:\t\t\t\t$" << totalPayment << endl;
	
	cout << endl;
	cout << endl;

	// Welcome message
	cout << "****** Welcome to the Guest Profile Generator ******\n\n";

	// Variables
	string fullName, preferredName, email, phone, cityState;
	string occupation, companyOrSchool, hobby, color, quote;

	// Input prompts using getline
	cout << "Enter your full name: ";
	cin.ignore(); // Clear the input buffer
	getline(cin, fullName);

	cout << "Enter your preferred name: ";
	getline(cin, preferredName);

	cout << "Enter your email address: ";
	getline(cin, email);

	cout << "Enter your phone number: ";
	getline(cin, phone);

	cout << "Enter your city and state: ";
	getline(cin, cityState);

	cout << "Enter your occupation: ";
	getline(cin, occupation);

	cout << "Enter your company or school: ";
	getline(cin, companyOrSchool);

	cout << "Enter your favorite hobby: ";
	getline(cin, hobby);

	cout << "Enter your favorite color: ";
	getline(cin, color);

	cout << "Enter a short quote or motto: ";
	getline(cin, quote);

	// Display profile
	cout << "\n========== Guest Profile Sheet ==========\n";
	cout << "Full Name:        " << fullName << endl;
	cout << "Preferred Name:   " << preferredName << endl;
	cout << "Email Address:    " << email << endl;
	cout << "Phone Number:     " << phone << endl;
	cout << "City & State:     " << cityState << endl;
	cout << "Occupation:       " << occupation << endl;
	cout << "Company/School:   " << companyOrSchool << endl;
	cout << "Favorite Hobby:   " << hobby << endl;
	cout << "Favorite Color:   " << color << endl;
	cout << "Personal Motto:   " << quote << endl;
	cout << "=========================================\n";

	cout << "Thank you for sharing your profile!\n";

	return 0;

}