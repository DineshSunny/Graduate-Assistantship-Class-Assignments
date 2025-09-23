#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include "Bag.h"
#include "Item.h"
#include <iostream>
using namespace std;

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

// required for GitHub compile rule
#include "ShoppingCart.cpp"
#endif
