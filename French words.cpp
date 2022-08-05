//https://dmoj.ca/problem/mwc15c5p3
//2019
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> s1, s2;
    int N, M, counter = 0, ans = 0;
    string use, dup = "-1";
    
    cin >> N >> M;
    
    for (int i = 0; i < N; i++) {
        cin >> use;
        if (dup != use) {
            s1.push_back(use);
        }
        dup = use;
    }
    
    for (int i = 0; i < M; i++) {
        cin >> use;
        if (dup != use) {
            s2.push_back(use);
        }
        dup = use;
    }
    
    if (s1.size() > s2.size()) {
        s1.swap(s2);
    }
    
    for (int i = 0; i < s1.size(); i++) {
        while (1) {
            if (s1[i].compare(s2[counter]) == 0) { 
                ans++;
                counter++;
                break;
            }
            if (s1[i].compare(s2[counter]) < 0 || counter > s2.size()-1) { 
                break;
            }
            counter++;
        }
    }
    
    cout << ans << endl;

    return 0;
}
