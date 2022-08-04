//https://dmoj.ca/problem/mizxyl
//2019
#include <bits/stdc++.h>
using namespace std;
int main() {
    string original;
    vector<int> number;
    unsigned long long int product;
    cin >> original;
    
    for (int i = 0; i < original.length(); i++) {
        if (original[i] != 'x') {
            number.push_back(original[i]-48);
        }
    }
    
    sort(number.begin(), number.end());
    
    for (int i = 0; i < number.size(); i++) {
        cout << number[i];
        if (i != number.size()-1) cout << "x";
    }
    cout << endl;
    
    product = number[0];
    
    for (int i = 1; i < number.size(); i++) {
        product = product*number[i];
    }
    cout << product;

    return 0;
}
