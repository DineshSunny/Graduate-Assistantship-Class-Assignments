#include <iostream>
#include "fraction.h"
using namespace std;

int main() {
    cout << "=== Testing Fraction Class (Task 1) ===" << endl;

    // Test 1: Default constructor
    Fraction f1;
    cout << "Default constructor (expected 0/1): ";
    f1.display();

    // Test 2: Parameterized constructor
    Fraction f2(3, 4);
    cout << "Parameterized constructor (expected 3/4): ";
    f2.display();

    // Test 3: Set numerator
    f1.setNumerator(5);
    cout << "After setting numerator to 5 (expected 5/1): ";
    f1.display();

    // Test 4: Set denominator
    f1.setDenominator(8);
    cout << "After setting denominator to 8 (expected 5/8): ";
    f1.display();

    // Test 5: Get numerator
    cout << "Numerator of f1 (expected 5): " 
         << f1.getNumerator() << endl;

    // Test 6: Get denominator
    cout << "Denominator of f1 (expected 8): " 
         << f1.getDenominator() << endl;

    // Test 7: Invalid denominator (set to 0)
    cout << "Attempting to set denominator to 0..." << endl;
    f1.setDenominator(0);
    cout << "Fraction after invalid denominator attempt (expected still 5/8): ";
    f1.display();

    cout << "=== End of Tests ===" << endl;
    return 0;
}
