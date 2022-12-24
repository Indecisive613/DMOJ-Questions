//https://dmoj.ca/problem/bobsrocks
//2021
#include <bits/stdc++.h>

using namespace std;

int main() {
    int r[51] = {0};
    int n, temp, most = -1, ans;
    
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> temp;
        r[temp]++;
    }
    
    for (int i = 1; i < 51; i++){
        if (r[i]*i > most){
            ans = i;
            most = r[i]*i;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
