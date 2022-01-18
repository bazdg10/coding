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

        int n;
        cin >> n;

        string s;
        cin >> s;

        // int n = s.size();
        bool f = false;
        for ( int i=0; !f && i<n-1; i++ )
        {
            if (s[i]!=s[i+1])
                {
                    cout << i+1 << " " << i+2;
                    f = true;
                }
        }
        if (!f)
            cout << "-1 -1";
    cout << "\n";
    }
    return 0;
}