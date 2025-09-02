#include "Menus.h"

void Menus::addObserver(Observer* observer) {
    observers.push_back(observer);
}

void Menus::removeObserver(Observer* observer) {
    for (auto it = observers.begin(); it != observers.end(); ++it) {
        if (*it == observer) {
            observers.erase(it);
            break; // remove only one
        }
    }
}


void Menus::addPizza(Pizza* pizza) {
    pizzas.push_back(pizza);
    notifyObservers("Pizza Added");
}

void Menus::removePizza(Pizza* pizza) {
    notifyObservers("Pizza Removed");
    for (auto it = pizzas.begin(); it != pizzas.end(); ++it) {
        if (*it == pizza) {
            pizzas.erase(it);
            break;
        }
    }
}

