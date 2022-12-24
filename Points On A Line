//https://dmoj.ca/problem/dwite06c5p1
//2021
#include <bits/stdc++.h>
using namespace std;

void reduce (int &a, int &b){
    int lowest;
    
    if (b < 0){
        a = -a;
        b = -b;
    }

    if (abs(a) > abs(b))
        lowest = abs(b);
    else
        lowest = abs(a);
 
    for (int j = lowest; j > 1; j--){
        if (b%j == 0 && a%j == 0){
            b/= j;
            a/= j;
        }
    }
}

int main() {
    int N;
    int *x, *y;
    
    cin >> N;
    x = new int[N];
    y = new int[N];
    
    for (int i = 0; i < N; i++){
        cin >> x[i] >> y[i];
    }
    
    
    for (int i = 0; i < 5; i++){
        int c1x, c1y, c2x, c2y, targetN, targetD, total = 0; 
        cin >> c1x >> c1y >> c2x >> c2y;
        
        targetN = c2y - c1y;
        targetD = c2x - c1x;
        
        if (targetD == 0 ){
            if (targetN == 0){//same
                for (int j = 0; j < N; j++){
                    if (x[j] == c1x){
                        if (y[j] == c1y){
                            total++;
                        }
                    }
                }
            } else{//vertical
                for (int j = 0; j < N; j++){
                    if (c1x == x[j]){
                        total++;
                    }
                }
            }
        } else{
            if (targetN == 0){ //horizontal
                for (int j = 0; j < N; j++){
                    if (c1y == y[j]){
                        total++;
                    }
                }
            }
            else{
                reduce(targetN, targetD);
                
                for (int j = 0; j < N; j++){
                    int num = c2y - y[j]; 
                    int den = c2x - x[j];
                    
                    reduce(num, den);
                    
                    if (num == targetN && den == targetD){
                        total++;
                    }
                }
            }
        }
        
        cout << total << endl;
    }
    
    return 0;
}
