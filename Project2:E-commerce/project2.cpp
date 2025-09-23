/**
 * @file project2.cpp
 * @brief Application program that simulates an online shopping cart.
 *
 * Description:
 * This program allows a user to add items to a shopping cart, remove items,
 * and change quantities. It demonstrates the functionality of the Item,
 * Bag, and ShoppingCart classes.
 *
 * StarID: am9663gn
 * Name: Dinesh Seveti
 * Instructor: Dr. C
 * Due Date: September 22, 2025
 */

#include <iostream>
#include <iomanip>
#include "Task1/item.h"
#include "Task2/bag.h"
#include "Task2/shoppingCart.h"

using namespace std;

/**
 * @brief Print the contents of the shopping cart in table format.
 * @param cart The shopping cart to print.
 */
void printCart(const ShoppingCart& cart) {
    cout << "-------------------------------------------------" << endl;
    cout << left << setw(20) << "Name"
         << setw(15) << "Unit_Price"
         << setw(10) << "Quantity" << endl;

    for (const auto& it : cart.getItems()) {
        cout << left << setw(20) << it.getName()
             << "$" << setw(14) << fixed << setprecision(2) << it.getPrice()
             << setw(10) << it.getQuantity() << endl;
    }

    cout << "The total charge is $" << fixed << setprecision(2)
         << cart.getTotalPrice() << endl;
    cout << "-------------------------------------------------" << endl;
}

/**
 * @brief Main program: handles interactive shopping flow.
 */
int main() {
    ShoppingCart cart;

    cout << "Welcome to XXX SHOPPING CENTER." << endl;
    cout << "Enter the item you selected as the following order:" << endl;
    cout << "name unitPrice quantity" << endl;

    char cont = 'y';
    while (cont == 'y' || cont == 'Y') {
        Item it;
        cin >> it;
        cout << "Want to continue y/n-->";
        cin >> cont;
    }

    cout << "\nHere is your order:" << endl;
    printCart(cart);

    char modify = 'y';
    while (modify == 'y' || modify == 'Y') {
        cout << "Want to modify your order? y/n-->";
        cin >> modify;
        if (modify != 'y' && modify != 'Y') break;

        int choice;
        cout << "What do you want? Enter 1: add 2: remove 3: change quantity" << endl;
        cin >> choice;

        if (choice == 1) {
            cout << "Enter the item to add as the following order:" << endl;
            cout << "name unitPrice quantity" << endl;
            Item it;
            cin >> it;
            cart.add(it);
            cout << "The item has been added." << endl;
        }
        else if (choice == 2) {
            cout << "Enter the item to remove as the following order:" << endl;
            cout << "name unitPrice quantity" << endl;
            Item it;
            cin >> it;
            if (cart.remove(it)) {
                cout << "The item has been removed." << endl;
            } else {
                cout << "No such item in your shopping cart!" << endl;
            }
        }
        else if (choice == 3) {
            cout << "Enter the item name and unit price to change:" << endl;
            string name;
            double price;
            cin >> name >> price;

            bool found = false;
            for (auto &it : cart.getItems()) {
                if (it.getName() == name && it.getPrice() == price) {
                    int newQty;
                    do {
                        cout << "Enter a new quantity --> ";
                        cin >> newQty;
                        if (newQty <= 0) {
                            cout << newQty << " is not a valid input." << endl;
                        }
                    } while (newQty <= 0);

                    it.setQuantity(newQty);
                    cout << "The quantity has been modified." << endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "No such item in your shopping cart!" << endl;
            }
        }
    }

    cout << "\nHere is your updated order:" << endl;
    printCart(cart);
    cout << "Thanks for shopping in XXX SHOPPING CENTER." << endl;

    return 0;
}
