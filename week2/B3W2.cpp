#include<bits/stdc++.h>
using namespace std;
int main()
{
    int lowerBound,upperBound;
    cin >> lowerBound >> upperBound;
    int begin,end;
    if( sqrt(lowerBound) == trunc(sqrt(lowerBound)) ) begin = trunc(sqrt(lowerBound));
    else begin = trunc(sqrt(lowerBound)) + 1;
    end = trunc(sqrt(upperBound));
    for( int i = begin; i <= end; ++i )
        cout << i * i << ' ';
    return 0;
}
