//https://dmoj.ca/problem/coci09c1p2
//2020
#include <iostream>
using namespace std;
int main() {
    int N;
    long int spots = 0;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        spots = spots + (N+1-i)*i + (i+1)*i;
    }
    
    cout << spots << endl;

    return 0;
}
