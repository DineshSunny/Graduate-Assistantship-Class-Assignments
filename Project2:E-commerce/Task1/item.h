/**
 * @file item.h
 * @brief Declaration of the Item class for online shopping cart.
 * 
 * Defines an Item with name, unit price, and quantity. Includes
 * operator overloads for input/output and equality comparison.
 *
 * @author Dinesh Sunny
 * @date September 22, 2025
 * @instructor <Your Instructor's Name>
 */

#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
using namespace std;

/**
 * @class Item
 * @brief Represents an item in the shopping cart.
 */
class Item {
private:
    string name;   ///< Name of the item
    double price;  ///< Unit price of the item
    int quantity;  ///< Quantity of the item

public:
    /** @brief Default constructor */
    Item();

    /**
     * @brief Constructor with parameters
     * @param n Item name
     * @param p Unit price
     * @param q Quantity
     */
    Item(const string& n, double p, int q);

    /** @brief Sets the item name */
    void setName(const string& n);

    /** @brief Sets the unit price */
    void setPrice(double p);

    /** @brief Sets the quantity */
    void setQuantity(int q);

    /** @brief Gets the item name */
    string getName() const;

    /** @brief Gets the unit price */
    double getPrice() const;

    /** @brief Gets the quantity */
    int getQuantity() const;

    /**
     * @brief Equality operator
     * Two items are the same if their name and price are the same.
     */
    bool operator==(const Item& other) const;

    /**
     * @brief Input operator >>
     * Reads item details (name, price, quantity).
     */
    friend istream& operator>>(istream& in, Item& it);

    /**
     * @brief Output operator <<
     * Prints item details in tabular format.
     */
    friend ostream& operator<<(ostream& out, const Item& it);
};

#endif // ITEM_H
