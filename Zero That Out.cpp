//https://dmoj.ca/problem/ccc15s1
//2019
#include <bits/stdc++.h>
using namespace std;
int main() {
    int K, boss, sum = 0;
    vector<int> num;
    cin >> K;
   
    for (int i = 0; i < K; i++) {
        cin >> boss;
        if (boss == 0) {
            num.resize(num.size()-1);
        }
        else {
            num.push_back(boss);
        }
    }
    for (int i = 0; i < num.size(); i++) {
       sum = sum + num[i];
    }
    cout << sum;

    return 0;
}
