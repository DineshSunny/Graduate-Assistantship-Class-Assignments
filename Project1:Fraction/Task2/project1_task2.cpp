#include <iostream>
#include "newfraction1.h"
using namespace std;

int main() {
    Fraction f1, f2;

    cout << "Enter the first fraction: numerator denominator\n";
    int n1, d1;
    cin >> n1 >> d1;
    f1.setNumerator(n1);
    f1.setDenominator(d1);

    cout << "Enter the second fraction: numerator denominator \n";
    int n2, d2;
    cin >> n2 >> d2;
    f2.setNumerator(n2);
    f2.setDenominator(d2);

    cout << "The two fractions entered are\n";
    cout << "f1 = "; f1.display();
    cout << "f2 = "; f2.display();
    cout << "\nThe arithmetic operations on these two fractions:\n";

    Fraction s = add(f1, f2);
    cout << "f1 + f2 = "; s.display();

    Fraction m = subtract(f1, f2);
    cout << "f1 - f2 = "; m.display();

    Fraction p = multiply(f1, f2);
    cout << "f1 * f2 = "; p.display();

    Fraction q = divide(f1, f2);
    cout << "f1 / f2 = "; q.display();

    return 0;
}
