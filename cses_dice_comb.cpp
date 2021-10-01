#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        int p = 1e9+7;
        vector<ll> dp(n+1);
        dp[0] = 0;
        dp[1] = 1;
        for ( int i=2; i<=n; i++ )
        {
            for ( int j=1; i-j>0 && j<=6; j++ )
                dp[i] = (dp[i-j]+dp[i])%p;                    
            if (i<7)
                dp[i] = (dp[i]+1)%p;
        }
        cout << dp[n];
    }
    return 0;
}