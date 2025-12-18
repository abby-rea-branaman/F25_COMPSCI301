#include "BusRoute.h"
#include <fstream>
#include <sstream>
using namespace std;

BusRoute::BusRoute() {
    routeID = "Unknown";
}

BusRoute::BusRoute(string routeID) {
    this->routeID = routeID;
}

void BusRoute::addStudent(const Student& s) {
    students.push_back(s);
    cout << "Student added successfully!\n";
}

void BusRoute::removeStudent(int id) {
    for (int i = 0; i < students.size(); i++) {
        if (students[i].getId() == id) {
            students.erase(students.begin() + i);
            cout << "Student removed successfully!\n";
            return;
        }
    }
    cout << "Student not found.\n";
}

void BusRoute::markPickup(int id) {
    for (auto& s : students) {
        if (s.getId() == id) {
            s.markPickup();
            return;
        }
    }
    cout << "Student not found.\n";
}

void BusRoute::markDropoff(int id) {
    for (auto& s : students) {
        if (s.getId() == id) {
            s.markDropoff();
            return;
        }
    }
    cout << "Student not found.\n";
}

void BusRoute::displayAll() const {
    cout << "\n--- Students on Route " << routeID << " ---\n";
    for (auto s : students) {
        s.displayInfo();
    }
}

// Save From File

void BusRoute::saveToFile(const string& filename) const {
    ofstream file(filename);

    if (!file.is_open()) {
        cout << "Error: Could not open file for saving.\n";
        return;
    }

    // Write each student as a CSV row
    for (const auto& s : students) {
        file << s.getId() << ","
            << s.getName() << ","
            << s.isPickedUp() << ","
            << s.isDroppedOff() << "\n";
    }

    file.close();
    cout << "Data saved to " << filename << " successfully!\n";
}

// Load From File

void BusRoute::loadFromFile(const string& filename) {
    ifstream file(filename);

    if (!file.is_open()) {
        cout << "Error: Could not open file for loading.\n";
        return;
    }

    students.clear();  // clear existing data

    string line;
    while (getline(file, line)) {
        stringstream ss(line);

        string idStr, name, pickupStr, dropoffStr;

        getline(ss, idStr, ',');
        getline(ss, name, ',');
        getline(ss, pickupStr, ',');
        getline(ss, dropoffStr, ',');

        int id = stoi(idStr);
        bool pickedUp = stoi(pickupStr);
        bool droppedOff = stoi(dropoffStr);

        // Re-create the student
        Student s(id, name);

        // Set statuses
        if (pickedUp) s.markPickup();
        if (droppedOff) s.markDropoff();

        students.push_back(s);
    }

    file.close();
    cout << "Data loaded from " << filename << " successfully!\n";
}


