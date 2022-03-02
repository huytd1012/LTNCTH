#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000006];
    cin >> n;
    for( int i = 1; i <= n; ++i )
        cin >> a[i];
    for( int i = 1; i <= n/2; ++i )
        if( a[i] != a[n-i+1] ) {
            cout << "Asymmetric array.";
            return 0;
        }
    cout << "Symmetric array.";
}
