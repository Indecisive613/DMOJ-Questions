//https://dmoj.ca/problem/vmss7wc15c1p2
//2019
#include <iostream>
#include <vector> 
using namespace std;

int main() {
    int *L, temp, N, *swap;
    bool all_good = true;
    
    cin>> N;
    L = new int[N];
    swap = new int[N];
    vector<vector<int>> card(N);
    
    for (int i = 0; i < N; i++) {
        cin>> L[i];
        card[i] = vector<int> (L[i]);
        for (int j = 0; j < L[i]; j++) {
            cin >> card[i][j];
        }
    }
    
    for (int k = 0; k < N; k++) {
        for (int i = 0; i < L[k]-1; i++) {
            for (int j = 0; j < L[k]-1 ; j++) {
                if (card[k][j] > card[k][j+1]) {
                    temp = card[k][j];
                    card[k][j] = card[k][j+1];
                    card[k][j+1] = temp;
                    swap[k]++;
                    all_good = false;
                }
            }
            if (all_good == true)
                break;
            all_good = true;
        }
    }
    
    for (int i = 0; i < N; i++) {
        cout << swap[i] << endl;
    }
    return 0;
}
