//https://dmoj.ca/problem/binary
//2021
#include <iostream>
#include <string>

using namespace std;

int main() {
    int T, N;
    
    cin >> T;
    
    for (int i = 0; i < T; i++){
        string ans = "";
        cin >> N;
        
        if (N == 0) {
            cout << "0000" << endl;
        } else{
            while (N != 0){
                if (N%2 == 0){
                    ans = "0" + ans;
                } else{
                    ans = "1" + ans;
                }
            
                N /= 2;
            }
            
            while (ans.length()%4 != 0){
                ans = "0" + ans;
            }
            
            for (int j = 0; j < ans.length(); j = j + 4){
                cout << ans.substr(j, 4) << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
