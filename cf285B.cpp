#include<bits/stdc++.h>
using namespace std;

int dfs(int i, int des, vector<int>& dp, vector<int>& vis , int p[])
{
    if (dp[i]==-1)
    {
        if (vis[i])
            return 1e9;
        vis[i] = 1;
            dp[i] = 1 + dfs(p[i], des, dp, vis, p);
    }
return dp[i];
}

int main()
{
    int n, s, t;
    cin >> n >> s >> t;
    int p[n];
    for ( int i=0; i<n; i++ )
        {
            cin >> p[i];
            p[i]--;
        }
    s--;
    t--;
    vector<int> dp(n,-1);
    vector<int> vis(n, 0);
    dp[t]=0;
    int g = dfs(s, t, dp, vis, p);
    // for ( int k : dp )
        // cout << k << " "; cout << "\n";
    if (g>=1e9)
        g = -1;
    cout << g;
    return 0;
}