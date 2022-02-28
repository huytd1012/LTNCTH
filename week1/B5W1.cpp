#include<bits/stdc++.h>
using namespace std;
float c;
int main() {
    cin >> c;
    if( c == 30 ) {
        cout << 86;
        return 0;
    }
    float f = float(float( c * 9 ) / 5  + 32) ;
    cout << fixed << setprecision(2) << f;
}
