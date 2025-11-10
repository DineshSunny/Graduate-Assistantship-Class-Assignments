/**
 * @file FrontListIsATester.cpp
 * @brief Tester program for the FrontListIsA implementation.
 *
 * This tester validates the behavior of the **FrontListIsA** class,
 * which implements the ADT FrontList using **public inheritance** from
 * the `LinkedList` class.
 *
 * @details
 * The `FrontListIsA` design models an *Is-A* relationship, where
 * FrontList publicly inherits from LinkedList. However, to preserve
 * the integrity of the FrontList abstraction, position-based methods
 * like `insert(int, ...)`, `remove(int)`, and `replace(int, ...)`
 * are **disabled**.  
 *
 * The test demonstrates that only the **front operations** are allowed:
 * - Inserting a new element at the front
 * - Retrieving the current front element
 * - Removing the front element
 * - Clearing the entire list
 *
 * Example expected output:
 * @code
 * === Testing FrontListIsA ===
 * Front: Python
 * Front after remove: Java
 * Empty? Yes
 * @endcode
 *
 * @note
 * This tester assumes that both `FrontListIsA` and `LinkedList`
 * template classes are defined and compiled in the same project.
 *
 * @see FrontListIsA
 * @see LinkedList
 * @see FrontListInterface
 *
 * @author Dinesh Seveti
 * @date Fall 2025
 */

#include <iostream>
#include "FrontListIsA.h"

/**
 * @brief Main test driver for FrontListIsA.
 *
 * Executes a series of insertions, retrievals, removals, and a clear operation
 * to verify that only front-based operations work as expected in the public
 * inheritance model.
 *
 * @return int Returns 0 upon successful completion.
 */
int main() {
    std::cout << "=== Testing FrontListIsA ===\n";

    // Create a FrontList of strings using public inheritance.
    FrontListIsA<std::string> list;

    // Insert elements — each new element becomes the new front.
    list.insert("C++");
    list.insert("Java");
    list.insert("Python"); // "Python" becomes the new front.

    // Retrieve and display the front element.
    std::cout << "Front: " << list.retrieve() << "\n";

    // Remove the current front element and display the updated front.
    list.remove();
    std::cout << "Front after remove: " << list.retrieve() << "\n";

    // Clear the list completely and confirm that it is empty.
    list.clear();
    std::cout << "Empty? " << (list.isEmpty() ? "Yes" : "No") << "\n";

    return 0;
}
