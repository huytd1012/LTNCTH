#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for( int i = 1; i <= n+1; ++i ){
        for( int j = -n; j <= n; ++j )
            if( abs(j) < i ) cout << "* ";
            else cout << ". ";
        cout << '\n';
    }
    for( int i = n; i >= 1; --i ){
        for( int j = -n; j <= n; ++j )
            if( abs(j) < i ) cout << "* ";
            else cout << ". ";
        cout << '\n';
    }
}
