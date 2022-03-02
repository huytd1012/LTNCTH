#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double a[1000005];
    cin >> n;
    for( int i = 1; i <= n+1; ++i )
        cin >> a[i];
    n++;
    sort( a + 1 , a + n + 1);
    for( int i = 1; i <= n; ++i )
        cout << fixed << setprecision(2) << a[i] << ' ';
    return 0;
}
