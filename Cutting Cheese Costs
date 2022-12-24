//https://dmoj.ca/problem/acc5p3
//2021
#include<bits/stdc++.h>
using namespace std;

int main() {
    int N = 1, K; //N is blocks of cheese, K is the number for coupons
    cin >> N >> K;
    int arr[N];
    long cost = 0;
    
    for (int i = 0; i < N; i++){
        int x, y;
        cin >> x >> y;
        arr[i] = x - y; //amount saved
        cost += x; //add up all the non discounted prices
    }
    
    sort(arr, arr + N); //sorts amounts saved
    
    for (int i = N-1; i > N-K-1; i--){ //subtract the biggest savings
        cost -= arr[i];
    }
    
    cout << cost << endl;
}
