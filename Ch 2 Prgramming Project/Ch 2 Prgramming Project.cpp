// Ch 2 Prgramming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()

{
    
    int tank;
    double Hwy, Town, hAvg, tAvg;
    // Assign value to the variables
    tank = 20;
    Hwy = 28.9;
    Town = 23.5;
    // Formulas
    hAvg = Hwy * tank;
    tAvg = Town * tank;

    cout << "In town, with a tank size of " << tank << " gallons, you should expect to get " << tAvg << " miles of travel.\n";

    cout << "\n";

    cout << "On the highway, with a tank size of " << tank << " gallons, you should expect to get " << hAvg << " miles of travel.\n";

    return 0;
}