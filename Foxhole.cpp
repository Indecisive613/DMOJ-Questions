//https://dmoj.ca/problem/acmtryouts1c
//2021
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; //# of scenarios
    int H, W, N; //height, width and # of actions 
    
    cin >> T;
    
    int collectedTreasure[T] = {0};
    
    for (int scenario = 0; scenario < T; scenario++) {
        cin >> H >> W >> N;
        
        
        char **ground;
        ground = new char*[H+1];
    
        for (int i = 0; i < H+1; i++){
            ground[i] = new char[W];
        }
        
        
        for (int i = 0; i < W; i++){
            ground[0][i] = 'E';
        }
    
        for (int i = 1; i < H+1; i++){
            for (int j = 0; j < W; j++){
                cin >> ground[i][j];
            }
        }
        
        int prevFoxPosX = 0; //previous position
        int prevFoxPosY = 0; //previous position
        int foxPosX = 0; //up and down
        int foxPosY = 0; //left and right
        
        for (int i = 0; i < N; i++){ //for each action
            char action;
            
            cin >> action;
            
            switch (action){
                case 'L':
                    foxPosY--;
                    if (foxPosY < 0){
                        foxPosY++; //the same as reset
                    }
                    break;
                case 'R':
                    foxPosY++;
                    if (foxPosY == W){
                        foxPosY--;
                    }
                    break;
                case 'D':
                    foxPosX++;
                    if (foxPosX == H+1){
                        foxPosX--;
                    }
                    break;
            }
            
            if (ground[foxPosX][foxPosY] == 'S'){ //backtrack...
                foxPosX = prevFoxPosX;
                foxPosY = prevFoxPosY;
            } else{
                if (ground[foxPosX][foxPosY] == 'T'){
                    collectedTreasure[scenario]++;
                    ground[foxPosX][foxPosY] = 'E';
                }
            }
            
            while(foxPosX <= H-1){ //empty
                if(ground[foxPosX+1][foxPosY] == 'E'){
                    foxPosX++;
                }
                else{
                    break;
                }
            }
            
            prevFoxPosY = foxPosY; //prep
            prevFoxPosX = foxPosX;
        }
        
    }
    
    for (int i = 0; i < T; i++){
        cout << collectedTreasure[i] << endl;
    }
    
    return 0;
}
