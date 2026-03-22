/**
 * @file bag.cpp
 * @brief Implementation of Bag template class.
 */

#ifndef BAG_CPP
#define BAG_CPP

#include "bag.h"

template<class T>
Bag<T>::Bag() {}

template<class T>
bool Bag<T>::add(const T& item) {
    items.push_back(item);
    return true;
}

template<class T>
bool Bag<T>::remove(const T& item) {
    for (auto it = items.begin(); it != items.end(); ++it) {
        if (*it == item) {
            items.erase(it);
            return true;
        }
    }
    return false;
}

template<class T>
void Bag<T>::clear() {
    items.clear();
}

template<class T>
vector<T>& Bag<T>::getItems() {
    return items;
}

template<class T>
const vector<T>& Bag<T>::getItems() const {
    return items;
}

#endif
