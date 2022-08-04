//https://dmoj.ca/problem/greedy
//2020
#include<bits/stdc++.h> 
using namespace std; 
int main() {
    int N, a, b;//num, goal
    long long int M;
    long long int counter = 0;
    long long int money = 0;
    vector < pair<int,int> > factory;
    cin>> N>>M;
    
    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        factory.push_back(make_pair(a,b));
    }
    
    sort(factory.begin(), factory.end()); 

    for (int i = 0; counter < M; i++) {
        if (counter + factory[i].second <= M) {
            counter = counter+factory[i].second;
            money = money + factory[i].first*factory[i].second;
        }
        else{
            money = money + (M-counter)*factory[i].first;
            counter = M;
        }
    }
    cout << money << endl;
}
