//https://dmoj.ca/problem/inaho5
using namespace std;
int main() {
    int M;
    long long int *num;
    unsigned long long int total = 0;
    
    cin>> M;
    
    num = new long long int[M];
    
    for (int i = 0; i < M; i++) {
        cin>>num[i];
        num[i] = num[i]*(-1);
    }
    
    for (int i = 0; i < M; i++) {
        total = total + num[i];
    }
    
    if (total > 0) {
        cout << "-" << total;
    }
    
    else {
        cout << total;
    }

    return 0;
}
