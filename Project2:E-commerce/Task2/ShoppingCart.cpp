#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() : totalPrice(0.0) {}

double ShoppingCart::getTotalPrice() const { return totalPrice; }

void ShoppingCart::add(const Item &item) {
    Bag<Item>::add(item);
    totalPrice += item.getUnitPrice() * item.getQuantity();
}

bool ShoppingCart::remove(const Item &item) {
    bool removed = Bag<Item>::remove(item);
    if (removed) {
        totalPrice -= item.getUnitPrice() * item.getQuantity();
    }
    return removed;
}

void ShoppingCart::clear() {
    Bag<Item>::clear();
    totalPrice = 0.0;
}

bool ShoppingCart::changeQuantity(const string &name, double price, int oldQty, int newQty) {
    for (auto &it : items) {
        if (it.getName() == name && it.getUnitPrice() == price && it.getQuantity() == oldQty) {
            if (newQty <= 0) return false;
            totalPrice -= it.getUnitPrice() * it.getQuantity();
            it.setQuantity(newQty);
            totalPrice += it.getUnitPrice() * newQty;
            return true;
        }
    }
    return false;
}

void ShoppingCart::showCart() const {
    cout << "-------------------------------------------------\n";
    cout << "Name\t\tUnit_Price\tQuantity\n";
    for (auto &it : items) {
        cout << it.getName() << "\t$" << it.getUnitPrice() << "\t" << it.getQuantity() << "\n";
    }
    cout << "The total charge is $" << totalPrice << endl;
    cout << "-------------------------------------------------\n";
}
