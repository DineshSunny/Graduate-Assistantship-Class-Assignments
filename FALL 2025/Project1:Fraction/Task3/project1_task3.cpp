#include <iostream>
#include "newfraction2.h"
using namespace std;

int main() {
    Fraction f1, f2;

    cout << "Enter the first fraction: numerator denominator\n";
    cin >> f1;

    cout << "Enter the second fraction: numerator denominator \n";
    cin >> f2;

    cout << "The two fractions entered are\n";
    cout << "f1 = " << f1 << "\n";
    cout << "f2 = " << f2 << "\n\n";

    cout << "The arithmetic operations on these two fractions:\n";
    cout << "f1 + f2 = " << (f1 + f2) << "\n";
    cout << "f1 - f2 = " << (f1 - f2) << "\n";
    cout << "f1 * f2 = " << (f1 * f2) << "\n";
    cout << "f1 / f2 = " << (f1 / f2) << "\n";

    return 0;
}
