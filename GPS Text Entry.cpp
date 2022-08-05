//https://dmoj.ca/problem/ccc08j3
//2020
#include <bits/stdc++.h>
using namespace std;
int main() {
    int grid[5][6] = {{65, 66, 67, 68, 69, 70}, {71, 72, 73, 74, 75, 76}, {77, 78, 79, 80, 81, 82}, {83, 84, 85, 86, 87, 88}, {89, 90, 32, 45, 46, -1}};
    int current_pos[2] = {0, 0};
    bool done;
    int goal, goalx, goaly;
    int moves = 0;
    string input;
    
    getline (cin, input);
    
    while (input.length() > 0) {
        done = false;
        goal = (int)input[0];
        
        for (int a = 0; a < 5; a++) {
            for (int b = 0; b < 6; b++) {
                if (grid[a][b] == goal) {
                    done = true;
                    goalx = a;
                    goaly = b;
                    break;
                }
            }
            if (done == true) break;
        }
        moves = moves + abs(current_pos[0] - goalx);
        moves = moves + abs(current_pos[1] - goaly);
        current_pos[0] = goalx;
        current_pos[1] = goaly;
        
        input.erase(0, 1);
    }
    moves = moves + abs(current_pos[0] - 4) + abs(current_pos[1] - 5);
    
    cout << moves << endl;

    return 0;
}
