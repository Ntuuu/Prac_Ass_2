#ifndef OBSERVER_H
#define OBSERVER_H

#include "Pizza.h"
#include "DiscountStrategy.h"

// will act as the State in the state design pattern
// Menus is context

class Observer {
    protected:
        std::string state;
    public:
        Observer();
        virtual void update(std::string message) = 0;
};

#endif
