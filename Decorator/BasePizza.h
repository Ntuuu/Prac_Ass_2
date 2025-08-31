#ifndef BASEPIZZA_H
#define BASEPIZZA_H

#include "Pizza.h"

class BasePizza : public Pizza {
    private:
        std::vector<PizzaComponent*> components;
    public:
        double getPrice() const override {
            double total = 5.0;  // Base price for a plain pizza
            for (const auto& component : components) {
                total += component->getPrice();
            }
            return total;
        }

        std::string getName() const override {
            return "Base Pizza";
        }
};

#endif
