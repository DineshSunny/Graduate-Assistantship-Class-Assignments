#include <iostream>
#include "fraction.h"
using namespace std;

// ====== MEMBER FUNCTIONS ======

Fraction::Fraction(int n, int d) {
    numerator = n;
    if (d != 0)
        denominator = d;
    else {
        cout << "Denominator cannot be zero. Setting denominator = 1." << endl;
        denominator = 1;
    }
}

void Fraction::setNumerator(int n) {
    numerator = n;
}

void Fraction::setDenominator(int d) {
    if (d != 0)
        denominator = d;
    else
        cout << "Denominator cannot be zero. Value unchanged." << endl;
}

int Fraction::getNumerator() const {
    return numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}

void Fraction::display() const {
    cout << numerator << "/" << denominator << endl;
}

// ====== NONMEMBER FUNCTIONS ======

Fraction add(const Fraction& f1, const Fraction& f2) {
    int n = f1.getNumerator() * f2.getDenominator() +
            f2.getNumerator() * f1.getDenominator();
    int d = f1.getDenominator() * f2.getDenominator();
    return Fraction(n, d);
}

Fraction subtract(const Fraction& f1, const Fraction& f2) {
    int n = f1.getNumerator() * f2.getDenominator() -
            f2.getNumerator() * f1.getDenominator();
    int d = f1.getDenominator() * f2.getDenominator();
    return Fraction(n, d);
}

Fraction multiply(const Fraction& f1, const Fraction& f2) {
    int n = f1.getNumerator() * f2.getNumerator();
    int d = f1.getDenominator() * f2.getDenominator();
    return Fraction(n, d);
}

Fraction divide(const Fraction& f1, const Fraction& f2) {
    int n = f1.getNumerator() * f2.getDenominator();
    int d = f1.getDenominator() * f2.getNumerator();
    return Fraction(n, d);
}
