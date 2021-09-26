#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        if (a==b)
            cout << "0\n";
        else
        {
            int m = (b+1)/2;
            // cout << m << " " << b << "\n"; 
            if (m>=a)   cout << max( b%m, b%(m+1) ) << "\n";
            else cout << b%a << "\n";
        }       
    }
    return 0;
}
// 333333331
// 499999999