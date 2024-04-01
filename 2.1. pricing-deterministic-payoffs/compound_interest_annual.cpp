#include "compound_interest_annual.h"
#include <cmath>

double compound_interest_annual(double principal, double rate, double time) {
    return principal * pow((1 + rate), time);
}