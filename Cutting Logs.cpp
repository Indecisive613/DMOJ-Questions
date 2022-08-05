//https://dmoj.ca/problem/dmopc14c2p2
//2020
#include <bits/stdc++.h>
using namespace std;
int main() {
    int L, total = 0;
    string logg;
    bool flag;
    
    cin >> L >> logg;
    
    if (logg.find('O') < L) {
        for (int i = logg.find('O'); i < L; i++) {
            if (logg[i] == 'O' && i+1 == L) {
                total++;
            }
            else {
                if (logg[i] == 'O' && logg[i+1] == 'X') {
                    total++;
                }
            }
        }
    }
    cout << total << endl; 
    
    if (total > 0) {
        for (int i = 0; i < L; i++) {
            if (logg[i] == 'O') {
                flag = true;
                cout << "O";
            }
            else {
                if (flag == true) {
                    flag = false;
                    cout << endl;
                }
            }
        }
    }
    
    return 0;
}
