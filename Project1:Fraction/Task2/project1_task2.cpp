#include <iostream>
#include "fraction.h"
using namespace std;

int main() {
    Fraction f1(1, 2);  // 1/2
    Fraction f2(3, 4);  // 3/4

    cout << "f1 = "; f1.display();
    cout << "f2 = "; f2.display();

    Fraction sum = add(f1, f2);
    cout << "Sum (f1 + f2) = "; sum.display();

    Fraction diff = subtract(f1, f2);
    cout << "Difference (f1 - f2) = "; diff.display();

    Fraction prod = multiply(f1, f2);
    cout << "Product (f1 * f2) = "; prod.display();

    Fraction quot = divide(f1, f2);
    cout << "Quotient (f1 / f2) = "; quot.display();

    return 0;
}