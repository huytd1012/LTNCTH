#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    if( a[0] == '-' ) cout << a.size()-1;
    else cout << a.size();
}
