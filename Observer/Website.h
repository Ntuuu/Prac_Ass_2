#ifndef WEBSITE_H
#define WEBSITE_H

#include "Observer.h"

class Website : public Observer {
    public:
        void update(std::string message) override {
            // Update the website view based on the message
        }
};

#endif
