//https://dmoj.ca/problem/a4b1
//2020
#include <iostream>
using namespace std;
int main() {
    int N, *arr, temp;
    cin >> N;
    
    arr = new int[N];
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for (int i = 0; i < N; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
