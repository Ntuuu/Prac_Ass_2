#ifndef PIZZAMENU_H
#define PIZZAMENU_H

#include "Menus.h"

class PizzaMenu : public Menu {
    public:
        void notifyObservers(std::string message) override {
            // Update the pizza menu based on the message
        }
};

#endif
