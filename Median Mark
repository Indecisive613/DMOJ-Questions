//https://dmoj.ca/problem/dmopc14c1p1
//2020
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, in;
    vector <int> mark;
    
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> in;
        mark.push_back(in);
    }
    
    sort(mark.begin(), mark.end());
    
    if (N % 2 == 1) {
        cout << mark[(N-1)/2] << endl;
    }
    else {
        cout << round((mark[N/2] + mark[N/2-1])/2.0) << endl;
    }

    return 0;
}
