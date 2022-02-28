#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double a[1005],s = 0,kq = 0;
    cin >> n;
    for( int i = 1; i <= n; ++i )
    {
        cin >> a[i];
        s += a[i];
    }
    s = double( s / double(n) );
    for( int i = 1; i <= n; ++i )
        kq += ( a[i] - s ) * ( a[i] - s );
    cout << fixed << setprecision(2) << kq / n;
}
