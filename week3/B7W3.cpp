#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int alpha = 0,num = 0,sym = 0;
    getline(cin,s);
    for( int i = 0; i < s.size(); ++i ){
        if( s[i] >= '0' && s[i] <= '9' ) num++;
        else if( ( s[i] >= 'a' && s[i] <= 'z' ) || ( s[i] >= 'A' && s[i] <= 'Z' ) ) alpha++;
        else sym++;
    }
    cout << alpha << ' ' << num << ' ' << sym;
}
