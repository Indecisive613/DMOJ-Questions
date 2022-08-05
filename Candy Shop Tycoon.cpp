//https://dmoj.ca/problem/dmpg19s1
//2020
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> n;
    int in, m1, m2, m3;
    long int C;
    bool success = false;
    
    for (int i = 0; i < 3; i++) {
        cin >> C;
        n.push_back(C);
    }
    cin >> C;
    
    sort(n.begin(), n.end());
    
    m1 = C/n[0];
    if (m1 > 100) m1 = 100;
    m2 = C/n[1];
    if (m2 > 100) m2 = 100;
    m3 = C/n[2];
    if (m3 > 100) m3 = 100;
    
    for (int i = 0; i <= m3; i++) {
        for (int j = 0; j <= m2; j++) {
            for (int k = 0; k <= m1; k++) {
                if (n[0]*k + n[1]*j + n[2]*i == C) {
                    success = true;
                    cout << "QUEST CLEARED" << endl;
                    break;
                }
            }
            if (success == true) break;
        }
        if (success == true) break;
    }
    
    if (success == false) {
        cout << "TRY AGAIN" << endl;
    }

    return 0;
}
