/**
 * @file FrontListIsA.h
 * @brief FrontList implemented using public inheritance (Is-A relationship).
 *
 * This class demonstrates public inheritance where FrontList
 * **is a** LinkedList but with restricted operations that only act
 * on the front of the list. It overrides certain base methods
 * and deletes positional ones to preserve ADT integrity.
 *
 * @tparam ItemType Data type stored in the list.
 * @see LinkedList
 * @see FrontListInterface
 * @date Fall 2025
 * @version 1.1
 * @autor Dinesh Seveti
 */

#ifndef FRONT_LIST_ISA_H
#define FRONT_LIST_ISA_H

#include "LinkedList.h"
#include "FrontListInterface.h"
#include <stdexcept>

/**
 * @class FrontListIsA
 * @brief FrontList derived publicly from LinkedList (Is-A relationship).
 *
 * @tparam ItemType The data type of elements stored in the list.
 *
 * Inherits the full LinkedList interface publicly but disables positional methods.
 * Only allows operations at the **front** of the list.
 */
template<class ItemType>
class FrontListIsA : public LinkedList<ItemType>, public FrontListInterface<ItemType> {
public:
    /** @brief Default constructor. */
    FrontListIsA() = default;

    /** @brief Copy constructor. */
    FrontListIsA(const FrontListIsA& other) : LinkedList<ItemType>(other) {}

    /** @brief Destructor. */
    virtual ~FrontListIsA() {}

    /**
     * @brief Inserts a new entry at the front of the list.
     * @param newEntry The item to insert.
     * @return True if insertion succeeded.
     */
    bool insert(const ItemType& newEntry) override {
        return LinkedList<ItemType>::insert(1, newEntry);
    }

    /**
     * @brief Removes the front entry of the list.
     * @return True if removal succeeded, false otherwise.
     */
    bool remove() override {
        return !LinkedList<ItemType>::isEmpty() && LinkedList<ItemType>::remove(1);
    }

    /**
     * @brief Retrieves the front entry.
     * @return The front element.
     * @throws std::logic_error If the list is empty.
     */
    ItemType retrieve() const override {
        if (LinkedList<ItemType>::isEmpty())
            throw std::logic_error("FrontListIsA: empty list");
        return LinkedList<ItemType>::getEntry(1);
    }

    /**
     * @brief Removes all entries from the list.
     * Clears nodes safely even though position-based removal is deleted.
     */
    void clear() override {
        while (!LinkedList<ItemType>::isEmpty())
            LinkedList<ItemType>::remove(1);
    }

    /**
     * @brief Returns true if the list is empty.
     * @return True if no elements exist.
     *
     * @note This explicitly overrides the ambiguous inherited `isEmpty()` methods
     * from both LinkedList and FrontListInterface.
     */
    bool isEmpty() const override {
        return LinkedList<ItemType>::isEmpty();
    }

    // Disable unsafe inherited methods from LinkedList
    bool insert(int, const ItemType&) = delete;
    bool remove(int) = delete;
    void replace(int, const ItemType&) = delete;
};

#endif
