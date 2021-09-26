#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    vector<int> c(26, 0);
    int m = 0;
    for ( int i=0; i<26; i++ ) 
        {
            cin >> c[i];
            m = max ( m, c[i] );
        }
    int scr = 0;
    int i;
    for ( i=0; i<s.size(); i++ )
        scr += c[s[i]-'a']*(i+1);
    // cout << scr << "\n";
    while(k--)
        scr += m*(++i);
    cout << scr;
    return 0;
}