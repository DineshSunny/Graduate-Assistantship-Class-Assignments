#include "Item.h"
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    cout << "=== Testing Item Class (Task 1) ===\n";

    vector<Item> items;   // temporary cart-like list
    char cont = 'y';

    while (cont == 'y') {
        Item newItem;
        cout << "Enter item (name unitPrice quantity): ";
        cin >> newItem;

        items.push_back(newItem);

        cout << "\nCurrent Items:\n";
        cout << left << setw(20) << "Name"
             << setw(15) << "Unit Price"
             << "Quantity\n";
        for (auto &it : items) {
            cout << left << setw(20) << it.getName()
                 << "$" << setw(14) << it.getUnitPrice()
                 << it.getQuantity() << "\n";
        }

        cout << "\nAdd another item? (y/n): ";
        cin >> cont;
    }

    cout << "\n=== End of Task 1 Test ===\n";
    return 0;
}
