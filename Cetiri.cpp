//https://dmoj.ca/problem/coci07c3p1
//2019
#include <iostream>
using namespace std;
int main() {
    int num[3]; //negatives
    int temp;
    cin >> num[0] >> num[1] >> num[2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (num[j] > num[j+1]) {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    if (num[1]-num[0] == num[2] - num[1]) {
        cout << num[2] + num[2] - num[1] << endl;
    }
    else {
        if (num[1]-num[0] > num[2] - num[1]) {
            cout << num[0] + num[2] - num[1];
        }
        else {
            cout << num[1] + num[1] - num[0];
        }
    }
    return 0;
}

