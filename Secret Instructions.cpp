//https://dmoj.ca/problem/ccc21j3
//2021
#include <iostream>
using namespace std;

int main() {
    int instruction = -1;
    string prev = "none";
    
    while (true){
        cin >> instruction;
        
        if (instruction == 99999){
            break;
        }
        
        if (instruction/1000 == 0){
            cout << prev << " ";
        } else{
            if ((instruction/10000 + instruction/1000) % 2 == 0){
                cout << "right ";
                prev = "right";
            } else{
                cout << "left ";
                prev = "left";
            }
        }
        
        cout << instruction%1000 << endl;
        
    }
}
