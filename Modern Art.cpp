//https://dmoj.ca/problem/ccc21s2
//2021
#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, N, K, num, total = 0;
    char letter;
    
    cin >> M >> N >> K;
    
    int row[M] = {0};
    int column[N] = {0};

    for (int i = 0; i < K; i++){
        cin >> letter >> num;
        
        if (letter == 'C'){
            column[num-1]++;
        } else{
            row[num-1]++;
        }
    }
    
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            if ((row[i] + column[j])%2 == 1){
                total++;
            }
        }
    }
    cout << total << endl;
    
    return 0;
}

