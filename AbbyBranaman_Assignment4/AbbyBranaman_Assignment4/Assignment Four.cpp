#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

    // PROBLEM ONE 
    string strInputs[3] = { "", "", "" };  // name, gender
    int intInputs[2] = { 0, 0 };           // age, heightFeet
    double dblInputs[2] = { 0.0, 0.0 };    // heightInches, weight

    cout << "Enter your name: ";
    getline(cin, strInputs[0]);

    cout << "Enter your age: ";
    cin >> intInputs[0];

    cout << "Enter your gender (male/female): ";
    cin >> strInputs[1];

    cout << "Enter height (feet): ";
    cin >> intInputs[1];

    cout << "Enter height (inches): ";
    cin >> dblInputs[0];

    cout << "Enter weight (in pounds): ";
    cin >> dblInputs[1];

    double totalHeightInches = (intInputs[1] * 12) + dblInputs[0];
    double bmi = (703 * dblInputs[1]) / pow(totalHeightInches, 2);

    string bmiCategory;
    if (bmi < 16)
        bmiCategory = "Severe Thinness";
    else if (bmi < 17)
        bmiCategory = "Moderate Thinness";
    else if (bmi < 18.5)
        bmiCategory = "Mild Thinness";
    else if (bmi < 25)
        bmiCategory = "Normal";
    else if (bmi < 30)
        bmiCategory = "Overweight";
    else
        bmiCategory = "Obese";

    cout << "\n------------- BMI REPORT -------------\n";
    cout << "Name: " << strInputs[0] << endl;
    cout << "Age: " << intInputs[0] << endl;
    cout << "Gender: " << strInputs[1] << endl;
    cout << "Height: " << intInputs[1] << " feet, " << dblInputs[0] << " inches" << endl;
    cout << "Weight: " << dblInputs[1] << " lbs" << endl;
    cout << "BMI: " << bmi << endl;
    cout << "BMI Category: " << bmiCategory << endl;
    cout << "--------------------------------------\n\n";


    // PROBLEM TWO
    int month, day, year;
    char again = 'Y';

    cout << "Welcome to Birthday Date Meaning Generator!\n";

    while (again == 'Y' || again == 'y') {

        cout << "Please enter the month of your birthday (1-12): ";
        cin >> month;

        cout << "Please enter the day of your birthday (1-31): ";
        cin >> day;

        cout << "Please enter the year of your birthday (2000-2023): ";
        cin >> year;

        string monthMeaning;

        switch (month) {
        case 1: monthMeaning = "January means Janus (the god of beginnings)"; break;
        case 2: monthMeaning = "February means purification"; break;
        case 3: monthMeaning = "March means Mars, the god of war"; break;
        case 4: monthMeaning = "April means to open or bloom"; break;
        case 5: monthMeaning = "May is named after Maia, goddess of growth"; break;
        case 6: monthMeaning = "June comes from Juno, goddess of marriage"; break;
        case 7: monthMeaning = "July is named after Julius Caesar"; break;
        case 8: monthMeaning = "August is named after Augustus Caesar"; break;
        case 9: monthMeaning = "September means seventh month"; break;
        case 10: monthMeaning = "October means eighth month"; break;
        case 11: monthMeaning = "November means ninth month"; break;
        case 12: monthMeaning = "December means tenth month"; break;
        default: monthMeaning = "Invalid month entered"; break;
        }

        string dayMeaning;
        if (day == 1) dayMeaning = "1 means you are a Self-Starter";
        else if (day == 2) dayMeaning = "2 means you are Cooperative";
        else if (day == 3) dayMeaning = "3 means you are Creative";
        else if (day == 4) dayMeaning = "4 means you are Practical";
        else if (day == 5) dayMeaning = "5 means you are Adventurous";
        else if (day == 6) dayMeaning = "6 means you are Responsible";
        else if (day == 7) dayMeaning = "7 means you are Analytical";
        else if (day == 8) dayMeaning = "8 means you are Ambitious";
        else if (day == 9) dayMeaning = "9 means you are Compassionate";
        else dayMeaning = "This is a unique day with special meaning!";

        string yearMeaning;
        if (year >= 2000 && year <= 2004)
            yearMeaning = "You are a Millennial";
        else if (year >= 2005 && year <= 2012)
            yearMeaning = "You are part of Generation Z";
        else if (year >= 2013 && year <= 2023)
            yearMeaning = "You are part of Generation Alpha";
        else
            yearMeaning = "Year out of valid range";

        cout << "\n--- Birthday Meaning Report ---\n";
        cout << monthMeaning << endl;
        cout << "The " << day << " of the month means: " << dayMeaning << endl;
        cout << "The year " << year << " means: " << yearMeaning << endl;

        cout << "\nWould you like to try another one? (Y/N): ";
        cin >> again;
        cout << endl;
    }

    cout << "Thanks for playing!\n\n";


    // PROBLEM THREE
    string op;
    double num1, num2;
    char playAgain = 'A';

    cout << "Welcome to the Basic Math Calculator!\n";

    while (playAgain == 'A' || playAgain == 'a') {

        cout << "\nEnter an operation (+, -, *, /, %, ^, sin, asin, cos, acos, tan, atan, atan2, sqrt, ceil, abs, floor, max, min, log, log10, log2, round): ";
        cin >> op;

        // Two-number operations
        if (op == "+" || op == "-" || op == "*" || op == "/" || op == "%" ||
            op == "^" || op == "max" || op == "min" || op == "atan2") {

            cout << "Enter first number: ";
            cin >> num1;

            cout << "Enter second number: ";
            cin >> num2;

            if (op == "+")
                cout << "Answer: " << num1 + num2 << endl;
            else if (op == "-")
                cout << "Answer: " << num1 - num2 << endl;
            else if (op == "*")
                cout << "Answer: " << num1 * num2 << endl;
            else if (op == "/") {
                if (num2 == 0)
                    cout << "Error: Cannot divide by zero.\n";
                else
                    cout << "Answer: " << num1 / num2 << endl;
            }
            else if (op == "%")
                cout << "Answer: " << ((int)num1 % (int)num2) << endl;
            else if (op == "^")
                cout << "Answer: " << pow(num1, num2) << endl;
            else if (op == "max")
                cout << "Answer: " << fmax(num1, num2) << endl;
            else if (op == "min")
                cout << "Answer: " << fmin(num1, num2) << endl;
            else if (op == "atan2")
                cout << "Answer: " << atan2(num1, num2) << endl;
        }
        else {
            cout << "Enter a number: ";
            cin >> num1;

            if (op == "sin") cout << "Answer: " << sin(num1) << endl;
            else if (op == "asin") cout << "Answer: " << asin(num1) << endl;
            else if (op == "cos") cout << "Answer: " << cos(num1) << endl;
            else if (op == "acos") cout << "Answer: " << acos(num1) << endl;
            else if (op == "tan") cout << "Answer: " << tan(num1) << endl;
            else if (op == "atan") cout << "Answer: " << atan(num1) << endl;
            else if (op == "sqrt") cout << "Answer: " << sqrt(num1) << endl;
            else if (op == "ceil") cout << "Answer: " << ceil(num1) << endl;
            else if (op == "abs") cout << "Answer: " << fabs(num1) << endl;
            else if (op == "floor") cout << "Answer: " << floor(num1) << endl;
            else if (op == "log") cout << "Answer: " << log(num1) << endl;
            else if (op == "log10") cout << "Answer: " << log10(num1) << endl;
            else if (op == "log2") cout << "Answer: " << log2(num1) << endl;
            else if (op == "round") cout << "Answer: " << round(num1) << endl;
            else cout << "Invalid operation entered.\n";
        }

        cout << "\nWould you like to solve another problem? (A/D): ";
        cin >> playAgain;
    }

    cout << "Thanks for using the calculator!\n";

    return 0;
}
