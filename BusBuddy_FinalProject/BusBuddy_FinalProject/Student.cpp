#define _CRT_SECURE_NO_WARNINGS
#include "Student.h"
#include <ctime>
using namespace std;

// Constructors
Student::Student()
    : id(0), name("Unknown"), pickedUp(false), droppedOff(false),
    timestamp(""), pickupTime(""), dropoffTime("") {
}

Student::Student(int id, string name)
    : id(id), name(name), pickedUp(false), droppedOff(false),
    timestamp(""), pickupTime(""), dropoffTime("") {
}

// Mark pickup using ctime_s
void Student::markPickup() {
    pickedUp = true;

    time_t now = time(nullptr);
    char buffer[26];           // ctime_s requires a char array
    ctime_s(buffer, sizeof(buffer), &now);

    pickupTime = buffer;       // save formatted time
}

// Mark drop-off using ctime_s
void Student::markDropoff() {
    droppedOff = true;

    time_t now = time(nullptr);
    char buffer[26];
    ctime_s(buffer, sizeof(buffer), &now);

    dropoffTime = buffer;
}

// Display student info
void Student::displayInfo() const {
    cout << "ID: " << id << ", Name: " << name
        << ", Picked Up: " << (pickedUp ? "Yes" : "No")
        << ", Dropped Off: " << (droppedOff ? "Yes" : "No");

    if (pickedUp)
        cout << ", Pickup Time: " << pickupTime;

    if (droppedOff)
        cout << ", Dropoff Time: " << dropoffTime;

    cout << endl;
}

// Getters
int Student::getId() const { return id; }
string Student::getName() const { return name; }
bool Student::isPickedUp() const { return pickedUp; }
bool Student::isDroppedOff() const { return droppedOff; }

string Student::getPickupTime() const { return pickupTime; }
string Student::getDropoffTime() const { return dropoffTime; }



