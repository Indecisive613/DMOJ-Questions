//https://dmoj.ca/problem/graph1p2
//2021
#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	
	bool matrix[N][N];
	bool marked[N] = {0};
	int distance[N] = {0};
	
	for (int i = 0; i < N; i++){
	    for (int j = 0; j < N; j++){
	        cin >> matrix[i][j];
	    }
	}
	
	vector<int> queue;
	
	queue.push_back(1);
	distance[0] = 1;
	
	while (queue.size() > 0){
	    int current = queue[0];
	    queue.erase(queue.begin());
	    
	    if (marked[current-1] == 0){
	        marked[current-1] = true;
	        for (int i = 1; i <= N; i++){
	            if (matrix[current-1][i-1]){
	                if (distance[i-1] == 0){
	                    distance[i-1] = distance[current-1] + 1;
	                    queue.push_back(i);
	                }
	            }
	        }
	    }
	}
	
	cout << distance[N-1]-1 << endl;
	
	return 0;
}

