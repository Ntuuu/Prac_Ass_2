#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Observer.h"
#include "Order.h"
#include "DiscountStrategy.h"
#include "BulkDiscount.h"
#include "RegularPrice.h"
#include "FamilyDiscount.h"

class Order;

class Customer : public Observer {
    private:
        std::vector<Order*> orders;
        int wantScore;
    public:
        Customer();
        void update(std::string message) override;
        void makeOrder(Pizza* pizza, PizzaMenu* menu, SpecialsMenu* specials);
};

#endif
