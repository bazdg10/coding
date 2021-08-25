void dfs( int i, int j, vector<vector<int>>& g, string& s, vector<string>& all ) {
    if (i==g.size()-1 && j==g[0].size()-1)
        {
            all.push_back(s);
            return;
        }
    if ( i<0 || j<0 || i==g.size() || j==g[0].size() || g[i][j]==0)
        return;
    g[i][j] = 0;
    
    s += 'D';
    dfs(i+1, j, g, s, all);
    s.pop_back();
    s += 'L';
    dfs(i, j-1, g, s, all);
    s.pop_back();
    s += 'R';
    dfs(i, j+1, g, s, all);
    s.pop_back();
    s += 'U';
    dfs(i-1, j, g, s, all);
    s.pop_back();
    g[i][j] = 1;
}

 vector<string> findPath(vector<vector<int>> &m, int n) {
        if (!m[0][0] || !m.back().back())
            return {};
        string g = "";
        vector<string> all;
        dfs(0, 0, m, g, all);
    return all;
}