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

    /** sets the numerator of the fraction
     * @param n the new numerator
     * @pre None
     * @post numerator is set to n
     */
    void setNumerator(int n);

    /** sets the denominator of the fraction
     * @param d the new denominator
     * @pre d should not be zero
     * @post denominator is set to d if d ≠ 0, otherwise unchanged
     */
    void setDenominator(int d);

    /** CONSTANT MEMBER FUNCTIONS */

    /** returns the numerator of the fraction
     * @pre None
     * @post The value returned is the numerator
     */
    int getNumerator() const;

    /** returns the denominator of the fraction
     * @pre None
     * @post The value returned is the denominator
     */
    int getDenominator() const;

    /** displays the fraction in the form n/d
     * @pre None
     * @post Fraction is printed to the console in "numerator/denominator" format
     */
    void display() const;

private:
    /** numerator of this fraction */
    int numerator;

    /** denominator of this fraction */
    int denominator;
};

#endif
