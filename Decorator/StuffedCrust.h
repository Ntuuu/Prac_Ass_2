#ifndef STUFFEDCRUST_H
#define STUFFEDCRUST_H

#include "PizzaDecorator.h"

class StuffedCrust : public PizzaDecorator {
    public:
        StuffedCrust(Pizza* pizza) : PizzaDecorator(pizza) {}

        double getPrice() const override {
            return PizzaDecorator::getPrice() + 2.0;  // Add extra charge for stuffed crust
        }

        std::string getName() const override {
            return PizzaDecorator::getName() + " + Stuffed Crust";
        }

        void printPizza() const override {
            PizzaDecorator::printPizza();
        }
};

#endif
