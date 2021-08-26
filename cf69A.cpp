#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a=0, b=0, c=0;
    for ( int i=0; i<n; i++ )
    {
        int t1, t2, t3;
        cin >> t1 >> t2 >> t3;
        a += t1;
        b += t2;
        c += t3;
    }
    if (!a && !b && !c) cout << "YES";
    else cout << "NO";
    return 0;
}