//https://dmoj.ca/problem/dmopc15c3p2
//2019
#include <bits/stdc++.h> 
using namespace std;
int main() {
    int N;
    long long int *cakes, tot = 0, min = 0;

    cin >> N;
    cakes = new long long int[N];
    
    for (int i = 0; i < N; i++) {
        cin >> cakes[i];
        tot = tot + cakes[i];
    }
    
    if (tot%N != 0) {
        cout << "Impossible" << endl;
    }
    else {
        sort(cakes, cakes+N);
        for (int i = N-1; i > -1; i--) {
            if (cakes[i] > tot/N) {
                min = min + (cakes[i]-tot/N);
            }
            else {
                break;
            }
        }
        cout << min << endl;
    }

    return 0;
}
