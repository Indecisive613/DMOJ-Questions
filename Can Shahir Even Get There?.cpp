//https://dmoj.ca/problem/vmss7wc16c3p2
//2021
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, A, B;
    vector<int> *house; //each house and the connected houses
    bool *marked;
    int con, nect; //variables for input
    vector<int> queue;
    int current; 
    bool success = false; 
    
    cin >> N >> M >> A >> B;
    
    house = new vector<int>[N];
    marked = new bool[N];
    
    for (int i = 0; i < M; i++){ //creates the connectivity array of vectors
        cin >> con >> nect;
        house[con-1].push_back(nect);
        house[nect-1].push_back(con);
    }
    
    queue.push_back(A);
    
    while(queue.size() > 0){
        current = queue[0];
        
        if(current == B){
            cout <<"GO SHAHIR!"<< endl;
            success = true;
            break;
        }
        
        queue.erase(queue.begin());
        
        if(marked[current-1] == false){
            marked[current-1] = true;
            for (int j = 0; j < house[current-1].size(); j++){
                queue.push_back(house[current-1][j]);
            }
        }
    }
    
    if (!success){
        cout << "NO SHAHIR!" << endl;
    }
    
    return 0;
}
