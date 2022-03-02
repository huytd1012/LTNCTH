#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int d = 0;
    getline(cin,s);
    s = ' ' + s;
    for( int i = 1; i < s.size(); ++i )
        if( s[i] != ' ' && s[i-1] == ' ' ) d++;
    cout << d;
}
