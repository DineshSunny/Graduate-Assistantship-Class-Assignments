/**
 * Item.h
 * Assignment 2 - E-commerce
 * Task 1: Define Item class.
 * Student: Dinesh Seveti (StarID: am9663gn)
 * Instructor: [Your Instructor’s Name]
 * Due Date: September 22
 */

#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
using namespace std;

/**
 * @class Item
 * Represents an item with a name, unit price, and quantity.
 */
class Item {
private:
    string name;
    double unitPrice;
    int quantity;

public:
    // Default constructor
    Item();

    // Parameterized constructor
    Item(string n, double price, int qty);

    // Getters
    string getName() const;
    double getUnitPrice() const;
    int getQuantity() const;

    // Setters
    void setName(string n);
    void setUnitPrice(double price);
    void setQuantity(int qty);

    // Equality operator
    bool operator==(const Item &other) const;

    // Input operator
    friend istream& operator>>(istream &in, Item &item);

    // Output operator
    friend ostream& operator<<(ostream &out, const Item &item);
};

#endif
