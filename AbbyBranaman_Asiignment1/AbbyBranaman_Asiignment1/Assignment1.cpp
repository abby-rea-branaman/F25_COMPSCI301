#include <iostream>
using namespace std;

int main() {
	cout << "Class Schedule: " << endl;
	cout << "================" << endl;
	cout << endl;
	// Heading
	cout << "\t\t\t\t  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl;
	cout << "\t\t\t\t        Abby Branaman's Class Schedule      " << endl;
	cout << "\t\t\t\t              Fall Semester 2025                 " << endl;
	cout << " \t\t\t\t            University of La Verne              " << endl;
	cout << "\t\t\t\t  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl;

	//Page Break
	cout << endl;

	// Table Headers 
	cout << "\tDay	   " << "\tTime                   " << "\tCourse & Section          " << "\tRoom      " << "\tInstructor             " << endl;

	// Table Data
	cout << "\tM   " << "\t\t05:10 PM - 06:45 PM  " << "\tKINE 001            " << "\t\tFH 216 " << "\t\tGonzalez, Cresencio              " << endl;
	cout << "\tM / TH  " << "\t08:35 AM - 10:10 AM  " << "\tRCS 110            " << "\t\tFH 217 " << "\t\tRustin, Brock              " << endl;
	cout << "\tM / TH  " << "\t10:20 AM - 11:55 AM  " << "\tCS 301            " << "\t\tFH 207 " << "\t\tRodriguez, Juan              " << endl;
	cout << "\tM / TH  " << "\t01:50 PM - 03:25 PM  " << "\tPS 100            " << "\t\tH 117 " << "\t\tNeidleman, Jason              " << endl;
	cout << "\tM / TH  " << "\t03:30 PM - 05:30 PM  " << "\tRCS 100            " << "\t\tH 127 " << "\t\tHolzinger, Mikayla              " << endl;
	cout << "\tW   " << "\t\t03:30 PM - 06:40 PM  " << "\tJOU 100            " << "\t\tACB 109 " << "\tZwerling, Elizabeth              " << endl;

	cout << "\t--------------------------------------------------------------------------------------------------------------" << endl;

	// Footer
	cout << endl;
	cout << "\tTotal Units: 16" << endl;
	cout << endl;
	cout << "\tHave a great semester!" << endl;

	cout << endl;
	cout << endl;

	//Page Break
	cout << endl;
	cout << "Personal Profile: " << endl;
	cout << "================" << endl;
	cout << endl;

	// Declare Variables 
	string first_Name = "Abby", last_Name = "Branaman", major = "Computer Science", university = "University of La Verne", hometown = "Buffalo, WY", color = "Sage Green", dream_Place = "London", hobby = "Speech and Debate";
	int age = 18, num_pets = 1;
	double height = 5.4, years_Experience = 7;


	// Heading
	cout << "\t\t\t\t  ~~~~~~~~~~~~~~~~~~~~~ About Me! ~~~~~~~~~~~~~~~~~~~~ " << endl;

	//Display Variables
	cout << "Name: " << first_Name << " " << last_Name << endl;
	cout << "Age: " << age << endl;
	cout << "Height: " << height << " feet" << endl;
	cout << "Hometown: " << hometown << endl;
	cout << "Number of Pets: " << num_pets << endl;
	cout << "Major: " << major << endl;
	cout << "University: " << university << endl;
	cout << "Years of Experience with " << hobby << ": " << years_Experience << " years" << endl;
	cout << "Favorite Color: " << color << endl;
	cout << "Dream Place to Visit: " << dream_Place << endl;
	cout << "\t\t\t\t  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl;

	cout << endl;

	//Paragraph about yourself
	cout << "Hello! My name is " << first_Name << " " << last_Name << " and I am from " << hometown << ". I am " << age << " years old and stand at " << height << " feet tall.\nI have " << num_pets << " pet at home that I absolutely adore. I am currently majoring in " << major << " at the " << university << ".\nI have been involved in " << hobby << " for about " << years_Experience << " years now, and it has been an incredible journey so far.\nMy favorite color is " << color << ", and if I could visit any place in the world, it would be " << dream_Place << ". I am excited to \ncontinue my studies and see where my passion for computer science takes me!" << endl;

	cout << endl;
	cout << endl;

	cout << "Budget Breakdown: " << endl;
	cout << "================" << endl;
	cout << endl;

	// Declare Variables
	double paycheck = 5500.00, tution = 1000.00, rent = 750.00, groceries = 50.00, utilities = 150.00, transportation = 50.00, entertainment = 100.00, percentage_Saved = 0.20;
	double savings = paycheck * percentage_Saved;
	double total_Expenses = tution + rent + groceries + utilities + transportation + entertainment + savings;
	double remaining_Balance = paycheck - total_Expenses;
	double finalSpendingMoney = remaining_Balance;

	// Heading
	cout << "\t\t\t\t  ~~~~~~~~~~~~~~~~~~~~~ Monthly Budget ~~~~~~~~~~~~~~~~~~~~ " << endl;
	cout << endl;

	// Display Variables
	cout << "Monthly Paycheck: $" << paycheck << endl;
	cout << "-------------------------------------" << endl;
	cout << endl;

	cout << "Expenses: " << endl;
	cout << "Tuition: $" << tution << endl;
	cout << "Rent: $" << rent << endl;
	cout << "Groceries: $" << groceries << endl;
	cout << "Utilities: $" << utilities << endl;
	cout << "Transportation: $" << transportation << endl;
	cout << "Entertainment: $" << entertainment << endl;
	cout << endl;
	cout << "-------------------------------------";
	cout << endl;

	cout << "What is Left / Savings: " << endl;
	cout << "Total Expenses: $" << total_Expenses << endl;
	cout << endl;
	cout << "What is Left After Expenses: $" << remaining_Balance << endl;
	cout << "Savings (20% of Paycheck): $" << savings << endl;
	cout << endl;
	cout << "Final Spending Money: $" << finalSpendingMoney << endl;
	cout << endl;
	cout << "-------------------------------------" << endl;

	return 0;
}