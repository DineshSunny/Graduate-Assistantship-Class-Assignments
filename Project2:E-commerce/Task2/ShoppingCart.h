/**
 * ShoppingCart.h
 * Assignment 2 - E-commerce
 * Derived from Bag<Item>, tracks items and total price.
 */

#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include "Bag.h"
#include "../Task1/Item.h"
#include <iostream>
using namespace std;

/**
 * @class ShoppingCart
 * Represents a shopping cart with items and total price.
 */
class ShoppingCart : public Bag<Item> {
private:
    double totalPrice;

public:
    ShoppingCart();

    double getTotalPrice() const;
    void add(const Item &item) override;
    bool remove(const Item &item) override;
    void clear() override;

    bool changeQuantity(const string &name, double price, int oldQty, int newQty);

    void showCart() const;
};

#include "ShoppingCart.cpp"
#endif
