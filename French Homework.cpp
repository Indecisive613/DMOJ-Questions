//https://dmoj.ca/problem/dmopc14ce1p1
//2019
#include <iostream>
using namespace std;
int main() {
    string verb, subject;
    
    getline(cin, verb);
    getline(cin, subject);
    
    cout << verb << "-tu "; 
    if (subject[subject.length()-1] == 's') {
        cout << "les ";
    }
    else {
        if (subject[subject.length()-1] == 'e') {
            cout << "la ";
        }
        else {
            cout << "le ";
        }
    }
    cout << subject << " ?" << endl;

    return 0;
}
