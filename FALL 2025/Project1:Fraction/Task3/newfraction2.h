#ifndef NEWFRACTION2_H
#define NEWFRACTION2_H

#include <iosfwd> // forward declare iostream types

class Fraction {
public:
    /** Constructor
     * @param n the numerator
     * @param d the denominator
     * @pre d should not be zero
     * @post sets the fraction to (n/d). If d = 0, denominator is set to 1.
     */
    Fraction(int n = 0, int d = 1);

    /** MODIFICATION MEMBER FUNCTIONS */
    /** sets the numerator
     * @param n new numerator
     * @pre None
     * @post numerator is set to n
     */
    void setNumerator(int n);

    /** sets the denominator
     * @param d new denominator
     * @pre d should not be zero
     * @post denominator is set to d if d != 0; otherwise unchanged
     */
    void setDenominator(int d);

    /** CONSTANT MEMBER FUNCTIONS */
    /** gets the numerator
     * @pre None
     * @post returns the numerator
     */
    int getNumerator() const;

    /** gets the denominator
     * @pre None
     * @post returns the denominator
     */
    int getDenominator() const;

    /** displays fraction as n/d (for quick debugging) */
    void display() const;

    /** Sum operator (member)
     * @param rhs the right-hand-side fraction
     * @pre None
     * @post returns a new Fraction equal to this + rhs (not simplified)
     */
    Fraction operator+(const Fraction& rhs) const;

    /** Difference operator (member)
     * @param rhs the right-hand-side fraction
     * @pre None
     * @post returns a new Fraction equal to this - rhs (not simplified)
     */
    Fraction operator-(const Fraction& rhs) const;

    /** Friend input operator
     * @pre user supplies two ints: numerator then denominator
     * @post sets f to the entered values (if denom is 0, it is set to 1)
     */
    friend std::istream& operator>>(std::istream& in, Fraction& f);

private:
    /** numerator of this fraction */
    int numerator;
    /** denominator of this fraction */
    int denominator;
};

/** NONMEMBER FUNCTIONS */

/** Product operator (nonmember)
 * @pre None
 * @post returns f1 * f2 (not simplified)
 */
Fraction operator*(const Fraction& f1, const Fraction& f2);

/** Quotient operator (nonmember)
 * @pre f2 numerator should not be 0 to avoid divide-by-zero
 * @post returns f1 / f2 (not simplified). If f2 numerator is 0, returns 0/1 and may print a warning.
 */
Fraction operator/(const Fraction& f1, const Fraction& f2);

/** Output operator (nonmember)
 * @pre None
 * @post writes "n/d" to out and returns out
 */
std::ostream& operator<<(std::ostream& out, const Fraction& f);

#endif
