//https://dmoj.ca/problem/halloween14p1
//2019
#include <iostream>
using namespace std;
int main() {
    long int girls, group_size, dif;
    cin >> girls >> group_size;
    dif = girls%group_size;
    
    if (dif == 0) {
        cout << dif;
    }
    else {
        if (dif > group_size/2) {
            cout << group_size-dif;
        }
        else {
            if (group_size > girls) 
                cout << group_size - girls;
            else
                cout << dif;
        }
    }

    return 0;
}
