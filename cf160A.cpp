#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    string g = "hello";
    int j=0;
    for (auto c : s)
    {
        if (j<g.size() && g[j]==c)
            j++;
        else
            cnt++;
    }
    if (j==g.size())
        cout << "YES";
    else
        cout << "NO";
    return 0;
}