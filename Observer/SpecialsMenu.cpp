#include "SpecialsMenu.h"

void SpecialsMenu::addPizza(Pizza* pizza) {
    pizzas.push_back(pizza);
    this->notifyObservers("Special Added");
}

void SpecialsMenu::removePizza(Pizza* pizza) {
    notifyObservers("Pizza Removed");
    for (auto it = pizzas.begin(); it != pizzas.end(); ++it) {
        if (*it == pizza) {
            pizzas.erase(it);
            break;
        }
    }
}

void SpecialsMenu::notifyObservers(std::string message) const {
    if (message == "Special Added" || message == "Special Removed") {
        for (auto observer : observers) {
        observer->update(message);
        }
    } else {
        std::cout << "Invalid Message" << std::endl;
    }
    
}
