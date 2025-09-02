#ifndef WEBSITE_H
#define WEBSITE_H

#include "Observer.h"
#include "PizzaMenu.h"
#include "SpecialsMenu.h"

class Website : public Observer {
    public:
        Website();
        void update(std::string message) override;
        void toString(PizzaMenu* menu, SpecialsMenu* specials) const;
};

#endif
