#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void primo ( vector<ll>& v )
{
    for ( ll i=2; i<1e6; i++ )
    {
        bool f = true;
        for ( ll j : v )
        {
            if (j*j > i)
                break;
            if (i%j==0)
                {
                    f = false;
                    break;
                }
        }
        if (f)
            v.push_back(i);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll> primes;
    primo(primes);
    vector<ll> a(n);
    for ( int i=0; i<n; i++ )
        cin >> a[i];
    for ( int i=0; i<n; i++ )
    {
        ll f = floor(sqrt(a[i]));
        // cout << f << " ";
        auto it = lower_bound(primes.begin(), primes.end(), f);
        // cout << *it << " ";
        if (it==a.end() || (*it) * (*it) != a[i] )
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}