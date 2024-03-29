#include <iostream>
using namespace std;

int main() {    
    int rupees = 15;
    int wrappers = 0;
    int chocolates = rupees; // Initially, we buy chocolates with rupees
    bool initial = true;
    
    while (initial || wrappers >= 3) {
        initial = false;
        chocolates += wrappers / 3; // Exchange wrappers for chocolates
        wrappers = wrappers / 3 + wrappers % 3; // Remaining wrappers after exchange
    }

    cout << chocolates;

    return 0;
}
