#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    if( s.size() < 6 || s.size() > 15 || ( s[0] >= '0' && s[0] <= '9' ) ) 
    {
    	cout << "Invalid username.";
    	return 0;
    }
    else for( int i = 0; i < s.size(); ++i ){
        if( s[i] >= '0' && s[i] <= '9' ) continue;
        else if( ( s[i] >= 'a' && s[i] <= 'z' ) || ( s[i] >= 'A' && s[i] <= 'Z' ) ) continue;
        else {
            cout << "Invalid username.";
            return 0;
        }
    }
    cout << "Valid username.";
}
