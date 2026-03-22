/**
 * @file FrontListAsA.h
 * @brief Definition of the FrontListAsA class implementing the ADT FrontList using private inheritance (As-A relationship).
 *
 * This implementation demonstrates **private inheritance**, meaning that the `FrontListAsA` class
 * derives from the `LinkedList` class but hides all inherited public members from outside access.
 * It exposes only the restricted operations defined in the `FrontListInterface`.
 *
 * @details
 * This approach models an “**is implemented in terms of**” relationship.
 * Unlike composition (Has-A) or public inheritance (Is-A), private inheritance allows
 * reuse of the base class implementation internally, but does not make the derived
 * class a subtype of the base class. Therefore, all inherited public methods from
 * `LinkedList` become private within `FrontListAsA`.
 *
 * The class enforces **FrontList ADT constraints**:
 * - Only the front (position 1) can be accessed or modified.
 * - No positional or random access is available.
 * - The internal list representation is completely encapsulated.
 *
 * Example usage:
 * @code
 * FrontListAsA<char> list;
 * list.insert('X');
 * list.insert('Y');
 * std::cout << list.retrieve(); // Outputs 'Y'
 * list.remove();
 * std::cout << list.retrieve(); // Outputs 'X'
 * list.clear();
 * @endcode
 *
 * @note
 * This class depends on a functioning `LinkedList` implementation that provides:
 * `insert(int, const ItemType&)`, `remove(int)`, `getEntry(int)`, `isEmpty()`, and `clear()`.
 *
 * @see FrontListInterface
 * @see LinkedList
 * @see FrontListHasA
 * @see FrontListIsA
 *
 * @author Dinesh Seveti
 * @date Fall 2025
 */

#ifndef FRONT_LIST_ASA_H
#define FRONT_LIST_ASA_H

#include "LinkedList.h"
#include "FrontListInterface.h"
#include <stdexcept>

/**
 * @class FrontListAsA
 * @brief Concrete FrontList implementation using private inheritance from LinkedList.
 *
 * @tparam ItemType Type of data stored in the list.
 *
 * This design hides the full LinkedList interface from external code,
 * providing only front-based operations. This enforces strict control
 * over data access while still reusing the LinkedList implementation internally.
 */
template<class ItemType>
class FrontListAsA : private LinkedList<ItemType>, public FrontListInterface<ItemType> {
public:
    /**
     * @brief Default constructor.
     * 
     * Creates an empty FrontList.
     */
    FrontListAsA() = default;

    /**
     * @brief Copy constructor.
     * 
     * Creates a deep copy of another FrontListAsA.
     * @param other The list to copy from.
     */
    FrontListAsA(const FrontListAsA& other) : LinkedList<ItemType>(other) {}

    /**
     * @brief Destructor.
     * 
     * Automatically clears the list upon destruction.
     */
    virtual ~FrontListAsA() {}

    /**
     * @brief Inserts a new entry at the front of the list.
     * 
     * @param newEntry The element to insert.
     * @return True if insertion succeeded, false otherwise.
     * 
     * @note Internally calls `LinkedList::insert(1, newEntry)`.
     */
    bool insert(const ItemType& newEntry) override {
        return LinkedList<ItemType>::insert(1, newEntry);
    }

    /**
     * @brief Removes the front entry from the list.
     * 
     * @return True if removal succeeded, false if the list was empty.
     * 
     * @note Internally calls `LinkedList::remove(1)` if not empty.
     */
    bool remove() override {
        return !isEmpty() && LinkedList<ItemType>::remove(1);
    }

    /**
     * @brief Retrieves the front entry from the list.
     * 
     * @return The element currently at the front of the list.
     * @throws std::logic_error If the list is empty.
     */
    ItemType retrieve() const override {
        if (isEmpty())
            throw std::logic_error("FrontListAsA: empty list");
        return LinkedList<ItemType>::getEntry(1);
    }

    /**
     * @brief Checks whether the list is empty.
     * @return True if the list has no entries.
     */
    bool isEmpty() const override { return LinkedList<ItemType>::isEmpty(); }

    /**
     * @brief Removes all entries from the list.
     *
     * Calls the LinkedList base class clear() to delete all nodes.
     */
    void clear() override { LinkedList<ItemType>::clear(); }
};

#endif
