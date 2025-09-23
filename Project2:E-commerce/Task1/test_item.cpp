#include "Item.h"
#include <iostream>
using namespace std;

int main() {
    // Test constructors
    Item item1; // default constructor
    Item item2("T-shirt", 19.99, 2); // parameterized constructor

    // Test setters
    item1.setName("Sweater");
    item1.setUnitPrice(39.99);
    item1.setQuantity(3);

    // Test getters
    cout << "Item1: " << item1.getName() << " $" << item1.getUnitPrice() 
         << " Qty: " << item1.getQuantity() << endl;

    cout << "Item2: " << item2.getName() << " $" << item2.getUnitPrice() 
         << " Qty: " << item2.getQuantity() << endl;

    // Test equality
    if (item1 == item2)
        cout << "Item1 and Item2 are equal." << endl;
    else
        cout << "Item1 and Item2 are NOT equal." << endl;

    // Test stream operators
    cout << "\nEnter an item (name price qty): ";
    Item item3;
    cin >> item3;

    cout << "You entered: " << item3 << endl;

    return 0;
}
