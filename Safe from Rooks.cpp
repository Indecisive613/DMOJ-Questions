//https://dmoj.ca/problem/dwite10c5p2
//2020
#include <iostream>
using namespace std;

int main() {
    int R, C, Ro, X, Y, rleft, cleft;
    bool *row, *column;
    int answer[5];
    
    for (int c = 0; c < 5; c++) {
        rleft = 0;
        cleft = 0;
    
        cin >> R >> C >> Ro;
        row = new bool[R];
        column = new bool[C];
        
        for (int i = 0; i < Ro; i++) {
            cin >> X >> Y;
            row[X-1] = true;
            column[Y-1] = true;
        }
        
        for (int i = 0; i < R; i++) {
            if (row[i] == false) rleft++;
        }

        for (int i = 0; i < C; i++) {
            if (column[i] == false) cleft++;
        }
        answer[c] = rleft*cleft;
    }
    
    for (int i = 0; i < 5; i++) {
        cout << answer[i] << endl;
    }
    
    return 0;
}
