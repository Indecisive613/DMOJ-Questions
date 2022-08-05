//https://dmoj.ca/problem/dwite11c1p2
//2020
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, in, moves[5] = {0}, av;
    vector <int> pennies;
    
    for (int c = 0; c < 5; c++) {
        cin >> N;
        av = 0;
        for (int i = 0; i < N; i++) {
            cin >> in;
            av = av+in;
            pennies.push_back(in);
        }
        av = av/N;
        sort(pennies.begin(), pennies.end());
    
        for (int i = 0; i < N; i++) {
            if (pennies[i] >= av) break;
            moves[c] = moves[c] + (av-pennies[i]);
        }
        pennies.clear();
    }
    
    for (int i = 0; i < 5; i++) {
        cout << moves[i] << endl;
    }
    return 0;
}
