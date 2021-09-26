#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    for ( int i=0; i<s.size(); i++ ) {
        if (s[i]!=t[i]) s[i] = '1';
        else s[i] = '0';
    }
    cout << s;
    return 0;
}