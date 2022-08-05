//https://dmoj.ca/problem/ecoo17r3p1
//2019
#include <iostream>
using namespace std;
int main() {
    int bakers_dozens[10] = {0};//hold answers here
    int info, F, D, *bd, *remaining; //down the line and current input+leftover
    long int sum; 
    
    for (int i = 0; i < 10; i++) { //for the ten tcs
        cin >> F >> D;
        bd = new int[F];
        remaining = new int[F];
        for (int j = 0; j < F; j++) { //initializing arrays to zeroes
            bd[j] = 0;
            remaining[j] = 0;
        }
        for (int j = 0; j < D; j++) {
            sum = 0;
            for (int k = 0; k < F; k++) {
                cin >> info;
                remaining[k] = remaining[k] + info; //vertical
                bd[k] = bd[k] + remaining[k]/13;
                remaining[k] = remaining[k]%13;
                sum = sum + info; //horizontal
            }
            if (sum%13==0) {
                bakers_dozens[i] = bakers_dozens[i] + sum/13;
            }
        }
        for (int j = 0; j < F; j++) {
            if (remaining[j] == 0) {
                bakers_dozens[i] = bakers_dozens[i] + bd[j];
            }
        }
   }
   
   for (int i = 0; i < 10; i++) {
       cout << bakers_dozens[i] << endl;
   }

    return 0;
}

