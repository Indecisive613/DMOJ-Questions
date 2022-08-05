//https://dmoj.ca/problem/coci17c4p1
//2019
#include <iostream>
using namespace std;
int main() {
    int M, N, K, in, sum = 0;
    int *light_loc;
    bool *street;
    
    cin >> M >> N >> K;
    
    light_loc = new int[N]; //places where lights exist
    street = new bool[M]; //length of street in falses
    
    for (int i = 0; i < N; i++) {
        cin >> in;
        street[in-1] = true;
        for (int j = 1; j <= K; j++) {
            if (in-j-1 > -1) {
                street[in - j -1] = true;
            }
            if (in+j-1 < M) {
                street[in + j -1] = true;
            }
        }
    }
  
    for (int i = 0; i < M; i++) {
        if (street[i] == false) { 
            sum++;
            for (int j = 0; j <= 2*K; j++) {
                if (i+j < M) {
                    street[i+j] = true; 
                }
            }
        }
    }
    cout << sum << endl;
    return 0;
}
