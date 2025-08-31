#ifndef FAMILYDISCOUNT_H
#define FAMILYDISCOUNT_H

#include "DiscountStrategy.h"

class FamilyDiscount : public DiscountStrategy {
    public:
        double applyDiscount() const override {
            return 0.8;  // Apply 20% discount
        }
};

#endif
