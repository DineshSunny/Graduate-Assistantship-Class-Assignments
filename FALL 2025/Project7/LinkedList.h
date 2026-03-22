/**
 * @file LinkedList.h
 * @brief Declaration of the LinkedList template class for the ADT FrontList assignment.
 *
 * Defines the interface of a generic singly linked list supporting insertion,
 * removal, retrieval, replacement, and traversal operations.
 * The implementation is provided separately in **LinkedList.tpp**,
 * which is included at the end of this header.
 *
 * @tparam ItemType Type of data stored in each list node.
 * @see LinkedList.tpp
 * @see FrontListHasA
 * @see FrontListIsA
 * @see FrontListAsA
 * @see FrontListInterface
 * @date Fall 2025
 * @version 1.0
 * @author Dinesh Seveti
 */

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <cassert>
#include <stdexcept>

/**
 * @class LinkedList
 * @brief Template class implementing a singly linked list.
 *
 * The list uses 1-based indexing and dynamic node allocation.
 * This class provides the foundation for the ADT FrontList implementations
 * (Has-A, Is-A, As-A relationships).
 *
 * @tparam ItemType The type of elements stored in the list.
 */
template<class ItemType>
class LinkedList {
private:
    /**
     * @struct Node
     * @brief Internal node representation of the linked list.
     */
    struct Node {
        ItemType item;   ///< Data element.
        Node* next;      ///< Pointer to next node.

        /** @brief Constructs a node with an item and optional next pointer. */
        Node(const ItemType& anItem, Node* nextNodePtr = nullptr)
            : item(anItem), next(nextNodePtr) {}
    };

    Node* headPtr;   ///< Pointer to first node.
    int itemCount;   ///< Number of items currently stored.

    /**
     * @brief Retrieves a pointer to the node at the given 1-based position.
     * @param position Index of desired node (1 ≤ position ≤ itemCount).
     * @return Pointer to the requested node.
     */
    Node* getNodeAt(int position) const;

public:
    /** @brief Default constructor – creates an empty list. */
    LinkedList();

    /** @brief Copy constructor – performs a deep copy of another list. */
    LinkedList(const LinkedList<ItemType>& aList);

    /** @brief Destructor – releases all dynamically allocated nodes. */
    virtual ~LinkedList();

    /** @brief Returns true if the list contains no elements. */
    bool isEmpty() const;

    /** @brief Returns the number of elements in the list. */
    int getLength() const;

    /**
     * @brief Inserts an element at a specific 1-based position.
     * @param newPosition Valid range = [1, itemCount + 1].
     * @param newEntry The element to insert.
     * @return True if insertion succeeds.
     */
    bool insert(int newPosition, const ItemType& newEntry);

    /**
     * @brief Removes the element at a specific 1-based position.
     * @param position Valid range = [1, itemCount].
     * @return True if removal succeeds.
     */
    bool remove(int position);

    /** @brief Removes all elements, leaving an empty list. */
    void clear();

    /**
     * @brief Retrieves the element at a specific 1-based position.
     * @param position Index of element to retrieve.
     * @return Copy of the stored element.
     * @throws std::out_of_range If position is invalid.
     */
    ItemType getEntry(int position) const;

    /**
     * @brief Replaces the element at a given 1-based position.
     * @param position Index of element to replace.
     * @param newEntry New value.
     * @throws std::out_of_range If position is invalid.
     */
    void replace(int position, const ItemType& newEntry);
};

/** @brief Includes template definitions so they are visible to all translation units. */
#include "LinkedList.tpp"
#endif
