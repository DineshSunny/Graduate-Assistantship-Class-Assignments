/**
 * @file shoppingCart.h
 * @brief Declaration of ShoppingCart derived from Bag<Item>.
 */

#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include "bag.h"
#include "../Task1/item.h"

/**
 * @class ShoppingCart
 * @brief Represents a shopping cart derived from Bag<Item>.
 */
class ShoppingCart : public Bag<Item> {
private:
    double totalPrice; ///< Total price of items in the cart

public:
    ShoppingCart();

    double getTotalPrice() const;

    bool add(const Item& item) override;
    bool remove(const Item& item) override;
    void clear() override;
};

#endif
