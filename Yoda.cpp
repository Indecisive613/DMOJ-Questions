//https://dmoj.ca/problem/coci15c4p1
//2019
#include <string>
using namespace std;
int main() {
    string s1, s2, s3 = "", s4 = "";
    bool swap = false;
    int temp;
    cin >> s1 >> s2;
    if (s2.length() > s1.length()) {
        swap = true;
        s2.swap(s1);
    }
    for (int i = 0 ; i < s2.length(); i++) {
        if ((int)s1[s1.length()-1-i] >= (int)s2[s2.length()-1-i]) 
            s3 = s1[s1.length()-1-i] + s3;
        if ((int)s1[s1.length()-1-i] <= (int)s2[s2.length()-1-i])
            s4 = s2[s2.length()-1-i] + s4;
    }
    s3 = s1.substr(0,s1.length()-s2.length()) + s3;
    
    if (swap == true) s3.swap(s4);
    
    temp = s3.length();
    for (int i = 0; i < temp-1; i++) {
        if (s3[0] == '0') s3.erase(0,1);
        else break;
    }
    
    temp = s4.length();
    for (int i = 0; i < temp-1; i++) {
        if (s4[0] == '0') s4.erase(0,1);
        else break;
    }
    
    if (s3 != "")
        cout << s3 << endl;
    else
        cout << "YODA" << endl;
    if (s4 != "") 
        cout << s4 << endl;
    else 
        cout << "YODA" << endl;
}
