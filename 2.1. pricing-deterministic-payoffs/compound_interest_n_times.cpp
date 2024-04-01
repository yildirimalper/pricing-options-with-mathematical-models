#include <cmath>
#include "compound_interest_n_times.h"

double compound_interest_n_times(double principal, double rate, double time, int n) {
    return principal * pow((1 + rate/n), n*time);
}
