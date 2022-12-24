//https://dmoj.ca/problem/acmtryouts0b
//2021
#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    string ans[T];
    
    for (int i = 0; i < T; i++){
        int N;
        cin >> N;
        string pile1, pile2;
        cin >> pile1 >> pile2;
        
        for (int j = N-1; j > -1; j--){
            ans[i] = ans[i] + pile2.substr(j, 1) + pile1.substr(j, 1);
        }
    }
    
    for (int i = 0; i < T; i++){
        cout << ans[i] << endl;
    }
    return 0;
}
