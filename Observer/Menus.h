#ifndef MENUS_H
#define MENUS_H

#include "Pizza.h"
#include "Observer.h"

class Menu {
    private:
        std::vector<Observer*> observers;
        std::vector<Pizza> pizzas;
    public:
        void addObserver(Observer* observer) {
            observers.push_back(observer);
        }

        void removeObserver(Observer* observer) {
            observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
        }

        void addPizza(const Pizza& pizza) {
            pizzas.push_back(pizza);
            notifyObservers("Pizza added: " + pizza.getName());
        }

        void removePizza(const Pizza& pizza) {
            pizzas.erase(std::remove(pizzas.begin(), pizzas.end(), pizza), pizzas.end());
            notifyObservers("Pizza removed: " + pizza.getName());
        }

        virtual void notifyObservers(std::string message) {
            for (auto observer : observers) {
                observer->update(message);
            }
        }
};

#endif