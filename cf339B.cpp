#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, m;
    cin >> n >> m;

    long long int a[m];
    for ( int i=0; i<m; i++ )
        cin >> a[i];
    // initially in house 1
    long long steps = 0;
    long long int pos = 1;
    for ( int i=0; i<m; i++ )
    {
        if (a[i] >= pos)
        {
            steps += (a[i]-pos);
            pos = a[i];
        }
        else
        {
            steps += (n-pos);
            steps += (a[i]);
            pos = a[i];
        }
    }
    cout << steps;
    return 0;
}