#ifndef PIZZAMENU_H
#define PIZZAMENU_H

#include "Menus.h"

class PizzaMenu : public Menus {
    public:
        void addPizza(Pizza* pizza) override;
        void removePizza(Pizza* pizza) override;
        void notifyObservers(std::string message) const override {
            std::cout << message << std::endl;
        }
};

#endif
