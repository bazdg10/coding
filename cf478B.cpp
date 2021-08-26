#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin >> n >> m;
    if (m==1)
        {
            ll v = (n*(n-1))/2;
            cout << v << " " << v;
        }
    else
    {
        ll mv = (n-(m-1));
        ll maxv = (mv*(mv-1))/2;
        ll each = n/m;
        ll minv = ((each*(each-1))/2)*(m-1);
        ll last = n/m + n%m;
        minv += (last*(last-1))/2;
        cout << minv << " " << maxv;
    }
    return 0;
}