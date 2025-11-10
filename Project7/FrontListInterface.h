/**
 * @file FrontListInterface.h
 * @brief Abstract interface for the ADT FrontList.
 *
 * Defines the minimal operations required for any FrontList implementation.
 * Used as the base class for Has-A, Is-A, and As-A designs.
 *
 * @tparam ItemType Data type stored in the list.
 * @date Fall 2025
 * @version 1.0
 * @see FrontListHasA
 * @see FrontListIsA
 * @see FrontListAsA
 * @author Dinesh Seveti
 */

#ifndef FRONT_LIST_INTERFACE_H
#define FRONT_LIST_INTERFACE_H

template<class ItemType>
class FrontListInterface {
public:
    virtual ~FrontListInterface() {}

    /** Inserts an item at the front of the list. */
    virtual bool insert(const ItemType& newEntry) = 0;

    /** Removes the front item. */
    virtual bool remove() = 0;

    /** Retrieves the front item. */
    virtual ItemType retrieve() const = 0;

    /** Clears all items from the list. */
    virtual void clear() = 0;

    /** Checks whether the list is empty. */
    virtual bool isEmpty() const = 0;
};
#endif
