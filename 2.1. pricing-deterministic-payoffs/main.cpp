#include <iostream>
#include <cmath>
#include "simple_interest.h"
#include "compound_interest_annual.h"
#include "compound_interest_n_times.h"
#include "effective_annual_rate.h"

using namespace std;

int main() {
    double principal, rate, time;
    int choice, n;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter interest rate (as a decimal): ";
    cin >> rate;

    cout << "Enter time period (in years): ";
    cin >> time;

    cout << "Select type of interest calculation:\n";
    cout << "1. Simple Interest\n";
    cout << "2. Compound Interest (annually)\n";
    cout << "3. Compound Interest (n times a year)\n";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Simple Interest: " << simple_interest(principal, rate, time) << "\n";
            cout << "Effective Annual Rate: " << effective_annual_rate(principal, rate, 1) << "\n";
            break;
        case 2:
            cout << "Compound Interest (annually): " << compound_interest_annual(principal, rate, time) << "\n";
            cout << "Effective Annual Rate: " << effective_annual_rate(principal, rate, 1) << "\n";
            break;
        case 3:
            cout << "Enter the number of times interest is compounded per year: ";
            cin >> n;
            cout << "Compound Interest (n times a year): " << compound_interest_n_times(principal, rate, time, n) << "\n";
            cout << "Effective Annual Rate: " << effective_annual_rate(principal, rate, n) << "\n";
            break;
        default:
            cout << "Invalid choice\n";
    }


    return 0;
}