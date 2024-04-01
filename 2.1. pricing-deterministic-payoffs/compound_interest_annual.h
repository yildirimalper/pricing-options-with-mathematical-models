//
// compound_interest_annual.h

#include <cmath>
#ifndef COMPOUND_INTEREST_ANNUAL_H
#define COMPOUND_INTEREST_ANNUAL_H

double compound_interest_annual(double principal, double rate, double time) {
    return principal * pow((1 + rate), time);
}

#endif // COMPOUND_INTEREST_ANNUAL_H