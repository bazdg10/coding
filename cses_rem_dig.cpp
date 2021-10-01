#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<ll> dp;

ll rem(ll x) {
    if (dp[x]==-1) {
        ll val = 1e9;
        ll g = x;
        while(g) {
            int r = g%10;
            g /= 10;
            if (r)
                val = min ( val, rem(x-r) + 1 );
        }
    dp[x] = val;
    }
return dp[x];
}

int main()
{
    int n;
    cin >> n;

    dp = vector<ll>(n+1, -1);
    dp[0] = 0;
    cout << rem(n);
    return 0;
}