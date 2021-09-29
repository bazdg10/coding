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

        vector<int> p(n);
        for (int i=0; i<n; i++)
            cin >> p[i];
    
        deque<int> q;
        q.push_back(p[0]);
        for ( int i=1; i<n; i++ )
        {
            if (q.front() > p[i])
                q.push_front(p[i]);
            else
                q.push_back(p[i]);
        }
        while(!q.empty())
        {
            cout << q.front() << " ";
            q.pop_front();
        }
    cout << "\n";
    }

    return 0;
}