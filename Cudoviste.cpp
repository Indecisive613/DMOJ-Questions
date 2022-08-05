//https://dmoj.ca/problem/coci09c5p2
//2020#include <iostream>
using namespace std;
int R, C;
char **lot;

int num_of_squashed (int i, int j) {
    int crushed = 0;
    if (lot[i][j] == '#' || lot[i][j+1] == '#' || lot[i+1][j] == '#'|| lot[i+1][j+1] == '#') {
        return -1;
    }
    if (lot[i][j] == 'X') crushed++;
    if (lot[i][j+1] == 'X') crushed++;
    if (lot[i+1][j] == 'X') crushed++;
    if (lot[i+1][j+1] == 'X') crushed++;
    
    return crushed;
}

int main() {
    int counter = 0;
    
    cin >> R >> C;
    cin.ignore();
    lot = new char*[R];
    
    for (int i = 0; i < R; i++) {
        lot[i] = new char[C];
    }
    
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> lot[i][j];
        }
    }
    
    for (int line = 0; line < 5; line++) {
        for (int i = 0; i < R-1; i++) {
            for (int j = 0; j < C-1; j++) {
                if (num_of_squashed(i, j) == line) {
                    counter++;
                }
            }
        }
        cout << counter << endl;
        counter = 0;
    }
    
    return 0;
}
