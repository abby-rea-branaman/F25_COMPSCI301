#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "Student.h"
using namespace std;

class BusRoute {
private:
    string routeID;
    vector<Student> students;

public:
    BusRoute();
    BusRoute(string routeID);

    void addStudent(const Student& s);
    void removeStudent(int id);
    void markPickup(int id);
    void markDropoff(int id);
    void displayAll() const;

    void saveToFile(const string& filename) const;
    void loadFromFile(const string& filename);

};