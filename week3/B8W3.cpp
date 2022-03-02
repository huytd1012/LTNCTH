#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for( int i = 0; i < s.size(); ++i )
    {
        if( s.substr(i,4) != "Zues" ) cout << s[i];
        else {
            cout << "Zeus";
            i += 3;
        }
    }
}
