//https://dmoj.ca/problem/emojisearch
//2020
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s, f;
    getline (cin, s);
    
    while (s.find(":") != s.rfind(":")) {
        s = s.substr(s.find(":")+1);
        cout << s.substr(0, s.find(":")) << endl;
        s = s.substr(s.find(":")+1);
    }
    return 0;
}
