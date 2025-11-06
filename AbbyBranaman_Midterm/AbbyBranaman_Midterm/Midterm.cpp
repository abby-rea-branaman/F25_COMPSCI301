#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	// PROBLEM 1
	
	// Declare variables
	string customerName;
	int numItems;
	double pricePerItem;
	char member;
	double subtotal = 0.0, discountRate = 0.0, memberDiscountRate = 0.0, totalDiscount = 0.0, finalTotal;

	cout << "\n~~~~~~~~~~~~~~~ Tech Store Invoice ~~~~~~~~~~~~~~~\n";

	// User input
	cout << "Enter customer name: ";
	getline(cin, customerName);
	cout << "Enter number of items purchased: ";
	cin >> numItems;
	cout << "Enter price per item: ";
	cin >> pricePerItem;
	cout << "Is the customer a member? (Y/N): ";
	cin >> member;

	// Move calculation of subtotal before using it in discount logic
	subtotal = numItems * pricePerItem;

	// Discount on subtotal
	if (subtotal > 500)
		discountRate = 0.10;
	else if (subtotal > 300)
		discountRate = 0.05;
	else 
		discountRate = 0.0;
	// Member discount
	if (member == 'Y' || member == 'y')
		memberDiscountRate = 0.02;
	else
		memberDiscountRate = 0.0;

	// Calculations 
	double discountAmount = subtotal * discountRate;
	double memberDiscountAmount = subtotal * memberDiscountRate;
	totalDiscount = discountAmount + memberDiscountAmount;
	finalTotal = subtotal - totalDiscount;

	// Output
	cout << fixed << showpoint << setprecision(2);

	cout << left << setw(30) << setfill('.') << "Customer Name:" << customerName << endl;
	cout << left << setw(30) << setfill('.') << "Number of Items Purchased:" << numItems << endl;
	cout << left << setw(30) << setfill('.') << "Price per Item:" << "$" << pricePerItem << endl;
	cout << left << setw(30) << setfill('.') << "Subtotal:" << "$" << subtotal << endl;
	cout << endl;

	cout << left << setw(30) << setfill('.') << "Discount Applied:" << (discountRate * 100) << "%" << endl;
	cout << left << setw(30) << setfill('.') << "Member Discount Applied:" << (memberDiscountRate * 100) << "%" << endl;
	cout << endl;
	
	cout << left << setw(30) << setfill('.') << "Final Total:" << "$" << finalTotal << endl;


	// PROBLEM 2
	
	// Declare variables
	string studentName;
	double gpa;
	int satScore;
	char extracurricular;
	string admissionStatus, decisionReason;

	// Heading
	cout << "\n~~~~~~~~~~~~~~~ University Admission Decision ~~~~~~~~~~~~~~~\n";

	// User input
	cout << "Enter student name: ";
	cin.ignore();
	getline(cin, studentName);

	cout << "Enter GPA: ";
	cin >> gpa;

	cout << "Enter SAT score: ";
	cin >> satScore;

	cout << "Does the student participate in extracurricular activities? (Y/N): ";
	cin >> extracurricular;

	// Eligibility 
	bool isExtracurricular = (extracurricular == 'Y' || extracurricular == 'y');

	if (gpa >= 3.5 && satScore >= 1300) {
		admissionStatus = "Accepted";
		decisionReason = "Meets both GPA and SAT requirements.";
	}
	else if (gpa >= 3.0 && satScore >= 1000 && isExtracurricular) {
		admissionStatus = "Accepted";
		decisionReason = "Meets GPA and SAT requirements with extracurricular activities.";
	}
	else {
		admissionStatus = "Rejected";
		decisionReason = "Does not meet the admission criteria.";
	
	}

	// Output
	cout << fixed << showpoint << setprecision(2);

	cout << "\n ~~~~~~~~~~~~~~~ Admission Decision ~~~~~~~~~~~~~~~\n";
	cout << left << setw(30) << setfill('.') << "Student Name:" << studentName << endl;
	cout << left << setw(30) << setfill('.') << "GPA:" << gpa << endl;
	cout << left << setw(30) << setfill('.') << "SAT Score:" << satScore << endl;
	cout << left << setw(30) << setfill('.') << "Extracurricular Activities:" << (isExtracurricular ? "Yes" : "No") << endl;
	
	cout << endl;
	
	cout << left << setw(30) << setfill('.') << "Admission Status:" << admissionStatus << endl;
	cout << left << setw(30) << setfill('.') << "Decision Reason:" << decisionReason << endl;


	// PROBLEM 3

	// Declare variables
	string name;
	int score1, score2, score3, finalScore;
	string letterGrade;

	// Heading
	cout << "\n~~~~~~~~~~~~~~~ Student Grade Calculator ~~~~~~~~~~~~~~~\n";

	// User input
	cout << "Enter student name: ";
	cin.ignore();
	getline(cin, name);

	cout << "Enter score for Test 1 (0-100): ";
	cin >> score1;
	cout << "Enter score for Test 2 (0-100): ";
	cin >> score2;
	cout << "Enter score for Test 3 (0-100): ";
	cin >> score3;

	// Final score calculation
	finalScore = (score1 + score2 + score3) / 3.0;

	// Letter grade determination
	if (finalScore >= 97)
		letterGrade = "A+";
	else if (finalScore >= 93)
		letterGrade = "A";
	else if (finalScore >= 90)
		letterGrade = "A-";
	else if (finalScore >= 87)
		letterGrade = "B+";
	else if (finalScore >= 83)
		letterGrade = "B";
	else if (finalScore >= 80)
		letterGrade = "B-";
	else if (finalScore >= 77)
		letterGrade = "C+";
	else if (finalScore >= 73)
		letterGrade = "C";
	else if (finalScore >= 70)
		letterGrade = "C-";
	else if (finalScore >= 67)
		letterGrade = "D+";
	else if (finalScore >= 63)
		letterGrade = "D";
	else if (finalScore >= 60)
		letterGrade = "D-";
	else
		letterGrade = "F";

	// Output
	cout << fixed << showpoint << setprecision(2);
	cout << "\n ~~~~~~~~~~~~~~~ Grade Report ~~~~~~~~~~~~~~~\n";
	cout << left << setw(30) << setfill('.') << "Student Name:" << name << endl;
	cout << left << setw(30) << setfill('.') << "Test 1 Score:" << score1 << endl;
	cout << left << setw(30) << setfill('.') << "Test 2 Score:" << score2 << endl;
	cout << left << setw(30) << setfill('.') << "Test 3 Score:" << score3 << endl;

	cout << endl;
	
	
	cout << left << setw(30) << setfill('.') << "Final Score:" << finalScore << endl;
	cout << left << setw(30) << setfill('.') << "Letter Grade:" << letterGrade << endl;

	// Ending Message 
	if (letterGrade == "A+" || letterGrade == "A" || letterGrade == "A-") {
		cout << "\nExcellent work! Keep it up!\n";
	}
	else if (letterGrade == "B+" || letterGrade == "B" || letterGrade == "B-") {
		cout << "\nGood job! You can do even better!\n";
	}
	else if (letterGrade == "C+" || letterGrade == "C" || letterGrade == "C-") {
		cout << "\nYou passed, but there's room for improvement.\n";
	}
	else if (letterGrade == "D+" || letterGrade == "D" || letterGrade == "D-") {
		cout << "\nYou need to work harder to improve your grades.\n";
	}
	else {
		cout << "\nUnfortunately, you did not pass. Don't give up, keep trying!\n";
	}




	return 0;



}