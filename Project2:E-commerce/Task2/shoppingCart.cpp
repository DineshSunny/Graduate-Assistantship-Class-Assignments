/**
 * @file shoppingCart.cpp
 * @brief Implementation of ShoppingCart class.
 */

#include "shoppingCart.h"

ShoppingCart::ShoppingCart() : totalPrice(0.0) {}

double ShoppingCart::getTotalPrice() const {
    return totalPrice;
}

bool ShoppingCart::add(const Item& item) {
    Bag::add(item);
    totalPrice += item.getPrice() * item.getQuantity();
    return true;
}

bool ShoppingCart::remove(const Item& item) {
    if (Bag::remove(item)) {
        totalPrice -= item.getPrice() * item.getQuantity();
        return true;
    }
    return false;
}

void ShoppingCart::clear() {
    Bag::clear();
    totalPrice = 0.0;
}
