#ifndef PIZZACOMPONENT_H
#define PIZZACOMPONENT_H

#include <string>
#include <iostream> 

class PizzaComponent {
    private:
        double price;
        std::string name;
    public:
        virtual std::string getName() const {
            return name;
        }

        virtual double getPrice() const {
            return price;
        }
};

#endif