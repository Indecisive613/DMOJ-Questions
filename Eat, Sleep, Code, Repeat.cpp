//https://dmoj.ca/problem/wac3p2
//2019
#include <bits/stdc++.h>
using namespace std;
int main() {
    long int D, a, b, c, H;
    unsigned long long int *ans;
    
    cin >> D;
    ans = new unsigned long long int[D];
    
    for (int i = 0; i < D; i++) {
        cin >> H;
        a = (H/3);
        b = (H-a)/2;
        c = H-a-b;
        ans[i] = a*b*c;
    }
    for (int i = 0; i < D; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}
