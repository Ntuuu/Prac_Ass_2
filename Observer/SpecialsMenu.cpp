#include "SpecialsMenu.h"

void SpecialsMenu::addPizza(Pizza* pizza) {
    pizzas.push_back(pizza);
    this->notifyObservers("Special Added");
}

void SpecialsMenu::removePizza(Pizza* pizza) {
    pizzas.erase(std::remove(pizzas.begin(), pizzas.end(), pizza), pizzas.end());
    this->notifyObservers("Special Removed");
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
