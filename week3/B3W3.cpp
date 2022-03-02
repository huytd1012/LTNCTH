#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000005];
    cin >> n;
    for( int i = 1; i <= n; ++i )
        cin >> a[i];
    n = unique( a + 1, a + n + 1 ) - a - 1;
    for( int i = 1; i <= n; ++i )
        cout << a[i] << ' ';
    return 0;
}
