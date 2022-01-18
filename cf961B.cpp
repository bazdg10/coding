#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a[n];
    for ( int i=0; i<n; i++ )
        cin >> a[i];
    int t[n];
    for ( int i=0; i<n; i++ )
        cin >> t[i];
    long long the = 0LL;
    for ( int i=0; i<n; i++ )
    {   
        the += a[i]*t[i];
        t[i] = 1-t[i];
    }
    long long add = 0;
    int i=0;
    for ( ;i<k; i++ )
        add += a[i]*t[i];
    long long mx = add;
    for ( ; i<n; i++ )
    {
        add += (t[i]*a[i]);
        add -= (t[i-k]*a[i-k]);
        mx = max ( mx, add );
    }
    cout << mx+the;
    return 0;
}