//https://dmoj.ca/problem/coci07c5p2
//2019
#include <iostream> //May 16, 2020
#include <cmath>
using namespace std;

bool Check_prime (int b) {
	int divisors = 0;
	if (b > 2 && b%2 == 0) {
	    return false;
	}
	for (int i = 3; i <= sqrt(b); i = i+2) {
    	if (b%i == 0) {
        	return false;
    	}
	}
	return true;
}

int main () {
    long int N;
    cin >> N;
    if (Check_prime(N) == true) cout << N-1 << endl; //used to be a 0
    else {
        if (N%2== 0) cout << N/2 << endl;
        else {
            for (int i = 3; i < N-1; i = i+2) { 
                if (N % i == 0) {
                    cout << N-(N/i) << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
