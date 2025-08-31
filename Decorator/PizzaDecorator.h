#ifndef PIZZADECORATOR_H
#define PIZZADECORATOR_H

#include "Pizza.h"

class PizzaDecorator : public Pizza {
    protected:
        Pizza* pizza;
    public:
        PizzaDecorator(Pizza* pizza) : pizza(pizza) {}

        double getPrice() const override {
            return pizza->getPrice();
        }

        std::string getName() const override {
            return pizza->getName();
        }

        void printPizza() const override {
            pizza->printPizza();
        }
};

#endif
