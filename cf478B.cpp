#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<unordered_map<string,string>> w(2);
    string a, b;
    for ( int i=0; i<m; i++ )
    {
        cin >> a >> b;
        w[0][a] = b;
        w[1][b] = b;
    }
    vector<string> s(n);
    for ( int i=0; i<n; i++ )
        cin >> s[i];
    for ( auto c : s )
    {
        string cur = c;
            if (w[0].find(cur)==w[0].end())
            {
                if (w[1][cur].size() <= cur.size())
                    cur = w[1][cur];
            }
            else
            {
                if (w[0][cur].size() < cur.size())
                    cur = w[0][cur];
            }
        cout << cur << " ";
    }

    return 0;
}