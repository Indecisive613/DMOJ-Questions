//https://dmoj.ca/problem/mnyc16p1
//2019
#include <iostream>
using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;
    if (a > -1)
        cout << a%b << endl;
    else {
        a = a*-1;
        if (a%b==0) cout << "0" << endl;
        else cout << ((a/b)*b+b)-a << endl;
    }
    return 0;
}
