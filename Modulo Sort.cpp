//https://dmoj.ca/problem/modulosort
//2019
#include<bits/stdc++.h> 
using namespace std; 
bool sortbysecond(const pair<int,int> &a, const pair<int,int> &b) { 
    if (a.second == b.second) {
        return (a.first < b.first);
    }
    return (a.second < b.second); 
} 

using namespace std;
int main () {
  vector < pair < int, int > > lis;
  int N, mod_by, *a1, *a2;
  cin >> N;
  cin >> mod_by;
  a1 = new int[N];
  a2 = new int[N];
  for (int i = 0; i < N; i++) {
      cin >> a1[i];
      a2[i] = a1[i] % mod_by;
      lis.push_back (make_pair (a1[i], a2[i]));
    }
    
    sort(lis.begin(), lis.end(), sortbysecond); 

  for (int i = 0; i < N; i++) {
      cout << lis[i].first << " ";
  }
  return 0;
}
