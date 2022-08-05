//https://dmoj.ca/problem/ccc09j4
//2020
#include <bits/stdc++.h>
using namespace std;
int main(){
    string message[7] = {"WELCOME",  "TO",  "CCC",  "GOOD",  "LUCK",  "TODAY"};
    string fake ={"xxxxxxo.xo.xxo.xxxo.xxxo.xxxxo"};
    int letter[6] = {7, 2, 3, 4, 4, 5};
    int position = 0, c, words, var, current_word = 0, spaces, checker, prev = 0;
    int *dots_per_space;
    int w;
    
    cin >> w;
    
    while (position<30){
        c = 0;
        words = 0;
        while (c < w && c+position < 30) {
            if (fake[c+position] == 'o') {
                words++;
            }
            c++;
        }
        position = position+c;
        if (fake[position] == '.') position++;
        
        var = 0;
        for (int i = 0; i < words; i++) {
            var = var + letter[current_word];
            current_word++;
        }
        
        spaces = words-1;
        if (spaces == 0) spaces = 1; 
        dots_per_space = new int[spaces];
        
        for (int init = 0; init < spaces; init++) { 
            dots_per_space[init] = 0; 
        }
        
        checker = 0;
        for (int i = 0; i < w-var; i++) {
            dots_per_space[checker]++;
            checker++;
            if (checker == spaces) checker = 0; 
        }
        
        for (int n = 0; n < words; n++) {
            cout << message[0+prev];
            prev++;
            if (n < spaces) { 
                for (int j = 0; j < dots_per_space[n]; j++) {
                    cout << ".";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
