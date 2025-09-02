#include "Menus.h"

void Menus::addObserver(Observer* observer) {
    observers.push_back(observer);
}

void Menus::removeObserver(Observer* observer) {
    observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
}

void Menus::addPizza(Pizza* pizza) {
    pizzas.push_back(pizza);
    notifyObservers("Pizza Added");
}

void Menus::removePizza(Pizza* pizza) {
    notifyObservers("Pizza Removed");
    pizzas.erase(std::remove(pizzas.begin(), pizzas.end(), pizza), pizzas.end());
}

