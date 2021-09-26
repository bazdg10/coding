#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool f = true;
    for ( int i=0; f && i<s.size(); )
    {

        if (s[i]=='1')
            {
                if (i+1 < s.size() && s[i+1] == '4')
                    {
                        i+=2;
                        if (s[i]=='4')
                            i++;
                    }
                else
                    i++;
            }
            else
                f = false;
    }
    if (f)  cout << "YES";
    else cout << "NO";
    return 0;
}

Q_50876 : Python Video Wrong
Q_49024 : Python Video Wrong
Q_49334 : Python Video Wrong
Q_48915 : Python Video Wrong
Q_48913 : Python Video Wrong
