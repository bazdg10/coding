#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double t;
    cin >> n >> t;
    double a[n];
    for ( int i=0; i<n; i++ )
        cin >> a[i];
    sort(a, a+n);
    double r = max ( a[0], t-a[n-1] );
    for ( int i=0; i<n-1; i++ )
        r = max ( r, (a[i+1]-a[i])/2.0 );
    cout << fixed << setprecision(10) << r;
    return 0;
}
// 2.5000000000
// 2.5000000000