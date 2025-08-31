#ifndef BULKDISCOUNT_H
#define BULKDISCOUNT_H

#include "DiscountStrategy.h"

class BulkDiscount : public DiscountStrategy {
    public:
        double applyDiscount() const override {
            return 0.7;  // Apply 30% discount
        }
};

#endif
