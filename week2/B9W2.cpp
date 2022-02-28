#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double a[1005];
    for( int i = 1; i <= n; ++i )
        cin >> a[i];
    for( int i = n; i >= 1; --i )
        cout << fixed << setprecision(2) << a[i] << ' ';
}
