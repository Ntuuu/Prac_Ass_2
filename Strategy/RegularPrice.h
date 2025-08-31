#ifndef REGULARPRICE_H
#define REGULARPRICE_H

#include "DiscountStrategy.h"

class RegularPrice : public DiscountStrategy {
    public:
        double applyDiscount() const override {
            return 1.0;  // No discount
        }
};

#endif
