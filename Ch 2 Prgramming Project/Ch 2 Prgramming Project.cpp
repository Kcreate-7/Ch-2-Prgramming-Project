// Ch 2 Prgramming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()

{
    int i, y5, y7, y10;
    float increase, d5, d7, d10;
    
    increase = 1.5;

    y5 = 5;
    y7 = 7;
    y10 = 10;

    d5 = increase * y5;
    d7 = increase * y7;
    d10 = increase * y10;

    cout << "In " << y5 << " years, the ocean will have risen " << d5 << " mm higher than today's current level!" << "\n";
    cout << "\n";
    cout << "In " << y7 << " years, the ocean will have risen " << d7 << " mm higher than today's current level!" << "\n";
    cout << "\n";
    cout << "In " << y10 << " years, the ocean will have risen " << d10 << " mm higher than today's current level!" << "\n";


    return 0;
}


