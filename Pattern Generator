//https://dmoj.ca/problem/ccc96s3
//2020
#include <bits/stdc++.h>
using namespace std;

void print_arr (vector<int> arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] ;
    }
    cout << endl;
}

int main() {
    int cases, *n, *k, counter;
    vector <int> arr;
    
    cin >> cases;
    n = new int[cases];
    k = new int[cases];
    
    for (int i = 0; i < cases; i++) {
        cin >> n[i] >> k[i];
    }
    
    for (int i = 0; i < cases; i++) {
        cout << "The bit patterns are" << endl;
        counter = 0;
        while (counter < k[i]) {
            arr.push_back(1);
            counter++;
        }
        while (counter < n[i]) {
            arr.push_back(0);
            counter++;
        }
        print_arr(arr, n[i]);
        while (prev_permutation(arr.begin(),arr.end()) == true) {
            print_arr(arr, n[i]);
        }
        cout << endl;
        arr.clear();
    }
    
    return 0;
}
