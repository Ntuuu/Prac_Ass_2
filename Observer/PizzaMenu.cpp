#include "PizzaMenu.h"

void PizzaMenu::addPizza(Pizza* pizza) {
    pizzas.push_back(pizza);
    notifyObservers("Pizza Added");
}

void PizzaMenu::removePizza(Pizza* pizza) {
    notifyObservers("Pizza Removed");
    for (auto it = pizzas.begin(); it != pizzas.end(); ++it) {
        if (*it == pizza) {
            pizzas.erase(it);
            break;
        }
    }
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
