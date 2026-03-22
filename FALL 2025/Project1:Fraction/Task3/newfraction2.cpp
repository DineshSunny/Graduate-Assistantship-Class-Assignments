#include <iostream>
#include "newfraction2.h"
using namespace std;

// ===== Member function implementations =====
Fraction::Fraction(int n, int d) : numerator(n) {
    if (d != 0) denominator = d;
    else {
        cout << "Denominator cannot be zero. Setting denominator = 1.\n";
        denominator = 1;
    }
}

void Fraction::setNumerator(int n) { numerator = n; }

void Fraction::setDenominator(int d) {
    if (d != 0) denominator = d;
    else cout << "Denominator cannot be zero. Value unchanged.\n";
}

int Fraction::getNumerator() const { return numerator; }
int Fraction::getDenominator() const { return denominator; }

void Fraction::display() const { cout << numerator << "/" << denominator << endl; }

Fraction Fraction::operator+(const Fraction& rhs) const {
    int n = numerator * rhs.denominator + rhs.numerator * denominator;
    int d = denominator * rhs.denominator;
    return Fraction(n, d);
}

Fraction Fraction::operator-(const Fraction& rhs) const {
    int n = numerator * rhs.denominator - rhs.numerator * denominator;
    int d = denominator * rhs.denominator;
    return Fraction(n, d);
}

// Friend input >>
istream& operator>>(istream& in, Fraction& f) {
    int n, d;
    in >> n >> d;
    f.numerator = n;
    if (d != 0) f.denominator = d;
    else {
        cout << "Denominator cannot be zero. Setting denominator = 1.\n";
        f.denominator = 1;
    }
    return in;
}

// ===== Nonmember operator implementations =====
Fraction operator*(const Fraction& f1, const Fraction& f2) {
    int n = f1.getNumerator() * f2.getNumerator();
    int d = f1.getDenominator() * f2.getDenominator();
    return Fraction(n, d);
}

Fraction operator/(const Fraction& f1, const Fraction& f2) {
    if (f2.getNumerator() == 0) {
        cout << "Error: divide by zero fraction. Returning 0/1.\n";
        return Fraction(0, 1);
    }
    int n = f1.getNumerator() * f2.getDenominator();
    int d = f1.getDenominator() * f2.getNumerator();
    return Fraction(n, d);
}

ostream& operator<<(ostream& out, const Fraction& f) {
    out << f.getNumerator() << "/" << f.getDenominator();
    return out;
}
