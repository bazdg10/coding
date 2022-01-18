#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    unordered_map<string,int> m;    
    while(t--) {
        string s;
        cin >> s;
        m[s]++;
        if (m[s]>1) cout << s << m[s]-1 << "\n";
        else cout << "OK" << "\n";
    }

    return 0;
}