#include <iostream>
#include <string>
#include "BusRoute.h"
#include "Student.h"
using namespace std;

int main() {
    BusRoute route("Route A");

    Student s1(101, "Alice Johnson");
    Student s2(102, "Brandon Smith");
    Student s3(103, "Cathy Lee");

    route.addStudent(s1);
    route.addStudent(s2);
    route.addStudent(s3);

    int choice;

    do {
        cout << "\n====== BUS ROUTE MENU ======\n";
        cout << "1. Add Student\n";
        cout << "2. Mark Pickup\n";
        cout << "3. Mark Drop-off\n";
        cout << "4. Display All Students\n";
        cout << "5. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1) {
            int id;
            string name;

            cout << "Enter student ID: ";
            cin >> id;

            cout << "Enter student name: ";
            cin.ignore();
            getline(cin, name);

            Student newStudent(id, name);
            route.addStudent(newStudent);
        }

        else if (choice == 2) {
            int id;
            cout << "Enter student ID: ";
            cin >> id;
            route.markPickup(id);
        }

        else if (choice == 3) {
            int id;
            cout << "Enter student ID: ";
            cin >> id;
            route.markDropoff(id);
        }

        else if (choice == 4) {
            route.displayAll();
        }

        else if (choice == 5) {
            cout << "Exiting program...\n";
        }

        else {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 7);

    return 0;
}
