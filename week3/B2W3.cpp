#include<bits/stdc++.h>
using namespace std;
bool cmp( double a, double b)
{
	return ( a > b );
}
int main()
{
    int n;
    double a[1000005];
    cin >> n;
    for( int i = 1; i <= n; ++i )
        cin >> a[i];
    sort( a + 1 , a + n + 1 ,cmp );
    for( int i = 1; i <= n; ++i )
        cout << fixed << setprecision(2) << a[i] << ' ';
    return 0;
}
