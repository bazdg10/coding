#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        
        bool f = 0;
        for ( int i=s.size()-2; !f && i>=0; i-- ) {

                if ( (s[i+1]-48) + (s[i]-48) >= 10) {
                    f = true;
                    s[i+1] = (char)((s[i+1]-48+s[i]-48)%10 + 48);
                    s[i] = '1';
                } 
        }
        if (!f) {
            s[1] = (char)((s[0]-48+s[1]-48) + 48);
            s = s.substr(1);
        }
        
    cout << s << "\n";
    }

    return 0;
}