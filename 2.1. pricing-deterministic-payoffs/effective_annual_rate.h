//
// effective_annual_rate.h

#include <cmath>
#ifndef EFFECTIVE_ANNUAL_RATE_H
#define EFFECTIVE_ANNUAL_RATE_H

double effective_annual_rate(double principal, double rate, int n) {
    return principal * pow((1 + rate/n), n) - principal;
}

#endif // EFFECTIVE_ANNUAL_RATE_H