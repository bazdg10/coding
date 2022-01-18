#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> b(m, vector<int>(n));
    for ( int i=0; i<m; i++ )
        for ( int j=0; j<n; j++ )
            cin >> b[i][j];
    unordered_set<int> rows, cols;
    for ( int i=0; i<m; i++ )
        {
            for ( int j=0; j<n; j++ )
            {
                if (b[i][j]==0)
                {
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
    vector<vector<int>> a(m, vector<int>(n, 1));
    for ( int i : rows )
        for ( int j=0; j<n; j++ )
            a[i][j] = 0;
    for ( int j : cols )
        for ( int i=0; i<m; i++ )
            a[i][j] = 0;
    // for ( auto v : a )
    // {
    //     for ( int k :  v )
    //         cout << k << " ";
    //     cout << "\n";
    // }

    rows.clear();
    cols.clear();
    
    for ( int i=0; i<m; i++ )
    {
        for ( int j=0; j<n; j++ )
        {
            if (a[i][j]==1)
            {
                rows.insert(i);
                cols.insert(j);
                // cout << i << " " << j << "\n";
            }
        }
    }
    bool f = true;
    for ( int i=0; i<m && f; i++ )
        for ( int j=0; j<n && f; j++ )
                if (b[i][j])
                    f = (rows.find(i) != rows.end()) || (cols.find(j) != cols.end());
        
    
    // bool f = true;
    // for ( int i=0; f && i<m; i++ )
    //     for ( int j=0; f && j<n; j++ )
    //         f &= (a[i][j] && (rows.find(i)==rows.end()) && (cols.find(j)==cols.end()));
    if (f) {
        cout << "YES\n";
        for ( int i=0; i<m; i++ )
        {
            for ( int j=0; j<n; j++ )
                cout << a[i][j] << " ";
            cout << "\n";
        }
    }
    else cout << "NO";    
    return 0;
}