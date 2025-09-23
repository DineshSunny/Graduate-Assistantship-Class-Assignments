#include "ShoppingCart.h"
#include <iostream>
using namespace std;

int main() {
    ShoppingCart cart;
    cout << "Welcome to XXX SHOPPING CENTER.\n";
    char cont = 'y';

    while (cont == 'y') {
        cout << "Enter the item you selected as the following order:\n";
        cout << "name unitPrice quantity\n";
        cout << "--> ";
        Item item;
        cin >> item;
        cart.add(item);

        cout << "Want to continue y/n-->"; cin >> cont;
    }

    cout << "\nHere is your order:\n";
    cart.showCart();

    char modify = 'y';
    while (modify == 'y') {
        cout << "\nWant to modify your order? y/n-->"; cin >> modify;
        if (modify != 'y') break;

        cout << "What do you want? Enter 1: add 2: remove 3: change quantity\n--> ";
        int choice; cin >> choice;

        if (choice == 1) {
            cout << "Enter the item to add as the following order:\n";
            Item newItem;
            cin >> newItem;
            cart.add(newItem);
            cout << "The item has been added.\n";
        } 
        else if (choice == 2) {
            cout << "Enter the item to remove as the following order:\n";
            Item remItem;
            cin >> remItem;
            if (cart.remove(remItem))
                cout << "The item has been removed.\n";
            else
                cout << "No such item in your shopping cart!\n";
        } 
        else if (choice == 3) {
            cout << "Enter the item to change as the following order:\n";
            string name; double price; int qty;
            cin >> name >> price >> qty;
            int newQty;
            do {
                cout << "Enter a new quantity --> "; cin >> newQty;
                if (newQty <= 0) cout << newQty << " is not a valid input.\n";
            } while (newQty <= 0);

            if (cart.changeQuantity(name, price, qty, newQty))
                cout << "The quantity has been modified.\n";
            else
                cout << "No such item in your shopping cart!\n";
        }
    }

    cout << "\nHere is your updated order:\n";
    cart.showCart();
    cout << "Thanks for shopping in XXX SHOPPING CENTER.\n";
}
