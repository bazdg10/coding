#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        // vector<vector<char>> game(n, vector<char>(n));
        unordered_set<int> one, two;
        for ( int i=0; i<n; i++ )
        {
            if (s[i]=='1')
                one.insert(i);
            else
                two.insert(i);
        }
        if (two.size()==1)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            unordered_map<int,int> win;
            vector<int> twi;
            for ( int j : two )
                twi.push_back(j);
            sort(twi.begin(), twi.end());
            twi.push_back(twi[0]);
            for ( int i=0; i<twi.size()-1; i++ )
                win[twi[i]] = twi[(i+1)];
            for ( int i=0; i<n; i++ )
            {
                for ( int j=0; j<n; j++ )
                {
                    if (i==j)
                        {
                            cout << "x ";
                            continue;
                        }
                    if (one.find(j)!=one.end() || one.find(i)!=one.end())
                        cout << "= ";
                    else
                        {
                            if (win[i]==j)
                                cout << "+ ";
                            else
                                cout << "- ";
                        }
                }
            cout << "\n";
            }
        cout << "\n";
        }
    }
    return 0;
}