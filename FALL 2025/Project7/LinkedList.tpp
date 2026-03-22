/**
 * @file LinkedList.tpp
 * @brief Template implementation of the LinkedList class for the ADT FrontList assignment.
 *
 * Provides full definitions for all member functions declared in LinkedList.h.
 * This file must be included at the end of LinkedList.h so that
 * template instantiation works correctly.
 *
 * @tparam ItemType Type of data stored in the list.
 * @date Fall 2025
 * @version 1.0
 * @see LinkedList.h
 * @author Dinesh Seveti
 */

// ===================== Constructors & Destructor =====================

template<class ItemType>
LinkedList<ItemType>::LinkedList() : headPtr(nullptr), itemCount(0) {}

template<class ItemType>
LinkedList<ItemType>::LinkedList(const LinkedList<ItemType>& aList)
    : itemCount(aList.itemCount) {
    if (!aList.headPtr) { headPtr = nullptr; return; }

    headPtr = new Node(aList.headPtr->item);
    Node* newChainPtr = headPtr;
    Node* origChainPtr = aList.headPtr->next;

    while (origChainPtr) {
        newChainPtr->next = new Node(origChainPtr->item);
        newChainPtr = newChainPtr->next;
        origChainPtr = origChainPtr->next;
    }
    newChainPtr->next = nullptr;
}

template<class ItemType>
LinkedList<ItemType>::~LinkedList() { clear(); }

// ========================= Core Operations ===========================

template<class ItemType>
bool LinkedList<ItemType>::isEmpty() const { return itemCount == 0; }

template<class ItemType>
int LinkedList<ItemType>::getLength() const { return itemCount; }

template<class ItemType>
bool LinkedList<ItemType>::insert(int newPosition, const ItemType& newEntry) {
    bool ok = (newPosition >= 1) && (newPosition <= itemCount + 1);
    if (!ok) return false;

    Node* newNodePtr = new Node(newEntry);

    if (newPosition == 1) {
        newNodePtr->next = headPtr;
        headPtr = newNodePtr;
    } else {
        Node* prevPtr = getNodeAt(newPosition - 1);
        newNodePtr->next = prevPtr->next;
        prevPtr->next = newNodePtr;
    }
    itemCount++;
    return true;
}

template<class ItemType>
bool LinkedList<ItemType>::remove(int position) {
    bool ok = (position >= 1) && (position <= itemCount);
    if (!ok) return false;

    Node* curPtr = nullptr;
    if (position == 1) {
        curPtr = headPtr;
        headPtr = headPtr->next;
    } else {
        Node* prevPtr = getNodeAt(position - 1);
        curPtr = prevPtr->next;
        prevPtr->next = curPtr->next;
    }
    delete curPtr;
    itemCount--;
    return true;
}

template<class ItemType>
void LinkedList<ItemType>::clear() {
    while (!isEmpty()) remove(1);
}

// ========================= Utility Methods ===========================

template<class ItemType>
typename LinkedList<ItemType>::Node* LinkedList<ItemType>::getNodeAt(int position) const {
    assert(position >= 1 && position <= itemCount);
    Node* curPtr = headPtr;
    for (int i = 1; i < position; i++) curPtr = curPtr->next;
    return curPtr;
}

template<class ItemType>
ItemType LinkedList<ItemType>::getEntry(int position) const {
    if (position < 1 || position > itemCount)
        throw std::out_of_range("Invalid position in getEntry()");
    return getNodeAt(position)->item;
}

template<class ItemType>
void LinkedList<ItemType>::replace(int position, const ItemType& newEntry) {
    if (position < 1 || position > itemCount)
        throw std::out_of_range("Invalid position in replace()");
    getNodeAt(position)->item = newEntry;
}
