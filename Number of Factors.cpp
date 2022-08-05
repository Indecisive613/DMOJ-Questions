//https://dmoj.ca/problem/dwite07c5p2
//2019
#include <iostream>
using namespace std;
int main() {
    int primes[5] = {2, 3, 5, 7, 11};
    int num, num0, counter;
    int ans[5] = {0};
    
    for (int i = 0; i < 5; i++) {
        counter = 0;
        cin >> num0;
        num = num0;
        while (counter < 5) {
            if (num%primes[counter] == 0 && num0!=primes[counter]) {
                ans[i]++;
                num = num/primes[counter];
            }
            else {
                counter++;
            }
        }
    }
    
    for (int i = 0; i < 5; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
