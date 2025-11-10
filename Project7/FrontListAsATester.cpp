/**
 * @file FrontListAsATester.cpp
 * @brief Tester program for the FrontListAsA implementation.
 *
 * This tester validates the correct behavior of the ADT FrontList
 * implemented using **private inheritance** from the LinkedList class.
 *
 * It demonstrates the restricted operations that can only be
 * performed on the *front* of the list:
 *   - Inserting new entries at the front
 *   - Retrieving the current front entry
 *   - Removing the front entry
 *   - Clearing the list completely
 *
 * @details
 * The test sequence creates a FrontListAsA of type `char`, inserts
 * several elements (A, B, C), and verifies that the latest insertion
 * always becomes the new front element. It also confirms that removal
 * and clear() behave as expected by checking the empty status after operations.
 *
 * Expected Output Example:
 * @code
 * === Testing FrontListAsA ===
 * Front: C
 * Front after remove: B
 * Empty? Yes
 * @endcode
 *
 * @note
 * This tester assumes that the LinkedList and FrontListAsA templates
 * are defined and compiled in the same project directory.
 *
 * @see FrontListAsA
 * @see LinkedList
 *
 * @author Dinesh Seveti
 * @date Fall 2025
 */

#include <iostream>
#include "FrontListAsA.h"

/**
 * @brief Main test driver for FrontListAsA.
 *
 * Performs a sequence of insertions, retrievals, removals, and a clear
 * operation to verify correct functionality of the FrontListAsA class.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
    std::cout << "=== Testing FrontListAsA ===\n";

    // Create a FrontList of characters using private inheritance.
    FrontListAsA<char> list;

    // Insert elements at the front.
    list.insert('A');
    list.insert('B');
    list.insert('C'); // 'C' becomes the new front.

    // Display the current front item.
    std::cout << "Front: " << list.retrieve() << "\n";

    // Remove the current front and show the updated front.
    list.remove();
    std::cout << "Front after remove: " << list.retrieve() << "\n";

    // Clear all items and verify the list is empty.
    list.clear();
    std::cout << "Empty? " << (list.isEmpty() ? "Yes" : "No") << "\n";

    return 0;
}
