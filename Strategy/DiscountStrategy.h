#ifndef DISCOUNTSTRATEGY_H
#define DISCOUNTSTRATEGY_H


class DiscountStrategy {
    public:
        virtual double applyDiscount() const = 0;
};

#endif
