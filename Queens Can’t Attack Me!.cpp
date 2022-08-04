//https://dmoj.ca/problem/hkccc15j3
#include <iostream>
using namespace std;

void re_initialize (int & newx, int & newy, int x, int y) {
    newx = x;
    newy = y;
}

int main() {
    bool **board;
    int queens, size, x, y, newx, newy, answer = 0;
    
    cin >> size >> queens;
    board = new bool *[size];
    for (int i = 0; i < size; i++)
        board[i] = new bool[size];
        
    for (int i = 0; i < queens; i++) {
        cin >> x >> y;
        x = x -1;
        y = size - y;
        for (int j = 0; j < size; j++) { //Cross
            board[y][j] = true;
            board[j][x] = true;
        }
        re_initialize (newx, newy, x, y); //12 - 3
        while (newx < size && newy > -1) {
            board[newy][newx] = true;
            newx++;
            newy--;
        }
        re_initialize (newx, newy, x, y); //3 - 6
        while (newx < size && newy < size) {
            board[newy][newx] = true;
            newx++;
            newy++;
        }
        re_initialize (newx, newy, x, y); //6-9
        while (newx > -1 && newy < size) {
            board[newy][newx] = true;
            newx--;
            newy++;
        }
        re_initialize (newx, newy, x, y); //9-12
        while (newx > -1 && newy > -1) {
            board[newy][newx] = true;
            newx--;
            newy--;
        }
    }
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (board[i][j] == false)
                answer++;
        }
    }
    cout << answer << endl;

    return 0;
}
