//https://dmoj.ca/problem/dwite09c2p4
//2021
#include <bits/stdc++.h> 
using namespace std;

int main() {
    
    for (int T = 0; T < 5; T++){
        vector<int> queue;
        vector<int> connected[99]; //creates memory locations for all 99 possible locations
        bool marked[99] = {0};
        int a, b, N, current, depth;
        int distance[99] = {0};
        int ans = 0;
        
        cin >> N;
        
        for (int i = 0; i < N; i++){ //fills the connectivity chart
            cin >> a >> b;
            connected[a-1].push_back(b);
            connected[b-1].push_back(a);
        }
        
        queue.push_back(1);
        distance[0] = 0;
        
        while(queue.size() > 0){ //determines the distance for all nodes
            current = queue[0];
            queue.erase(queue.begin());
            
            if(marked[current-1] == false){
                marked[current-1] = true;
                int tempNum = connected[current-1].size();
                for (int j = 0; j < tempNum; j++){
                    if (distance[connected[current-1][j]-1] == 0){
                        queue.push_back(connected[current-1][j]);
                        depth = distance[current-1]+1;
                        distance[connected[current-1][j]-1] = depth;
                    }
                }
            }
        }
        
        vector<int> level[depth];
        
        for (int i = 0; i < 99; i++){ //adds each node to their specific "depth" vector
            if (distance[i] != 0){
                level[distance[i]-1].push_back(i+1);
            }
        }
        
        for (int i = 0; i < depth; i++){ //check to see if there are connections between nodes on the same "depth"
            for (int j = 0; j < level[i].size(); j++){
                for (int k = j+1; k < level[i].size(); k++){
                    for (int m = 0; m < connected[level[i][j]-1].size(); m++){ //searching the connections of level[i][j] for level[i][k]
                        if (connected[level[i][j]-1][m] == level[i][k]){
                            ans++;
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}
