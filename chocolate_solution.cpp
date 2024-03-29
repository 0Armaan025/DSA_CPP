#include <iostream>
using namespace std;

int main() {    

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int rupees = 15;
    int wrappers = 0;
    int chocolates = 0;
    bool inital = true;
    while(rupees>=0 && inital) {
        
        if(wrappers == 0) {
            chocolates = chocolates + rupees/1;
            rupees = 0;
            wrappers = wrappers + chocolates;
        }
        else if(wrappers %3 == 0){
            
                chocolates = chocolates + wrappers/3;
                wrappers = wrappers + chocolates;
                
        
        }
        else {
            inital=false;
        }
    }

    cout<<chocolates;

    return 0;
}