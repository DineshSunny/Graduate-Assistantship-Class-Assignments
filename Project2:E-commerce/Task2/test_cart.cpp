#include "ShoppingCart.h"
#include <iostream>
using namespace std;

int main() {
    ShoppingCart cart;

    // Test add
    Item t1("T-shirt", 19.99, 2);
    Item s1("Sweater", 39.99, 1);
    cart.add(t1);
    cart.add(s1);

    cout << "After adding items:\n";
    cart.showCart();

    // Test remove (success case)
    if (cart.remove(s1))
        cout << "Sweater removed successfully.\n";
    else
        cout << "Sweater not found.\n";

    // Test remove (fail case)
    Item fake("Hat", 9.99, 1);
    if (cart.remove(fake))
        cout << "Hat removed.\n";
    else
        cout << "Hat not found in cart.\n";

    // Test changeQuantity (valid)
    if (cart.changeQuantity("T-shirt", 19.99, 2, 5))
        cout << "Quantity updated successfully.\n";
    else
        cout << "Failed to update quantity.\n";

    // Test changeQuantity (invalid quantity)
    if (cart.changeQuantity("T-shirt", 19.99, 5, -3))
        cout << "Quantity updated.\n";
    else
        cout << "Invalid new quantity.\n";

    // Show final cart
    cout << "\nFinal cart contents:\n";
    cart.showCart();

    // Test clear
    cart.clear();
    cout << "\nAfter clearing cart:\n";
    cart.showCart();

    return 0;
}
