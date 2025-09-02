#include "Order.h"

Order::Order() {
    this->pizza = nullptr;
}

void Order::setOrder(Pizza* pizza, PizzaMenu* menu, SpecialsMenu* specials) {
    for (const auto& p : menu->getPizzas()) {
        if (p == pizza) {
            this->pizza = pizza;
            return;
        }
    }

    for (const auto& p : specials->getPizzas()) {
        if (p == pizza) {
            this->pizza = pizza;
            return;
        }
    }

    std::cout << "Pizza not found in menu or specials." << std::endl;
}
