#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;

    bool pickedUp;
    bool droppedOff;

    string pickupTime;
    string dropoffTime;

    std::string timestamp; // New member variable added

public:
    Student();
    Student(int id, string name);

    void markPickup();
    void markDropoff();
    void displayInfo() const;

    // Getters
    int getId() const;
    string getName() const;
    bool isPickedUp() const;
    bool isDroppedOff() const;

    string getPickupTime() const;
    string getDropoffTime() const;
};

