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
        vector<int> a(n);
        for ( int i=0; i<n; i++ )
            cin >> a[i];
        priority_queue<pair<int,int>> q;
        for (int i=0; i<n; i++)
            q.push({a[i], i+1});
        
        vector<vector<int>> talks;
        int k = 0;
        while(q.size()>1)
        {
            auto p1 = q.top();
            q.pop();
            auto p2 = q.top();
            q.pop();
            int dur = min ( p1.first, p2.first );
            p1.first -= dur;
            p2.first -= dur;
            k += dur;
            talks.push_back({p1.second, p2.second, dur});
            if (p1.first!=0)
                q.push(p1);
            if (p2.first!=0)
                q.push(p2);
        }
        cout << k << "\n";
        for ( auto c : talks )
            while(c[2]--)
                cout << c[0] << " " << c[1] << "\n"; 
    }

    return 0;
}