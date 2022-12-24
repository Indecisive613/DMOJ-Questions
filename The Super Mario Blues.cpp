//https://dmoj.ca/problem/acmtryouts2a
//2021
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; 
    
    for (int k = 0; k < T; k++){
        int i, j, ans = 0;
        char random; 
        
        cin >> i >> random >> j;
        
        if(i > 4){
            ans += (8-i)*4 + 5-j;
        } else{
            if (i == 2 || i == 3){
                ans += (3-i)*4 + 11 -j;
            } else{ 
                if (i == 1){
                    if (j > 2) {
                        ans += 19-j;
                    } else{
                        ans += 9 - j;
                    }
                }
                else{ 
                    if (j > 2){
                        ans += 21-j;
                    } else{
                        ans += 7 - j;
                    }
                    
                }
                
                
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}
