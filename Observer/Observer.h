#ifndef OBSERVER_H
#define OBSERVER_H

#include "Pizza.h"
#include "DiscountStrategy.h"

class Observer {
    public:
        virtual void update(std::string message);
};

#endif
