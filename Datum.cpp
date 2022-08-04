//https://dmoj.ca/problem/coci08c4p2
//2019
#include <iostream>
using namespace std;
int main() {
    string day_of_week[7] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"}; 
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month, day;
    
    cin >> day >> month;
    
    for (int i = 0; i < month-1; i++) {
        day = day + days[i];
    }
    day = day%7 -1;
    if (day == -1) day = 6;
    cout << day_of_week[day] << endl;

    return 0;
}
