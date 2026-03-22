/**
 * @file FrontListHasA.h
 * @brief Definition of the FrontListHasA class implementing the ADT FrontList using composition (Has-A relationship).
 *
 * This implementation demonstrates **composition**, where the `FrontListHasA` class
 * maintains an internal instance of the `LinkedList` class to perform list operations.
 *
 * Operations are restricted exclusively to the **front** of the list:
 * - Insertion always occurs at position 1.
 * - Removal deletes the first element.
 * - Retrieval accesses only the first element.
 * - `clear()` removes all elements through the internal LinkedList.
 *
 * @details
 * Composition (Has-A relationship) is one of the key object-oriented programming
 * design relationships. Here, `FrontListHasA` “has a” LinkedList object as a private data member.
 * It provides its own interface to manage list operations in a restricted manner.
 *
 * Example behavior:
 * @code
 * FrontListHasA<int> list;
 * list.insert(10);
 * list.insert(20);
 * list.insert(30);
 * std::cout << list.retrieve(); // Outputs 30
 * list.remove();
 * std::cout << list.retrieve(); // Outputs 20
 * @endcode
 *
 * @note
 * This implementation depends on a working `LinkedList` class template that provides:
 * `insert(int, const ItemType&)`, `remove(int)`, `getEntry(int)`, `isEmpty()`, and `clear()`.
 *
 * @see FrontListInterface
 * @see LinkedList
 * @author Dinesh Seveti
 * @date Fall 2025
 */

#ifndef FRONT_LIST_HASA_H
#define FRONT_LIST_HASA_H

#include "LinkedList.h"
#include "FrontListInterface.h"
#include <stdexcept>

/**
 * @class FrontListHasA
 * @brief Concrete implementation of the FrontList ADT using composition.
 *
 * @tparam ItemType The data type of elements stored in the list.
 * 
 * The FrontListHasA class wraps an instance of the LinkedList class,
 * restricting access so that only operations on the first item
 * (the "front") are permitted. This enforces the ADT FrontList constraints.
 */
template<class ItemType>
class FrontListHasA : public FrontListInterface<ItemType> {
private:
    LinkedList<ItemType> list; ///< Internal LinkedList instance used for storage.

public:
    /**
     * @brief Default constructor.
     * 
     * Initializes an empty FrontList with no elements.
     */
    FrontListHasA() = default;

    /**
     * @brief Copy constructor.
     * 
     * Creates a new FrontListHasA as a deep copy of another FrontListHasA.
     * @param other The list to copy from.
     */
    FrontListHasA(const FrontListHasA& other) : list(other.list) {}

    /**
     * @brief Destructor.
     * 
     * Automatically clears the internal list when the object goes out of scope.
     */
    virtual ~FrontListHasA() {}

    /**
     * @brief Inserts a new entry at the front of the list.
     *
     * @param newEntry The element to insert.
     * @return True if insertion succeeded, false otherwise.
     * 
     * @note Internally calls `LinkedList::insert(1, newEntry)`.
     */
    bool insert(const ItemType& newEntry) override {
        return list.insert(1, newEntry);
    }

    /**
     * @brief Removes the front entry of the list.
     *
     * @return True if an entry was removed, false if the list was empty.
     * 
     * @note Internally calls `LinkedList::remove(1)`.
     */
    bool remove() override {
        return !list.isEmpty() && list.remove(1);
    }

    /**
     * @brief Retrieves the front entry of the list.
     *
     * @throws std::logic_error if the list is empty.
     * @return The element currently stored at the front.
     */
    ItemType retrieve() const override {
        if (list.isEmpty())
            throw std::logic_error("FrontListHasA: empty list");
        return list.getEntry(1);
    }

    /**
     * @brief Checks whether the list is empty.
     * @return True if the list contains no elements.
     */
    bool isEmpty() const override { return list.isEmpty(); }

    /**
     * @brief Clears all elements from the list.
     *
     * Calls the internal LinkedList’s clear() method to remove all nodes.
     */
    void clear() override { list.clear(); }
};

#endif
