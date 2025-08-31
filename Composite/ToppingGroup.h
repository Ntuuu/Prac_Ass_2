#ifndef TOPPINGGROUP_H
#define TOPPINGGROUP_H

#include "PizzaComponent.h"
#include <vector>

class ToppingGroup : public PizzaComponent {
    private:
        std::vector<PizzaComponent*> toppings;
    public:
        void addTopping(PizzaComponent* topping) {
            toppings.push_back(topping);
        }

        std::string getName() const override {
            std::string names;
            for (const auto& topping : toppings) {
                names += topping->getName() + ", ";
            }
            return names.empty() ? "No Toppings" : names.substr(0, names.size() - 2);
        }

        double getPrice() const override {
            double total = 0;
            for (const auto& topping : toppings) {
                total += topping->getPrice();
            }
            return total;
        }
};

#endif
