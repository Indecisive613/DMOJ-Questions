//https://dmoj.ca/problem/anothersorting
//2019
#include <bits/stdc++.h>
using namespace std;
bool sortbysecond(const pair<int,int> &a, const pair<int,int> &b) { 
    if (a.second == b.second) {
        return (a.first > b.first);
    }
    return (a.second < b.second); 
} 

int main() {
    int N, *a;
    vector <pair<int, int>> num;
    
    cin >> N;
    a = new int[N];
    
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        num.push_back(make_pair(a[i], a[i]%10));
    }

    sort(num.begin(), num.end(), sortbysecond);
    
    for (int i = 0; i < N; i++) {
        cout << num[i].first << " ";
    }

    return 0;
}
