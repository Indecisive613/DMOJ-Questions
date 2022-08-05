//https://dmoj.ca/problem/cco96p1
//2019
#include <iostream>
using namespace std;
int main() {
    int N, ntrains, *trains, *answer, temp;
    cin >>N;
    answer = new int[N];
    
    for (int i = 0; i < N; i++) {
        answer[i] = 0;
        cin >> ntrains;
        trains = new int[ntrains];
        for (int j = 0; j < ntrains; j++) {
            cin >> trains[j];
        }
        for (int j = 0; j < ntrains-1; j++) {
            for (int k = 0; k < ntrains-1; k++){
                if (trains[k] > trains[k+1]) {
                    temp = trains[k];
                    trains[k] = trains[k+1];
                    trains[k+1] = temp;
                    answer[i]++;
                }
            }
        }
    }
    
    for (int i = 0; i < N; i++) {
        cout << "Optimal train swapping takes " << answer[i] << " swaps." << endl; 
    }

    return 0;
}
