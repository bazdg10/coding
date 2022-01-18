#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, u, q;
    cin >> n >> m >> u >> q;
    int a[1000][1000];
    int dif[1000][1000];

    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            cin >> a[i][j];
    
    for (int i=1; i<n; i++)
        dif[i][0] = a[i][0] - a[i-1][0];
    for (int j=1; j<m; j++)
        dif[0][j] = a[0][j] - a[0][j-1];
    for (int i=1; i<m; i++)
        for (int j=1; j<n; j++)
            dif[i][j] = a[i][j] - a[i-1][j] - a[i][j-1] + a[i-1][j-1];
    
    int k, r1, r2, c1, c2;
    
    while(u--)
    {
        cin >> k >> r1 >> c1 >> r2 >> c2;
        dif[r1][c1] += k;
        if (r2+1<n)
            dif[r2+1][c1] -= k;
        if (c2+1<m)  
            dif[r1][c1+1] -= k;  
        if (r2+1<n && c2+1<m)
            dif[r2+1][c2+1] += k;
    }

    for ( int i=1; i<n; i++ )
        dif[i][0] += dif[i-1][0];
    for ( int j=1; j<m; j++ )
        dif[0][j] += dif[0][j-1];
    for ( int i=1; i<n; i++ )
        for ( int j=1; j<m; j++ )
            dif[i][j] = dif[i][j] + dif[i-1][j] + dif[i][j-1] - dif[i-1][j-1];
    while(q--)   
    {
        cin >> r1 >> c1 >> r2 >> c2;
        int res = a[r2][c2];
        if (c1-1>=0)
            res -= dif[r2][c1-1];
        if (r1-1>=0)
            res -= dif[r1-1][c2];
        if (c1-1>=0 && r1-1>=0)
            res += dif[r1-1][c1-1];
        cout << res << "\n";
    }
    return 0;
}