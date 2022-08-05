//https://dmoj.ca/problem/coci12c1p1
//2020
#include <iostream>
using namespace std;
int main() {
    string input;
    string cambridge = "CAMBRIDGE";
    bool okay;
    
    cin >> input;
    
    for (int i = 0; i < input.length(); i++) {
        okay = true;
        for (int c = 0; c < 9; c++) {
            if (input[i] == cambridge[c]) {
                okay = false;
                break;
            }
        }
        if (okay == true) cout << input[i];
    }
    cout << endl;

    return 0;
}
