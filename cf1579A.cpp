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
    string s;
    cin >> s;
    int b = 0;
    int e = 0;
    for ( char c : s )
    {
        if (c=='B')
            b++;
        else
            e++;
    }
    if (e!=b)
        cout << "NO\n";
    else
        cout << "YES\n";
    }
    return 0;
}