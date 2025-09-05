#include <iostream>
#include "fraction.h"
using namespace std;

// Constructor
Fraction::Fraction(int n, int d) {
    numerator = n;
    if (d != 0)  // prevent denominator = 0
        denominator = d;
    else {
        cout << "Denominator cannot be zero. Setting denominator = 1." << endl;
        denominator = 1;
    }
}

// Set functions
void Fraction::setNumerator(int n) {
    numerator = n;
}

void Fraction::setDenominator(int d) {
    if (d != 0)
        denominator = d;
    else
        cout << "Denominator cannot be zero. Value unchanged." << endl;
}

// Get functions
int Fraction::getNumerator() const {
    return numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}

// Display function
void Fraction::display() const {
    cout << numerator << "/" << denominator << endl;
}
