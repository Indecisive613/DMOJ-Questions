//https://dmoj.ca/problem/dmopc14c7p4
//2020
#include <iostream>
using namespace std;
int main() {
    unsigned long long int N;
    cin >> N;
    
    unsigned long long int answer = 0; 
    unsigned long long int sum = 0; //Gives back the last number in the current row
    long long int counter = 0; //shows how many numbers are in the current row
    long long int add_me = 1;
    
    while (sum < N) {
        sum = sum + add_me;
        counter++;
        add_me = add_me + 1;
    }
    
    for (int i = 0; i < counter; i++) {
        answer = answer + sum;
        sum--;
    }
    
    cout << answer << endl;
    return 0;
}
