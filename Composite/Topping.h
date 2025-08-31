#ifndef TOPPING_H
#define TOPPING_H

#include "PizzaComponent.h"

class Topping : public PizzaComponent {
    private:
        std::string name;
        double price;
    public:
        Topping(const std::string& name, double price) : name(name), price(price) {}

        std::string getName() const override {
            return name;
        }

        double getPrice() const override {
            return price;
        }
};

#endif
