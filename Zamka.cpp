//https://dmoj.ca/problem/coci15c5p1
//2019
  #include <iostream>
using namespace std;
int main() {
    int L, D, X, sum, temp;
    cin >> L >> D >> X;
    
    for (int i = L; i <= D; i++) {
        sum = 0;
        temp = i;
        while (temp > 9) {
            sum = sum + temp%10;
            temp = temp/10;
        }
        sum = sum + temp;
        if (sum == X) {
            cout << i << endl;
            break;
        }
    }
    
    for (int i = D; i >= L; i--) {
        sum = 0;
        temp = i;
        while (temp > 9) {
            sum = sum + temp%10;
            temp = temp/10;
        }
        sum = sum + temp;
        if (sum == X) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
