#include "Item.h"

// Default constructor
Item::Item() : name(""), unitPrice(0.0), quantity(0) {}

// Parameterized constructor
Item::Item(string n, double price, int qty)
    : name(n), unitPrice(price), quantity(qty) {}

// Getters
string Item::getName() const { return name; }
double Item::getUnitPrice() const { return unitPrice; }
int Item::getQuantity() const { return quantity; }

// Setters
void Item::setName(string n) { name = n; }
void Item::setUnitPrice(double price) { unitPrice = price; }
void Item::setQuantity(int qty) { quantity = qty; }

// Equality operator
bool Item::operator==(const Item &other) const {
    return (name == other.name &&
            unitPrice == other.unitPrice &&
            quantity == other.quantity);
}

// Input operator
istream& operator>>(istream &in, Item &item) {
    in >> item.name >> item.unitPrice >> item.quantity;
    return in;
}

// Output operator
ostream& operator<<(ostream &out, const Item &item) {
    out << item.name << "  $" << item.unitPrice
        << "  " << item.quantity;
    return out;
}
