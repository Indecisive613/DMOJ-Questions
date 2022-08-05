//https://dmoj.ca/problem/tss17a
//2020
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string a, b, c;
    string *answer;
    
    cin >> n;
    answer = new string[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        if (a == b || a == c) {
            answer[i] = a;
        }
        else {
            if (b == c) {
                answer[i] = b;
            }
            else {
                answer[i] = "???";
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << answer[i] << endl;
    }

    return 0;
}
