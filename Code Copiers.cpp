//https://dmoj.ca/problem/globexcup18s1
//2020
#include <iostream>
using namespace std;
int main() {
    char *coders;
    int N, in, sources = 0;
    
    cin >> N;
    coders = new char[N];
    
    for (int i = 0; i < N; i++) {
        cin >> in;
        if (in != 0) {
            coders[in-1] = true;
        }
    }
    
    for (int i = 0; i < N; i++) {
        if (coders[i] == false) sources++;
    }
    cout << sources << endl;

    return 0;
}
