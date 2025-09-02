#include "Customer.h"

Customer::Customer() {
    this->wantScore = 0;
    this->orders = std::vector<Order*>();
}

void Customer::update(std::string message) {
    if (message == "Pizza Added") {
        wantScore++;
    } else if (message == "Pizza Removed") {
        wantScore--;
    } else if (message == "Special Added") {
        wantScore += 2;
    } else if (message == "Special Removed") {
        wantScore -= 2;
    }

if (wantScore > 2) {
        this->state = "Family";
    } else if (wantScore > 5) {
        this->state = "Bulk";
    } else if (wantScore <= 5) {
        this->state = "Default";
    } else if (wantScore > 8) {
        this->state = "Bulk and Family";
    } else {
        this->state = "Default";
    }

    if (orders.size() > 5) {
        this->state = "Bulk";
    }
}

void Customer::makeOrder(Pizza* pizza, PizzaMenu* menu, SpecialsMenu* specials) {
    Order* newOrder = new Order();
    // apply discounts
    if (this->state == "Bulk") {
        BulkDiscount* bulk = new BulkDiscount();
        std::cout << "Bulk order placed for pizza: " << pizza->getName() << std::endl;
        double discount = pizza->getPrice() * bulk->applyDiscount();
        pizza->setPrice(discount);
        for (int i = 0; i < 5; i++) {
            makeOrder(pizza, menu, specials);
        }
    } else if (this->state == "Bulk and Family") {
        FamilyDiscount* family = new FamilyDiscount();
        BulkDiscount* bulk = new BulkDiscount();
        std::cout << "Bulk and Family order placed for pizza: " << pizza->getName() << std::endl;
        double discount = pizza->getPrice() * family->applyDiscount();
        discount = pizza->getPrice() * bulk->applyDiscount();
        pizza->setPrice(discount);
        for (int i = 0; i < 5; i++) {
            makeOrder(pizza, menu, specials);
        }
    } else if (this->state == "Family") {
        FamilyDiscount* family = new FamilyDiscount();
        std::cout << "Family order placed for pizza: " << pizza->getName() << std::endl;
        double discount = pizza->getPrice() * family->applyDiscount();
        pizza->setPrice(discount);
    } else if (this->state == "Default") {
        RegularPrice* regularPrice = new RegularPrice();
        std::cout << "Regular order placed for pizza: " << pizza->getName() << std::endl;
        double discount = pizza->getPrice() * regularPrice->applyDiscount();
        pizza->setPrice(discount);
    }
    newOrder->setOrder(pizza, menu, specials);
    this->orders.push_back(newOrder);
}
