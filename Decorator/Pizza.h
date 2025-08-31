#ifndef PIZZA_H
#define PIZZA_H

#include "PizzaComponent.h"

class Pizza  {
    public:
        virtual double getPrice() const {
            return 0.0;  // Placeholder implementation
        }

        virtual std::string getName() const {
            return "Base Pizza";  // Placeholder implementation
        }

        virtual void printPizza() const {
            std::cout << getName() << ": $" << getPrice() << std::endl;
        }
};

#endif
