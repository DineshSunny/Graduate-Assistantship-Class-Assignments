#ifndef NEWFRACTION1_H
#define NEWFRACTION1_H

/** Provides ostream and istream */
#include <iostream>

using namespace std;

class Fraction
{
public:
    /** Constructor;
     * @param n the numerator of the fraction
     * @param d the denominator of the fraction
     * @pre None
     * @post sets the fraction to (n/d); if d == 0, denominator is set to 1
     */
    Fraction(int n = 0, int d = 1);

    /** MODIFICATION MEMBER FUNCTIONS */
    /** sets the numerator of the fraction
     * @param n the new numerator
     * @pre None
     * @post numerator is set to n
     */
    void setNumerator(int n);

    /** sets the denominator of the fraction
     * @param d the new denominator
     * @pre d != 0
     * @post denominator is set to d if d != 0; otherwise unchanged
     */
    void setDenominator(int d);

    /** CONSTANT MEMBER FUNCTIONS */
    /** returns the numerator of the fraction
     * @pre None
     * @post the value returned is the numerator
     */
    int getNumerator() const { return numerator; }

    /** returns the denominator of the fraction
     * @pre None
     * @post the value returned is the denominator
     */
    int getDenominator() const { return denominator; }

    /** displays the fraction in the form n/d
     * @pre None
     * @post the fraction is printed to cout
     */
    void display() const;

private:
    /** numerator of this fraction */
    int numerator;
    /** denominator of this fraction */
    int denominator;
};

/** NONMEMBER FUNCTIONS for the Fraction class */

/** returns the sum of two fractions (no simplification)
 * @param f1 and f2 are Fractions
 * @pre None
 * @post returns f1 + f2
 */
Fraction add(const Fraction& f1, const Fraction& f2);

/** returns the difference of two fractions (no simplification) */
Fraction subtract(const Fraction& f1, const Fraction& f2);

/** returns the product of two fractions (no simplification) */
Fraction multiply(const Fraction& f1, const Fraction& f2);

/** returns the quotient of two fractions (no simplification) */
Fraction divide(const Fraction& f1, const Fraction& f2);

#endif
