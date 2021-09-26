#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    int p = 0;
    int c = 0;
    for ( int i=0; i<n; i++ )
    {
        cin >> a[i] >> b[i];
        p += (b[i]-a[i]);
        // cout << p << "\n";
        c = max ( c, p );
    }
    cout << c;
    return 0;
}