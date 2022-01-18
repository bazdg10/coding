#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll power(ll a, ll b)
{
    if (b==0)
        return 1;
    ll res = power(a, b/2);
    ll r = res*res;
    if (b%2)
        r *= a;
    return r;
}

ll powmod(ll a, ll b, ll m) 
{
    a = a%m;
    if (b==0)
        return a;
    ll r = powmod(a, b/2, m);
    ll res = (r*r)%m;
    if (b%2)
        res = (res*a)%m;
    return res;
}
int main()
{

    ll a, b;
    cin >> a >> b;
    // a^b
    ll m = 1e9+7;
    cout << power(a, b);
    cout << "\n" << powmod(a, b, m);
    return 0;
}