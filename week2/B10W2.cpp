#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double a[1005],b[1005],s = 0;
    for( int i = 1; i <= n; ++i )
        cin >> a[i];
    for( int i = 1; i <= n; ++i )
        cin >> b[i];
    for( int i = 1; i <= n; ++i )
        s += a[i] * b[i];
    cout << fixed << setprecision(2) << s;
}
