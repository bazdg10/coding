#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int p = 1e9+7;
    int t;
    cin >> t;
    vector<long int> dp(200001);
    dp[0] = 1;
    dp[1] = 1;
    for ( long int i=2; i<=200000; i++ )
        dp[i] = (i*dp[i-1])%p;
    while(t--)
    {
        int n;
        cin >> n;
        cout << dp[2*n]/2 << "\n";
    }
    return 0;
}