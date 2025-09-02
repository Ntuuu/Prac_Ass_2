#ifndef PIZZA_H
#define PIZZA_H

#include "PizzaComponent.h"

class Pizza  {
    private:
        std::string name;
        double price;
    public:
        Pizza(std::string name, double price) : name(name), price(price) {}

        virtual double getPrice() const {
            return price;
        }

        virtual std::string getName() const {
            return name;
        }

        virtual void printPizza() const {
            std::cout << getName() << ": $" << getPrice() << std::endl;
        }

        virtual void setPrice(double newPrice) {
            price = newPrice;
        }
};

#endif
