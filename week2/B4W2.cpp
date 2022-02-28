#include<bits/stdc++.h>
using namespace std;
int main()
{
    int total,totallegs;
    string check = "invalid";
    cin >> total >> totallegs;
    for( int i = 0; i <= totallegs / 2; ++i )
        if( i * 2 + (total - i ) * 4 == totallegs ){
            cout << "chicken = " << i << ", dog = " << total - i;
            check = "";
        }
    cout << check;
}
