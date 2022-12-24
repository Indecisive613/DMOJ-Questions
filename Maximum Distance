//https://dmoj.ca/problem/ccc96s5
//2020
#include <iostream>
using namespace std;
int main() {
    int *first, *second, *biggest_gap;
    int cases, size, gap;
    
    cin >> cases;
    biggest_gap = new int[cases];
    
    for (int i = 0; i < cases; i++) {
        biggest_gap[i] = 0;
        
        cin >> size;
        first = new int[size];
        second = new int[size];
        
        for (int j = 0; j < size; j++) { 
            cin >> first[j];
        }
        for (int j = 0; j < size; j++) {
            cin >> second[j];
        }
        
        for (int j = 0; j < size; j++) {
            for (int k = size-1; k > j; k--) {
                if (first[j] == second[k]) {
                    gap = k-j;
                    if (gap > biggest_gap[i]) biggest_gap[i] = gap;
                }
            }
        }
        
    }
    
    for (int i = 0; i < cases; i++) {
        cout << "The maximum distance is " << biggest_gap[i] << endl;
    }
    

    return 0;
}
