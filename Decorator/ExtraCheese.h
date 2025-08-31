#ifndef EXTRACHEESE_H
#define EXTRACHEESE_H

#include "PizzaDecorator.h"

class ExtraCheese : public PizzaDecorator {
    public:
        ExtraCheese(Pizza* pizza) : PizzaDecorator(pizza) {}

        double getPrice() const override {
            return PizzaDecorator::getPrice() + 1.0;  // Add extra charge for cheese
        }

        std::string getName() const override {
            return PizzaDecorator::getName() + " + Extra Cheese";
        }

        void printPizza() const override {
            PizzaDecorator::printPizza();
        }
};

#endif
