//https://dmoj.ca/problem/tsoc16c2p3
//2021
#include <iostream>
#include <cmath>

using namespace std;

bool check_prime(int x){
    bool is_prime = true;
    
    for (int i = 2; i <= sqrt(x); i++){
        if (x%i == 0){
            is_prime = false;
            break;
        }
    }
    if (is_prime){
        return true;
    }
    return false;
}

int main() {
    int A, B, C, D;
    long sum = 0;
    
    cin >> A >> B >> C >> D;
    
    if (A == 2){ 
        int tempC = ceil((double)C/2)*2;
        for (int j = tempC; j <= D; j += 2){
            sum += j;
        }
        A = 3;
    } else{
        if (A%2 == 0){
            A++;
        }
    }
    
    for (int i = A; i <= B; i += 2){ 
        if (check_prime(i)){
            int tempC = ceil((double)C/i)*i;
            for (int j = tempC; j <= D; j += i){
                sum += j;
            }
            sum %= 2016420;
        }
    }
    cout << sum << endl;

    return 0;
}
