#include <iostream>
using namespace std;

int main() {    

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int rupees = 15;
    int wrappers = 0;
    int chocolates = rupees;
    bool inital = true;
    while(wrappers>=3) {
        chocolates = chocolates + wrappers/3;
        int remaining_wrappers = wrappers /3 ;
        wrappers = remaining_wrappers % 3; 
    }

    cout<<chocolates;

    return 0;
}