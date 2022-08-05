//https://dmoj.ca/problem/coci09c3p1
//2020
#include <iostream>
using namespace std;
int
main ()
{
  int A, B, nA = 0, nB = 0;
  cin >> A >> B;

  nA = nA + A / 100 + (A / 10 % 10) * 10 + A % 10 * 100;
  nB = nB + B / 100 + (B / 10 % 10) * 10 + B % 10 * 100;

  if (nA> nB) {
      cout << nA << endl;
  }
  else {
      cout << nB << endl;
  }

  return 0;
}
