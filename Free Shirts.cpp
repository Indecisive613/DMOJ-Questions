//https://dmoj.ca/problem/ecoo19r1p1
//2019
#include<bits/stdc++.h> 
using namespace std;
int main() {
    int answer[10] = {0};
    int N, M, D, use, cs, ts;
    
    for (int i = 0; i < 10; i++) {
        vector<int> cal;
        cin >> N >> M >> D;
        cs = N;
        ts = N;
        for (int j = 0; j < M; j++) {
            cin >> use;
            cal.push_back(use);
        }
        sort(cal.begin(), cal.end());
        for (int j = 1; j <= D; j++) {
            if (cs == 0) {
                cs = ts;
                answer[i]++;
            }
            cs--;
            if (cal.size() > 0) {
                while (cal[0] == j) { 
                    cs++;
                    ts++;
                    cal.erase(cal.begin());
                    if (cal.size() == 0) break;
                }
            }
        }
    }
    
    for (int i = 0; i < 10; i++) {
        cout << answer[i] << endl; 
    }

    return 0;
}
