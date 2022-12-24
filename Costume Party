//https://dmoj.ca/problem/dwite12c1p3
//2020
#include <iostream>
#include <string>
using namespace std;
int main() {
    string *name, *costume, answer[5];
    int N;
    
    for (int i = 0; i < 5; i++) {
        answer[i] = "";
        cin >> N;
        
        name = new string[N];
        costume = new string[N];
        
        for (int j = 0; j < N; j++) {
            cin >> name[j];
            cin >> costume[j];
            for (int k = 0; k < j; k++) {
                if (costume[j] == costume[k]) {
                    answer[i] = answer[i] + " " + name[j];
                    break;
                }
            }
        }
        
    }
    for (int i = 0; i < 5; i++) {
        if (answer[i] == "") cout << "SPOOKY" << endl;
        else cout << answer[i].substr(1, answer[i].length()-1) << endl;
    }

    return 0;
}
