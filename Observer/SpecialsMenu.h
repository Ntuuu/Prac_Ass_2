#ifndef SPECIALSMENU_H
#define SPECIALSMENU_H

#include "Menus.h"

class SpecialsMenu : public Menu {
    public:
        void notifyObservers(std::string message) override {
            // Update the specials menu based on the message
        }
};

#endif
