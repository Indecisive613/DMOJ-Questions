//https://dmoj.ca/problem/bts16p1
//2020
#include <bits/stdc++.h>
using namespace std;
int main() {
    string essay;
    int cap_count = 0, lower_count = 0;
    
    getline(cin, essay);
    for (int i = 0; i < essay.length(); i++) {
        if (essay[i] == ' ') {
        }
        else {
            if ((int)essay[i] < 91) cap_count++;
            else lower_count++;
        }
    }
    
    if (cap_count == lower_count) {
        cout << essay;
    }
    else {
        if (cap_count > lower_count) {
            for (int i = 0; i < essay.length(); i++) {
                if (essay[i] > 91 && essay[i] != ' ') essay[i] = essay[i] - 32;
                cout << essay[i];
            }
        }
        else {
            for (int i = 0; i < essay.length(); i++) {
                if (essay[i] < 91 && essay[i] != ' ') essay[i] = essay[i] + 32;
                cout << essay[i];
            }
        }
    }
    cout << endl;

    return 0;
}
