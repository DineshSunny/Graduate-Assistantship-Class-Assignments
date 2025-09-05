/**
 * @file project1_task2.cpp
 * @brief Interactive test for nonmember Fraction operations (Task 2).
 */

#include <iostream>
#include "newfraction1.h"
using namespace std;

int main()
{
    Fraction f1, f2;
    int n, d;

    cout << "Enter the first fraction: numerator denominator\n";
    cin >> n >> d;
    f1.setNumerator(n);
    f1.setDenominator(d);

    cout << "Enter the second fraction: numerator denominator\n";
    cin >> n >> d;
    f2.setNumerator(n);
    f2.setDenominator(d);

    cout << "The two fractions entered are\n";
    cout << "f1 = "; f1.display();
    cout << "f2 = "; f2.display();
    cout << "\nThe arithmetic operations on these two fractions:\n";

    cout << "f1 + f2 = "; add(f1, f2).display();
    cout << "f1 - f2 = "; subtract(f1, f2).display();
    cout << "f1 * f2 = "; multiply(f1, f2).display();
    cout << "f1 / f2 = "; divide(f1, f2).display();

    return 0;
}
