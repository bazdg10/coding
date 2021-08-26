#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[m];
    for ( int i=0; i<m; i++ )
        cin >> a[i];
    int f;
    cin >> f;
    int c = 0;
    for ( int i=0; i<m; i++ )
        {
            int h = f^a[i];
            int b = 0;
            while(h && b<=k)
            {
                b += h%2;
                h /= 2;
            }
        c += (b<=k);
        }
    cout << c;
    return 0;
}