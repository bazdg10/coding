#include<bits/stdc++.h>
using namespace std;

bool dfs(int i, int j, vector<vector<char>>& m, int k, vector<vector<int>>& vis)
{
    int pi = i-1;
    int nj = j+1;
    int pj = j-1;
    int d = 0;
    while(pi>=0 && nj<m[0].size() && pj>=0)
    {
        if (m[pi][pj] == '*' && m[pi][nj]=='*')
            {
                vis[pi][nj] = 1;
                vis[pi][pj] = 1;
            }
        else
            break;
        pi--;
        pj--;
        nj++;
        d++;
    }
    if (d>=k)
        vis[i][j] = 2;
return d>=k;
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
        vector<vector<char>> mat(n, vector<char>(m));
        string s;
        for ( int i=0; i<n; i++ )
        {
            cin >> s;
            for ( int j=0; j<s.size(); j++ )
                mat[i][j] = s[j];
        }        
        vector<vector<int>> vis(n, vector<int>(m, 0));
        bool f = true;
        for ( int i=n-1; f && i>=0; i-- )
            {
                for ( int j=0; f && j<m; j++ )
                {
                    if (mat[i][j]=='*')       
                    {
                        f = dfs(i, j, mat, k, vis);
                        if (vis[i][j] && !f)
                            f = true;
                    }
                }
            } 
        if (f) cout << "YES\n";
        else cout << "NO\n";
    }   

    return 0;
}