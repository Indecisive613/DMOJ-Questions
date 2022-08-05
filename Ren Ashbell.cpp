//https://dmoj.ca/problem/stnbd1
//2019
#include <iostream>
using namespace std;
int main() {
    int N, Ren, ran;

    cin >> N;
    cin >> Ren;
    
    for (int i = 0; i < N-1; i++) {
        cin >> ran;
        if (ran >= Ren) {
            Ren = -1;
        }
    }
    if (Ren != -1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    
    return 0;
}
