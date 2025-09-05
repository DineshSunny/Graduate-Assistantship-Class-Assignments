#ifndef NEWFRACTION1_H
#define NEWFRACTION1_H

class Fraction {
public:
    Fraction(int n = 0, int d = 1);
    void setNumerator(int n);
    void setDenominator(int d);
    int getNumerator() const;
    int getDenominator() const;
    void display() const;

private:
    int numerator;
    int denominator;
};

// nonmember function declarations
Fraction add(const Fraction& f1, const Fraction& f2);
Fraction subtract(const Fraction& f1, const Fraction& f2);
Fraction multiply(const Fraction& f1, const Fraction& f2);
Fraction divide(const Fraction& f1, const Fraction& f2);

#endif
