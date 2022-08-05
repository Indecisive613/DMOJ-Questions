//https://dmoj.ca/problem/dmopc15c5p1
//2019
#include <iostream>
using namespace std;

int main()
{
    long int A, B, max, temp;
    unsigned long int X;
    
    cin >> A >> B >> X;
    if (A<B){
        temp = A;
        A = B;
        B = temp;
    }
    max = A;
    do {
        if (max % A == 0 && max % B == 0) {
            break;
        }
        else
            max = max + A;
    } while (true);
    if (A>1)
        cout << X/max+1 << endl;
    else
        cout << X/max << endl;
    return 0;
}
