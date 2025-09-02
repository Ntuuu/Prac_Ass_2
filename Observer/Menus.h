#pragma once

#include <vector>
#include <string>
#include "Pizza.h"
#include "Observer.h"

class Observer; // Forward declaration if not included

class Menus {
    protected:
    std::vector<Observer*> observers;
    std::vector<Pizza*> pizzas;

    public:
        const std::vector<Pizza*>& getPizzas() const {
            return pizzas;
        }
        void addObserver(Observer* observer);
        void removeObserver(Observer* observer);
        virtual void addPizza(Pizza* pizza);
        virtual void removePizza(Pizza* pizza);
        virtual void notifyObservers(std::string message) const = 0;


};