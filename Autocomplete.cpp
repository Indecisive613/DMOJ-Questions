//https://dmoj.ca/problem/dwite09c4p4
//2020
#include <bits/stdc++.h>
using namespace std;
int find_digits (int x) {
    int ans = 1;
    while (x > 9) {
        ans++;
        x = x/10;
    }
    return ans;
}

int main() {
    vector <pair <int, int>> goal;
    int occurences[5] = {0};
    int a;
    int digits;
    
    for (int i = 0; i < 5; i++) { 
        cin >> a;
        goal.push_back(make_pair(a, find_digits(a)));
    }
    
    for (int i = 0; i < 50000; i++) { 
        int num = i;
        int sum_of_digits = num%10;
        
        while (num > 9) {
            num = num/10;
            sum_of_digits = sum_of_digits + (num%10);
        }
        digits = find_digits(i*sum_of_digits%99999);
        
        for (int j = 0; j < 5; j++) { 
                if ((int)((i*sum_of_digits%99999)/pow(10,digits-goal[j].second)) == goal[j].first) { 
                    occurences[j]++;
                }
        }
    }
    
    for (int i = 0; i < 5; i++) {
        cout << occurences[i] << endl;
    }

    return 0;
}
