//https://dmoj.ca/problem/dmopc15c7p2
//2019
#include <bits/stdc++.h>
using namespace std;
int main() {
    string in;
    int c = 1;
    getline(cin, in);
    
    for (int i = 0; i < in.length(); i++) {
        if (in[i]== 32) {
            c++;
        }
    }
    
    cout << c << endl;

    return 0;
}
