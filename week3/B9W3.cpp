#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int d = 0;
    while( s[d] == ' ' ) {
    	cout << s[d];
    	d++;
    }
    for( int i = d; i < s.size(); ++i )
    {
        if( s[i] == ' ' && s[i-1] == ' ' ) continue;
        cout << s[i];
    }
}
