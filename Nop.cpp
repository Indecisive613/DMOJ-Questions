//https://dmoj.ca/problem/crci08p1
//2019
#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    int NOPs = 0, counter = 0;
    
    cin >> input;
    for (int i = 0; i < input.length(); i++) {
        if ((int)input[i] < 91) { 
            while (counter%4 != 0) {
                counter++;
                NOPs++;
            }
        }
        counter++;
    }
    cout << NOPs << endl;

    return 0;
}
