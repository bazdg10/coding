#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int a[26] = {0};
    int j = 0;  
    for ( auto c : s )
        {
            if ( j<t.size() && t[j]==c)
                j++;
            a[c-'a']++;
        }
    bool f = true;
    for ( auto c : t )
    {
        a[c-'a']--;
        if (a[c-'a']<0)
            {
                f = false;
                break;
            }
    }
    if (f)
        {
            if (j==t.size())
                cout << "automaton";
            else
            {
                if (t.size()==s.size())
                    cout << "array";
                else
                    cout << "both";
            }
        }
    else
        cout << "need tree";
    return 0;
}