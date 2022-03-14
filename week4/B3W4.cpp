void printArrow(int n, bool left)
{
    if( left) {
        for( int i = 1; i <= n; ++i ){
            for( int j = 1; j <= n-i; ++j )
                cout << ' ';
            for( int j = i; j <= n; ++j )
                cout << '*';
            cout << '\n';
        }
        for( int i = n-1; i >= 1; --i ){
            for( int j = n-i; j >= 1 ; --j )
                cout << ' ';
            for( int j = i; j <= n; ++j )
                cout << '*';
            cout << '\n';
        }
    }
    else {
        for( int i = 1; i <= n; ++i ){
            for( int j = 1; j <= 2*(i-1); ++j )
                cout << ' ';
            for( int j = i; j <= n; ++j )
                cout << '*';
            cout << '\n';
        }
        for( int i = n-1; i >= 1; --i ){
            for( int j = 2*(i-1); j >= 1 ; --j )
                cout << ' ';
            for( int j = i; j <= n; ++j )
                cout << '*';
            cout << '\n';
        }
    }
}
