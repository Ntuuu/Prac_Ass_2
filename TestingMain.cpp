#include "Order.h"
#include "PizzaMenu.h"
#include "SpecialsMenu.h"
#include "Pizza.h"
#include "Customer.h"
#include "Website.h"
#include <iostream>

int main() {
    // Create menus
    PizzaMenu* menu = new PizzaMenu();
    SpecialsMenu* specials = new SpecialsMenu();

    // Create observers
    Customer* customer = new Customer();
    Website* website = new Website();

    // Register observers
    menu->addObserver(customer);
    menu->addObserver(website);

    // Create pizzas
    Pizza* margherita = new Pizza("Margherita", 8.99);
    Pizza* pepperoni = new Pizza("Pepperoni", 9.99);
    Pizza* hawaiian = new Pizza("Hawaiian", 10.99);

    // Add pizzas to menu
    menu->addPizza(margherita);
    menu->addPizza(pepperoni);
    menu->addPizza(hawaiian);

    // Add pizza to specials
    Pizza* bbqChicken = new Pizza("BBQ Chicken", 12.99);
    specials->addPizza(bbqChicken);

    // Customer makes an order from menu
    customer->makeOrder(margherita, menu, specials);

    // Customer makes an order from specials
    customer->makeOrder(bbqChicken, menu, specials);

    // Remove a pizza and observe updates
    menu->removePizza(hawaiian);
    specials->removePizza(bbqChicken);

    // Show website state
    website->toString(menu, specials);

    // Clean up
    delete margherita;
    delete pepperoni;
    delete hawaiian;
    delete bbqChicken;
    delete customer;
    delete website;
    delete menu;
    delete specials;

}