//
// compound_interest_n_times.h

#include <cmath>
#include "effective_annual_rate.h"

double effective_annual_rate(double principal, double rate, int n) {
    return principal * pow((1 + rate/n), n) - principal;
}