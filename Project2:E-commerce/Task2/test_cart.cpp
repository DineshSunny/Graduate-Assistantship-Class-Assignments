#include "ShoppingCart.h"
#include <iostream>
using namespace std;

int main() {
    ShoppingCart cart;

    cout << "Testing ShoppingCart class...\n";

    Item t1("T-shirt", 19.99, 2);
    Item s1("Sweater", 39.99, 1);
    cart.add(t1);
    cart.add(s1);

    cout << "After adding items:\n";
    cart.showCart();

    // Remove existing
    if (cart.remove(s1))
        cout << "Sweater removed successfully.\n";

    // Remove non-existing
    Item fake("Hat", 9.99, 1);
    if (!cart.remove(fake))
        cout << "Hat not found in cart.\n";

    // Change quantity valid
    if (cart.changeQuantity("T-shirt", 19.99, 2, 5))
        cout << "Quantity updated successfully.\n";

    // Change quantity invalid
    if (!cart.changeQuantity("T-shirt", 19.99, 5, -3))
        cout << "Invalid quantity rejected.\n";

    cout << "\nFinal cart:\n";
    cart.showCart();

    cart.clear();
    cout << "After clearing cart:\n";
    cart.showCart();

    return 0;
}
