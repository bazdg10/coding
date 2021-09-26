#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int f = 0;
    for ( int i=0; i<s.size(); i++ )
        f += (s[i]=='4' || s[i]=='7');
    if ((f) == 4 || (f) == 7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}