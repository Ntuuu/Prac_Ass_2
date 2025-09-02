#include "PizzaMenu.h"

void PizzaMenu::addPizza(Pizza* pizza) {
    pizzas.push_back(pizza);
    notifyObservers("Pizza Added");
}

void PizzaMenu::removePizza(Pizza* pizza) {
    pizzas.erase(std::remove(pizzas.begin(), pizzas.end(), pizza), pizzas.end());
    notifyObservers("Pizza Removed");
}

void PizzaMenu::notifyObservers(std::string message) const {
    if (message == "Pizza Added" || message == "Pizza Removed") {
        for (auto observer : observers) {
        observer->update(message);
        }
    } else {
        std::cout << "Invalid Message" << std::endl;
    }
    
}
