#include<bits/stdc++.h>
using namespace std;


void dfs(int i, int j, int k, vector<vector<int>>& vis, vector<vector<char>>& m)
{
    int pi = i-1;
    int pj = j-1;
    int nj = j+1;
    int g = 0;
    while(pi>=0 && pj>=0 && nj<vis[0].size())
    {
        if (m[pi][pj]=='*' && m[pi][nj]=='*')
        {
            vis[pi][pj] = 1;
            vis[pi][nj] = 1;
        }
        else
            break;
        pj--; nj++;
        pi--; 
        g++;
    }
    if (g>=k)
        vis[i][j] = 2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) 
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<char>> v(n, vector<char>(m));
        vector<string> b(n);
        for (int i=0; i<n; i++)
        {
            cin >> b[i];
            for ( int j=0; j<m; j++ )
                v[i][j] = b[i][j];
        }
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for ( int i=n-1; i>=0; i-- )
            for ( int j=0; j<m; j++ )
                if (v[i][j]=='*')
                    dfs(i, j, k, vis, v);
        bool f = true;
        for ( int i=0; f && i<n; i++ )
            for ( int j=0; f && j<m; j++ )
                if (v[i][j]=='*')
                    f &= (vis[i][j]!=0);
        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}