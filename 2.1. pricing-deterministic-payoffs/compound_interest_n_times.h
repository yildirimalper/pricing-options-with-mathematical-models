//
// compound_interest_n_times.h

#include <cmath>
#ifndef COMPOUND_INTEREST_N_TIMES_H
#define COMPOUND_INTEREST_N_TIMES_H

double compound_interest_n_times(double principal, double rate, double time, int n) {
    return principal * pow((1 + rate/n), n*time);
}

#endif // COMPOUND_INTEREST_N_TIMES_H