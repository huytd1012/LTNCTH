#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin >> x;
    double sum = 1, oldsum = 0,gt = 1,mu = 1;
    double t = 1;
    while( (sum - oldsum) * 1000 > 1)
    {
        oldsum = sum;
        gt *= double(t);
        mu *= double(x);
        t += double(1);
        sum += double(mu/double(gt));
    }
    cout << fixed << setprecision(4) << sum;
}
