//https://dmoj.ca/problem/coci15c3p2
//2020
#include <iostream>
#include <ctime>
#include<cstdlib>
#include <string>
using namespace std;
int main() //esej
{
    int A, B, spaces, r;
    char letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i','j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    cin >> A >> B;
    
    if (A == B) {
        spaces = A;
    }
    else {
        spaces = B-1;
    }
    srand(time(0));
    
    for (int i = 0; i < spaces-1; i++) {
        r = rand()%15 +1;
        for (int j = 0; j < r; j++) {
            cout << letters[rand()%15];
        }
        cout << " ";
    }
    cout << "bye" << endl;

    return 0;
}
