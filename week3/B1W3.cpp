#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000005],b[1000005];
    cin >> n;
    for( int i = 1; i <= n; ++i )
        cin >> a[i];
    for( int i = 1; i <= n; ++i ){
        cin >> b[i];
        if( b[i] != a[i] ) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
