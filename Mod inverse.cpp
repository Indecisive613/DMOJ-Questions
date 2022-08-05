//https://dmoj.ca/problem/ccc01j2
//2020
#include <iostream>
using namespace std;
int main() {
    int x, m;
    bool possible = false;
    cin >> x >> m;
    for (int n = m-1; n > 0; n--) {
        if ((x*n) % m == 1) { //had (x*n-1) % m == 0 ??
            possible = true;
            cout << n << endl;
            break;
        }
    }
    if (possible == false) {
        cout << "No such integer exists." << endl;
    }
    return 0;
}
