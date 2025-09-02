#include "Website.h"

Website::Website() {
    this->state = "Welcome";
}

void Website::update(std::string message) {
    if (message == "Pizza Added") {
        this->state = "Pizza Added Headline";
    } else if (message == "Pizza Removed") {
        this->state = "Pizza Removed Headline";
    } else if (message == "Special Added") {
        this->state = "Special Added Headline";
    } else if (message == "Special Removed") {
        this->state = "Special Removed Headline";
    }
}

void Website::toString(PizzaMenu* menu, SpecialsMenu* specials) const {
        std::cout << "============================================\n";
        std::cout << "Current Website State: " << this->state << "\n";
        std::cout << "============================================\n";

        if (state == "Pizza Added Headline") {
            std::cout << "### NEW PIZZA \"" << menu->getPizzas().back()->getName() << "\" ADDED !!! ###\n";
            std::cout << "Our latest masterpiece has arrived: the " << menu->getPizzas().back()->getName() << "!\n";
            std::cout << "Featuring a hand-tossed crust, rich tomato sauce, gooey mozzarella,\n";
            std::cout << "and a blend of toppings that will make every bite unforgettable.\n";
            std::cout << "Perfect for sharing with friends—or keeping all to yourself!\n";
        }
        else if (state == "Pizza Removed Headline") {
            std::cout << "### PIZZA \"" << menu->getPizzas().back()->getName() << "\" REMOVED !!! ###\n";
            std::cout << "We're sorry to announce that the " << menu->getPizzas().back()->getName() << " is no longer available.\n";
            std::cout << "Thank you for your understanding as we make room for new flavors!\n";
        }
        else if (state == "Special Added Headline") {
            std::cout << "### NEW SPECIAL \"" << specials->getPizzas().back()->getName() << "\" ADDED !!! ###\n";
            std::cout << "Introducing our latest special: the " << specials->getPizzas().back()->getName() << "!\n";
            std::cout << "A delightful combination of flavors, crafted with the finest ingredients.\n";
            std::cout << "Don't miss out on this limited-time offer!\n";
        } else if (state == "Special Removed Headline") {
            std::cout << "### SPECIAL \"" << specials->getPizzas().back()->getName() << "\" REMOVED !!! ###\n";
            std::cout << "We're sorry to announce that the " << specials->getPizzas().back()->getName() << " is no longer available.\n";
            std::cout << "Thank you for your understanding as we make room for new flavors!\n";
        } else if (state == "Welcome") {
            std::cout << "### Welcome to Pizza Palace! ###\n";
            std::cout << "Home of handcrafted pizzas, baked with passion since 1999.\n";
            std::cout << "Browse our menu, explore new flavors, and discover why our customers\n";
            std::cout << "say every slice tastes like happiness.\n";
        }

        std::cout << "============================================\n";
    }