#ifndef ORDER_H
#define ORDER_H

#include "Menus.h"
#include "PizzaMenu.h"
#include "SpecialsMenu.h"
#include "Pizza.h"
#include "Customer.h"
#include "Observer.h"

#pragma once

class SpecialsMenu;
class PizzaMenu;

class Order {
    private:
        Pizza* pizza;
    public:
        Order();
        void setOrder(Pizza* pizza, PizzaMenu* menu, SpecialsMenu* specials);
};

#endif