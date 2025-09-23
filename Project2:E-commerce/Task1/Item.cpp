#include "Item.h"

Item::Item() : name(""), unitPrice(0.0), quantity(0) {}
Item::Item(string n, double price, int qty) : name(n), unitPrice(price), quantity(qty) {}

void Item::setName(string n) { name = n; }
void Item::setUnitPrice(double price) { unitPrice = price; }
void Item::setQuantity(int qty) { quantity = qty; }

string Item::getName() const { return name; }
double Item::getUnitPrice() const { return unitPrice; }
int Item::getQuantity() const { return quantity; }

bool Item::operator==(const Item &other) const {
    return (name == other.name && unitPrice == other.unitPrice && quantity == other.quantity);
}

istream& operator>>(istream &in, Item &item) {
    in >> item.name >> item.unitPrice >> item.quantity;
    return in;
}

ostream& operator<<(ostream &out, const Item &item) {
    out << item.getName() << "\t$" << item.getUnitPrice() << "\t" << item.getQuantity();
    return out;
}
