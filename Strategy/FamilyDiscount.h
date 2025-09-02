#ifndef FAMILYDISCOUNT_H
#define FAMILYDISCOUNT_H

#include "DiscountStrategy.h"

class FamilyDiscount : public DiscountStrategy {
    public:
        double applyDiscount() const override {
            return 0.15;  // Apply 15% discount
        }
};

#endif
