#include <bits/stdc++.h>
#define ll long long
using namespace std;



int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    string s;
    for ( int i=0; i<n; i++ )
    {
        cin >> s;
        v[i] = s;
    }
    vector<vector<ll>> dp(n, vector<ll>(n, 0));
    int p = 1e9+7;
    if (v[n-1][n-1]!='*')
        dp[n-1][n-1] = 1;
    for ( int i=n-2; i>=0; i-- ) {
        if (v[i][n-1]!='*')
            dp[i][n-1] = dp[i+1][n-1];
        if (v[n-1][i]!='*')
           dp[n-1][i] = dp[n-1][i+1];
    }
    // int p=1e9+7;    
    for ( int i=n-2; i>=0; i-- )
        for ( int j=n-2; j>=0; j-- )
            if (v[i][j]!='*')
                dp[i][j] = (dp[i+1][j] + dp[i][j+1])%p;
    // for ( int i=0; i<n; i++ )
    // {
    //     for ( int j=0; j<n; j++ )
    //         cout << dp[i][j] << " ";
    //     cout << "\n";
    // }
    cout << dp[0][0];
    return 0;
}