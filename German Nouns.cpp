//https://dmoj.ca/problem/denoun
//2020
#include <iostream>
#include <string>
using namespace std;
int main() {
    int N, me, *ans, counter = 0;
    string line;
    cin >> N;
    cin.ignore();
    ans = new int[N];
    for (int i = 0; i < N; i++) {
        getline(cin, line);
        for (int j = 0; j < line.length(); j++) {
            me = (int)line[j];
            if (me > 64 && me < 91 ) {
                counter++;
            }
        }
        ans[i] = counter;
        counter = 0;
    }
    
    for (int i = 0; i < N; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}
