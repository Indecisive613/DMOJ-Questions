//https://dmoj.ca/problem/dwite10c3p1
//2019
#include <bits/stdc++.h> 
using namespace std;
void simplify(int & a, int & b) {
    int primes[14] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43};
    if (a == b) {
        a = 1;
        b = 1;
    }
    else {
        for (int i = 0; i < 14; i++) {
            if (i > sqrt(a)|| i > sqrt(b)) {
                break;
            }
            if (a%primes[i] == 0 && b%primes[i] == 0) {
                a = a/primes[i];
                b = b/primes[i];
                i--;
            }
        }
    }
}
void swap(int & a1, int &a2) {
    int temp = a1;
    a1 = a2;
    a2 = temp;
}

int main() {
    int x1, y1, x2, y2, Tx, Ty, ans[5];
    
    for (int k = 0; k < 5; k++) {
        cin >> x1 >> y1 >> x2 >> y2;
        if (x2 < x1) { 
            swap(x1, x2);
            swap(y1, y2);
        }
    
        Tx = x2-x1;
        Tx = abs(Tx);
        Ty = y2-y1;
        Ty = abs(Ty);
    
        if (Tx == 0) { 
            if (Ty < 2)
                ans[k] = 0;
            else 
                ans[k] = Ty-1;
        }
        else {
            if (Ty == 0) {
                if (Tx < 2) 
                    ans[k] = 0;
                else 
                    ans[k] = Tx-1;
            }
            else { 
                simplify(Tx, Ty); 
                if (x1 + Tx > x2 - Tx) {
                    ans[k] = 0;
                }
            else {
                ans[k] = ((x2-Tx)-(x1+Tx))/Tx + 1;
                }
            }
        }
    }
    
    for (int k = 0; k < 5; k++) {
        cout << ans[k] << endl;
    }

    return 0;
}
