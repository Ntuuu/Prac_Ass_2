#ifndef DISCOUNTSTRATEGY_H
#define DISCOUNTSTRATEGY_H


class DiscountStrategy {
    protected:
        double currentPrice;
    public:
        virtual double applyDiscount() const = 0;
};

#endif
