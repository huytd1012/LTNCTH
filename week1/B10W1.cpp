#include<bits/stdc++.h>
using namespace std;
int day, month, year;
int main() {
    cin >> day >> month >> year;
    int y0 = year - (14 - month) / 12;
    int x = y0 + y0/4 - y0/100 + y0/400;
    int m0 = month + 12 * ((14 - month)/12) - 2;
    int d = (day + x + 31 * m0/12) % 7;
    const int da = d;
    switch(da)
    {
        case 0:
            cout << "sun";
            break;
        case 1:
            cout << "mon";
            break;
        case 2:
            cout << "tues";
            break;
        case 3:
            cout << "wednes";
            break;
        case 4:
            cout << "thurs";
            break;
        case 5:
            cout << "fri";
            break;
        case 6:
            cout << "sat";
            break;
    }
    return 0;
}
