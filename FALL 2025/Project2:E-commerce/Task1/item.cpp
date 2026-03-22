/**
 * @file item.cpp
 * @brief Implementation of the Item class for online shopping cart.
 */

#include "item.h"
#include <iomanip> // for setw, setprecision

// Default constructor
Item::Item() : name(""), price(0.0), quantity(0) {}

// Parameterized constructor
Item::Item(const string& n, double p, int q) : name(n), price(p), quantity(q) {}

// Setters
void Item::setName(const string& n) { name = n; }
void Item::setPrice(double p) { price = p; }
void Item::setQuantity(int q) { quantity = q; }

// Getters
string Item::getName() const { return name; }
double Item::getPrice() const { return price; }
int Item::getQuantity() const { return quantity; }

// Equality operator (name + price must match)
bool Item::operator==(const Item& other) const {
    return (name == other.name && price == other.price);
}

// Input operator
istream& operator>>(istream& in, Item& it) {
    in >> it.name >> it.price >> it.quantity;
    return in;
}

// Output operator (tabular format)
ostream& operator<<(ostream& out, const Item& it) {
    out << left << setw(20) << it.name
        << "$" << fixed << setprecision(2) << setw(10) << right << it.price
        << setw(10) << right << it.quantity;
    return out;
}
