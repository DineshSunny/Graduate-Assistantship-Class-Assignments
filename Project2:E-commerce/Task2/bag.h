/**
 * @file bag.h
 * @brief Declaration of Bag template class implementing BagInterface.
 */

#ifndef BAG_H
#define BAG_H

#include "bagInterface.h"
#include <vector>
using namespace std;

/**
 * @class Bag
 * @brief Generic bag class storing elements.
 */
template<class T>
class Bag : public BagInterface<T> {
private:
    vector<T> items; ///< Vector to store items

public:
    Bag();

    bool add(const T& item) override;
    bool remove(const T& item) override;
    void clear() override;

    vector<T>& getItems();
    const vector<T>& getItems() const;
};

#include "bag.cpp" // include template implementation
#endif
