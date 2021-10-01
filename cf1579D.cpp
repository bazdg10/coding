#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> dfs(int i, int j, vector<vector<char>>& m)
{
    vector<pair<int,int>> res;
    res.push_back({i, j});
    int di = i-1;
    int lj = j-1;
    int rj = j+1;
    while(di>=0 && lj>=0 && rj<m[0].size() && m[di][lj] == '*' && m[di][rj]=='*')
    {
        res.push_back({di, lj});
        res.push_back({di, rj});
        di--;
        lj--;
        rj++;
    }
return res;
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
        vector<vector<char>> init(n, vector<char>(m));
        vector<vector<char>> fin(n, vector<char>(m, '.'));
        string s;
        for ( int i=0; i<n; i++ )
            {
                cin >> s;
                for ( int j=0; j<m; j++ )   
                    init[i][j] = s[j];
            }
        for ( int i=0; i<n; i++ )
            {
                for ( int j=0; j<m; j++ )
                {
                    if (init[i][j]!='*')    continue;
                    vector<pair<int,int>> mark = dfs(i, j, init);
                    if (mark.size() >= 2*k + 1)
                    {
                        for ( auto p : mark )
                        {
                            fin[p.first][p.second] = '*';
                        }
                    }                    
                }
            }
        if (fin==init)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}