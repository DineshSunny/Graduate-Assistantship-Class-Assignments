#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
using namespace std;

class Item {
private:
    string name;
    double unitPrice;
    int quantity;

public:
    Item();
    Item(string n, double price, int qty);

    // setters
    void setName(string n);
    void setUnitPrice(double price);
    void setQuantity(int qty);

    // getters
    string getName() const;
    double getUnitPrice() const;
    int getQuantity() const;

    bool operator==(const Item &other) const;

    // stream operators
    friend istream& operator>>(istream &in, Item &item);
    friend ostream& operator<<(ostream &out, const Item &item);
};

#endif
