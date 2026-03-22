/**
 * @file bagInterface.h
 * @brief Abstract interface for a Bag collection.
 */

#ifndef BAGINTERFACE_H
#define BAGINTERFACE_H

template<class T>
class BagInterface {
public:
    virtual bool add(const T& item) = 0;
    virtual bool remove(const T& item) = 0;
    virtual void clear() = 0;
    virtual ~BagInterface() {}
};

#endif
