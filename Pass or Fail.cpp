//https://dmoj.ca/problem/ecoo16r1p1
//2019
#include <iostream>
using namespace std;
int main() {
    int WT, WA, WP, WQ; 
    int T, A, P, Q;
    int students, score, pass[10];
    
    for (int i = 0; i < 10; i++) { 
        cin >> WT >> WA >> WP >> WQ;
        cin >> students;
        pass[i] = 0;
        for (int j = 0; j < students; j++) {
            cin >> T >> A >> P >> Q;
            score = T*WT + A*WA + P*WP + Q*WQ;
            if (score >= 5000) pass[i]++;
        }
    }
    
    for (int i = 0; i < 10; i++) {
        cout << pass[i] << endl;
    }

    return 0;
}
