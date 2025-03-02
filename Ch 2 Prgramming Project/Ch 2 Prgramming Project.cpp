// Ch 2 Prgramming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()

{
    int cust, fans, citrus; // naming variables, only used INTs because you cannot have a partial person
  
    cust = 16500; // formulas

    fans = cust * .15;

    citrus = fans * .58;


    cout << "Out of a survey of " << cust << " people, approximately " << fans << " people consume one or more energy drinks per week." << "\n";
    cout << "\n";
    cout << "Out of those " << cust << " customers, roughly " << citrus << " people prefer the citrus flavored energy drinks. " << "\n";
    cout << "\n";


    return 0;
}


