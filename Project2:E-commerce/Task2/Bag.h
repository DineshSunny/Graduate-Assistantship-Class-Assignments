#ifndef BAG_H
#define BAG_H

#include <vector>
using namespace std;

/**
 * @class Bag
 * A simple container class template for holding items.
 */
template <class T>
class Bag {
protected:
    vector<T> items;

public:
    Bag() {}
    virtual void add(const T& item) { items.push_back(item); }

    virtual bool remove(const T& item) {
        for (auto it = items.begin(); it != items.end(); ++it) {
            if (*it == item) {
                items.erase(it);
                return true;
            }
        }
        return false;
    }

    virtual void clear() { items.clear(); }

    int size() const { return items.size(); }

    vector<T>& getItems() { return items; }
};

#endif
