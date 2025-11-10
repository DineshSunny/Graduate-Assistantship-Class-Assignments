/**
 * @file FrontListHasATester.cpp
 * @brief Tester for FrontListHasA implementation (composition / Has-A relationship).
 *
 * Validates insertion, retrieval, removal, and clearing of items.
 * @date Fall 2025
 * @version 1.0
 * @see FrontListHasA
 * @author Dinesh Seveti
 */

#include <iostream>
#include "FrontListHasA.h"

int main() {
    std::cout << "=== Testing FrontListHasA ===\n";
    FrontListHasA<int> list;

    list.insert(10);
    list.insert(20);
    list.insert(30);

    std::cout << "Front: " << list.retrieve() << "\n";
    list.remove();
    std::cout << "Front after remove: " << list.retrieve() << "\n";
    list.clear();
    std::cout << "Empty? " << (list.isEmpty() ? "Yes" : "No") << "\n";
}
