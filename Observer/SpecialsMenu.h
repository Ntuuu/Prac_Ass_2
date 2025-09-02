#ifndef SPECIALSMENU_H
#define SPECIALSMENU_H

#include "Menus.h"

class SpecialsMenu : public Menus {
    public:
        void addPizza(Pizza* pizza) override;
        void removePizza(Pizza* pizza) override;
        void notifyObservers(std::string message) const override;
};

#endif
