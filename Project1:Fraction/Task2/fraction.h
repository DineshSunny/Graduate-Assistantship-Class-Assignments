#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
public:
    /** Constructor
     * @param n the numerator of the fraction
     * @param d the denominator of the fraction
     * @pre d should not be zero
     * @post sets the fraction to (n/d). If d = 0, denominator is set to 1.
     */
    Fraction(int n = 0, int d = 1);

    /** MODIFICATION MEMBER FUNCTIONS */
    void setNumerator(int n);
    void setDenominator(int d);

    /** CONSTANT MEMBER FUNCTIONS */
    int getNumerator() const;
    int getDenominator() const;
    void display() const;

private:
    int numerator;   /**< numerator of this fraction */
    int denominator; /**< denominator of this fraction */
};

/** NONMEMBER FUNCTIONS */

/** returns the sum of two fractions
 * @param f1 the first fraction
 * @param f2 the second fraction
 * @pre denominators must not be zero
 * @post returns a new fraction representing f1 + f2 (not simplified)
 */
Fraction add(const Fraction& f1, const Fraction& f2);

/** returns the difference of two fractions */
Fraction subtract(const Fraction& f1, const Fraction& f2);

/** returns the product of two fractions */
Fraction multiply(const Fraction& f1, const Fraction& f2);

/** returns the quotient of two fractions */
Fraction divide(const Fraction& f1, const Fraction& f2);

#endif
