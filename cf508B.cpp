#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool f = false;
    
    for ( int i=0; !f && i<s.size()-1; i++ )
    {
      if ((s[i]-'0')%2==0 && s[i] < s.back() )
            {
                f = true;
                char t = s.back();
                s.back() = s[i];
                s[i] = t;                
            }   
    }    
    for ( int i=s.size()-2; !f && i>=0; i-- )
    {   
        if ((s[i]-'0')%2==0 && s[i] > s.back() )
            {
                f = true;
                char t = s.back();
                s.back() = s[i];
                s[i] = t;                
            }
    }    
    if ((s.back()-'0')%2)   cout << "-1";
    else    cout << s;

    return 0;
}