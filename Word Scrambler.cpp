//https://dmoj.ca/problem/dwite09c1p2
//2019
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s[5];
    for (int i = 0; i < 5; i++) {
        getline(cin, s[i]);
        sort(s[i].begin(), s[i].end());
    }
    for (int i = 0; i < 5; i++) {
        do {
            cout << s[i] << '\n';
        } while(std::next_permutation(s[i].begin(), s[i].end()));
    }
    return 0;
}
